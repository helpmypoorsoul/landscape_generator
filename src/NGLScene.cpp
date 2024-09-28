//----------------------------------------------------------------------------------------------------------------------
/// @file NGLScene.cpp
/// @brief contains all NGL drawing elements,
/// allows for viusalisation of landscapes through generations
//----------------------------------------------------------------------------------------------------------------------

#include "NGLScene.h"
#include <ngl/NGLInit.h>
#include <ngl/ShaderLib.h>
#include <ngl/VAOPrimitives.h>
#include <ngl/VAOFactory.h>
#include <ngl/SimpleVAO.h>
#include <QGuiApplication>
#include <iostream>

NGLScene::NGLScene(QWidget *_parent) : QOpenGLWidget(_parent)
{

}


//a simple structure to hold vertex data
struct vertData
{
  ngl::Real x;  // 0
  ngl::Real y;  // 1
  ngl::Real z;  // 2
  ngl::Real nx; // 3
  ngl::Real ny; // 4
  ngl::Real nz; // 5
  ngl::Real u;  // 6
  ngl::Real v;  // 7
  ngl::Real r;  // 8
  ngl::Real g;  // 9
  ngl::Real b;  //10
};


void NGLScene::initializeGL()
{
  //calling this first before any other GL commands to load and link the
  //GL commands from the lib, if not, the program will crash
  ngl::NGLInit::initialize();
  glClearColor( 0.2f, 0.2f, 0.2f, 1.0f ); // Dark Grey Background
  //enable depth testing for drawing
  glEnable( GL_DEPTH_TEST );
  //enable multisampling for smoother drawing
  glEnable( GL_MULTISAMPLE );

  //creating a view matrix for the camera
  //to fix projection z as normal-up camera
  ngl::Vec3 eye{ 25.0f, 25.0f, 20.0f };
  m_view = ngl::lookAt(eye, ngl::Vec3::zero(), ngl::Vec3(0.0f,0.0f,1.0f));

  //loading landscape shaders
  ngl::ShaderLib::loadShader("LandShader","shaders/LandVertex.glsl","shaders/LandFragment.glsl");

  //creating the simple VAO to be used for the triangle-strip landscape mesh
  m_vao=ngl::VAOFactory::createVAO(ngl::simpleVAO,GL_TRIANGLE_STRIP);
}


void NGLScene::resizeGL( int _width, int _height )
{
  m_projection = ngl::perspective( 45.0f, static_cast<float>(_width ) / _height, 0.1f, 200.0f );
}


void NGLScene::buildInitial(Mesh _landscape)
{
  //call function to set the grid points
  //and colour etc for first landscape
  _landscape.initialiseLandPoints();
  //set that landscape as the first
  //in the landscape iteration array
  m_landArray.setIterationNum(0);
  m_landArray.setIteration(0,_landscape);
}


void NGLScene::buildIterations(Evolution _landEvolution, int _numOfLandscapes)
{
  //set the number of iterations to be calculated
  _landEvolution.setIterationNum(_numOfLandscapes);
  //calculate those landscapes
  _landEvolution.fillArray();
  //call to build the landscape specified by the slider
  buildLand(_landEvolution.getIteration(_landEvolution.getIterationDrawnNum()));
}


void NGLScene::loadMatricesToShader()
{
  ngl::Mat4 MVP = m_projection * m_view * m_mouseGlobalTX;
  ngl::ShaderLib::setUniform("MVP",MVP);
}


void NGLScene::buildLand(Mesh _landscape)
{
  //bind so active for data setting
  m_vao->bind();
  //temporary vertData structure
  vertData d;
  //calculate the buffer size
  size_t buffSize = -2+1 +(static_cast<size_t>((_landscape.getWidth())-1)) * ((static_cast<size_t>(_landscape.getDepth())*2) + (2*(static_cast<size_t>(_landscape.getWidth()-1))));
  //define std::vector where data will be stores
  std::vector <vertData> data(buffSize);

  //fill in a the vertData structure and add to the data list for the landscape
  unsigned int index=0;
  //note the loop is till i == width-2
  for( size_t i = 0; i < _landscape.getWidth()-1; ++i )
  {
    for( size_t j = 0; j < _landscape.getDepth(); ++j )
    {
      //fill the normals
      d.nx = _landscape.getGridNorms(j+i*_landscape.getDepth()).m_x;
      d.ny = _landscape.getGridNorms(j+i*_landscape.getDepth()).m_y;
      d.nz = _landscape.getGridNorms(j+i*_landscape.getDepth()).m_z;
      //fill the points - note pivot adjustment
      d.x = (_landscape.getGridPoints(j+i*_landscape.getDepth()).m_x)-_landscape.getWidth()/2.f;
      d.y = (_landscape.getGridPoints(j+i*_landscape.getDepth()).m_y)-_landscape.getDepth()/2.f;
      d.z = _landscape.getGridPoints(j+i*_landscape.getDepth()).m_z;
      //fill the colour
      d.r = _landscape.getGridColour(j+i*_landscape.getDepth()).m_r;
      d.g = _landscape.getGridColour(j+i*_landscape.getDepth()).m_g;
      d.b = _landscape.getGridColour(j+i*_landscape.getDepth()).m_b;
      //fill uvs
      d.u  = j/_landscape.getDepth();
      d.v  = i/_landscape.getWidth();

      //add to the data list
      data[index++]=d;

      //fill for i+1
      //fill the normals
      d.nx = _landscape.getGridNorms(j+(i+1)*_landscape.getDepth()).m_x;
      d.ny = _landscape.getGridNorms(j+(i+1)*_landscape.getDepth()).m_y;
      d.nz = _landscape.getGridNorms(j+(i+1)*_landscape.getDepth()).m_z;
      //fill the points - note pivot adjustment
      d.x = (_landscape.getGridPoints(j+(i+1)*_landscape.getDepth()).m_x)-_landscape.getWidth()/2.f;
      d.y = (_landscape.getGridPoints(j+(i+1)*_landscape.getDepth()).m_y)-_landscape.getDepth()/2.f;
      d.z = _landscape.getGridPoints(j+(i+1)*_landscape.getDepth()).m_z;
      //fill the colour
      d.r = _landscape.getGridColour(j+(i+1)*_landscape.getDepth()).m_r;
      d.g = _landscape.getGridColour(j+(i+1)*_landscape.getDepth()).m_g;
      d.b = _landscape.getGridColour(j+(i+1)*_landscape.getDepth()).m_b;
      //fill uvs
      d.u  = j/_landscape.getDepth();
      d.v  = (i+1)/_landscape.getWidth();

      //add to the data list
      data[index++]=d;

    }//end inner loop

    //as long as it's not the last triangle strip point
    if(i<_landscape.getWidth()-2)
    {
      //repetition of last point of row
      //fill the normals
      d.nx = _landscape.getGridNorms(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_x;
      d.ny = _landscape.getGridNorms(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_y;
      d.nz = _landscape.getGridNorms(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_z;
      //fill the points - note pivot adjustment
      d.x = (_landscape.getGridPoints(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_x)-_landscape.getWidth()/2.f;
      d.y = (_landscape.getGridPoints(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_y)-_landscape.getDepth()/2.f;
      d.z = _landscape.getGridPoints(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_z;
      //fill the colour
      d.r = _landscape.getGridColour(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_r;
      d.g = _landscape.getGridColour(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_g;
      d.b = _landscape.getGridColour(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_b;
      //fill uvs
      d.u  = (_landscape.getDepth()-1)/_landscape.getDepth();
      d.v  = (i+1)/_landscape.getWidth();

      //add to the data list
      data[index++]=d;


      //repetition of first point of next row
      //fill the normals
      d.nx = _landscape.getGridNorms((i+1)*_landscape.getDepth()).m_x;
      d.ny = _landscape.getGridNorms((i+1)*_landscape.getDepth()).m_y;
      d.nz = _landscape.getGridNorms((i+1)*_landscape.getDepth()).m_z;
      //fill the points - note pivot adjustment
      d.x = (_landscape.getGridPoints((i+1)*_landscape.getDepth()).m_x)-_landscape.getWidth()/2.f;
      d.y = (_landscape.getGridPoints((i+1)*_landscape.getDepth()).m_y)-_landscape.getDepth()/2.f;
      d.z = _landscape.getGridPoints((i+1)*_landscape.getDepth()).m_z;
      //fill the colour
      d.r = _landscape.getGridColour((i+1)*_landscape.getDepth()).m_r;
      d.g = _landscape.getGridColour((i+1)*_landscape.getDepth()).m_g;
      d.b = _landscape.getGridColour((i+1)*_landscape.getDepth()).m_b;
      //fill uvs
      d.u  = 0;
      d.v  = (i+1)/_landscape.getWidth();

      //add to the data list
      data[index++]=d;
    }
    else
    {
      //repetition of last point of row
      //fill the normals
      d.nx = _landscape.getGridNorms(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_x;
      d.ny = _landscape.getGridNorms(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_y;
      d.nz = _landscape.getGridNorms(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_z;
      //fill the points - note pivot adjustment
      d.x = (_landscape.getGridPoints(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_x)-_landscape.getWidth()/2.f;
      d.y = (_landscape.getGridPoints(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_y)-_landscape.getDepth()/2.f;
      d.z = _landscape.getGridPoints(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_z;
      //fill the colour
      d.r = _landscape.getGridColour(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_r;
      d.g = _landscape.getGridColour(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_g;
      d.b = _landscape.getGridColour(_landscape.getDepth()-1+(i+1)*_landscape.getDepth()).m_b;
      //fill uvs
      d.u  = (_landscape.getDepth()-1)/_landscape.getDepth();
      d.v  = (i+1)/_landscape.getWidth();

      //add to the data list
      data[index++]=d;
    }
  }// end outer loop

  //add the landscape data to the VAO, telling it how many bytes and address of first element
  m_vao->setData(ngl::AbstractVAO::VertexData(buffSize*sizeof(vertData),data[0].x));
  //set the vertexAttributePointer to point to the interleaved data correctly
  m_vao->setVertexAttributePointer(0,3,GL_FLOAT,sizeof(vertData),0);
  m_vao->setVertexAttributePointer(1,3,GL_FLOAT,sizeof(vertData),3);
  m_vao->setVertexAttributePointer(2,2,GL_FLOAT,sizeof(vertData),6);
  m_vao->setVertexAttributePointer(3,3,GL_FLOAT,sizeof(vertData),8);
  //set the size of the buffer/num verts to draw
  m_vao->setNumIndices(buffSize);
  //finished for now so unbind the VAO
  m_vao->unbind();
}


void NGLScene::paintGL()
{
  glViewport( 0, 0, width(), height() );
  //clear the screen and depth buffer
  glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT ); // clear the screen and depth buffer

  //grab an instance of the shader
  ngl::ShaderLib::use("LandShader");

  //build initial landscape
  buildInitial(m_initialLand);
  //set iteration number to calculate
  m_landArray.setIterationNum(m_numOfIterationsToCalculate);
  //build iterations
  buildIterations(m_landArray, m_landArray.getIterationNum());

  //for mouse controls
  //rotation based on mouse position for global parameters
  ngl::Mat4 rotX;
  ngl::Mat4 rotY;
  // create the rotation matrices
  rotX.rotateX( m_win.spinXFace );
  //rotY.rotateY( m_win.spinYFace );
  rotY.rotateZ( m_win.spinYFace );
  // multiply the rotationssetUniform
  m_mouseGlobalTX = rotY * rotX;
  // add the translations
  m_mouseGlobalTX.m_m[ 3 ][ 0 ] = m_modelPos.m_x;
  m_mouseGlobalTX.m_m[ 3 ][ 1 ] = m_modelPos.m_y;
  m_mouseGlobalTX.m_m[ 3 ][ 2 ] = m_modelPos.m_z;

  update();

  //then loadmatrices again
  loadMatricesToShader();

  m_vao->bind();
  m_vao->draw();
  // now we are done so unbind
  m_vao->unbind();
}


void NGLScene::keyPressEvent( QKeyEvent* _event )
{
  //this method is called every time the main window recives a key event.
  //we then switch on the key value and set the camera in the GLWindow
  switch ( _event->key() )
  {
  //escape key to quit
  case Qt::Key_Escape:
      QGuiApplication::exit( EXIT_SUCCESS );
      break;
  //turn on wirframe rendering
  case Qt::Key_W :
      glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
      break;
  //turn off wire frame
  case Qt::Key_S :
      glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
      break;
  //re-centre landscape
  case Qt::Key_Space :
      m_win.spinXFace=0;
      m_win.spinYFace=0;
      m_modelPos.set(ngl::Vec3::zero());
      break;
  default:
      break;
  }
  //update the GLWindow and re-draw
  update();
}


//graphic user interface driven functions
void NGLScene::addLeftRule(double _newRule)
{
  m_landArray.setLeftRule(_newRule);
}
void NGLScene::addRightRule(double _newRule)
{
  m_landArray.setRightRule(_newRule);
}
void NGLScene::addCentreRule(double _newRule)
{
  m_landArray.setCentreRule(_newRule);
}
void NGLScene::addBottomRule(double _newRule)
{
  m_landArray.setBottomRule(_newRule);
}
void NGLScene::addTopRule(double _newRule)
{
  m_landArray.setTopRule(_newRule);
}
void NGLScene::addDeltaRule(double _newRule)
{
  m_landArray.setDeltaRule(_newRule);
}

//iterations
void NGLScene::setMaxIterations(int _num)
{
  m_numOfIterationsToCalculate = _num;
}
void NGLScene::setIterationSlider(int _newSliderValue)
{
  float scale = m_numOfIterationsToCalculate/100.f;
  m_landArray.setIterationDrawnNum(scale*_newSliderValue);
}

//input areas
void NGLScene::setAreaOne(int _x, int _y, int _sx, int _sy, double _val)
{
  float scale = (m_initialLand.getWidth())/100.f;
  m_initialLand.setInputAreas(0,scale*_x,scale*_y,scale*_sx,scale*_sy,_val);
}
void NGLScene::setAreaTwo(int _x, int _y, int _sx, int _sy, double _val)
{
  float scale = (m_initialLand.getWidth())/100.f;
  m_initialLand.setInputAreas(1,_x*scale,_y*scale,scale*_sx,scale*_sy,_val);
}
void NGLScene::setAreaThree(int _x, int _y, int _sx, int _sy, double _val)
{
  float scale = (m_initialLand.getWidth())/100.f;
  m_initialLand.setInputAreas(2,scale*_x,scale*_y,scale*_sx,scale*_sy,_val);
}
void NGLScene::setAreaFour(int _x, int _y, int _sx, int _sy, double _val)
{
  float scale = (m_initialLand.getWidth())/100.f;
  m_initialLand.setInputAreas(3,scale*_x,scale*_y,scale*_sx,scale*_sy,_val);
}

//colour palettes
void NGLScene::setColourPaletteOne()
{
  m_initialLand.setColourPalette(1);
  m_landArray.setEvolutionColourPalette(1);
}
void NGLScene::setColourPaletteTwo()
{
  m_initialLand.setColourPalette(2);
  m_landArray.setEvolutionColourPalette(2);
}
void NGLScene::setColourPaletteThree()
{
  m_initialLand.setColourPalette(3);
  m_landArray.setEvolutionColourPalette(3);
}

