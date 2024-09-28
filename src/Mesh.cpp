//----------------------------------------------------------------------------------------------------------------------
/// @file Mesh.cpp
/// @brief contains the functions to calculate colour, set the
/// initial landscape, and also necessary contains get/set functions
//----------------------------------------------------------------------------------------------------------------------

#include <math.h>
#include "mesh.h"


Mesh::Mesh() : m_palette    (1),
               m_width      (21.f),
               m_depth      (21.f),
               m_inputAreas()
{;}



const ngl::Vec3 Mesh::calculateColour (const float _height, const int _paletteChoice)
{
  //to calculate the colour of a point depending on the height and palette choice
  //define the range of heights
  float maxHeight = 5.f;
  float minHeight = -5.f;
  int numberOfColours = 6;
  //calculate the colour bands depending on height range and value
  float delta = (maxHeight-minHeight)/numberOfColours;
  int k = floor((_height-minHeight)/delta);

  //define what colours to use when k is out of bounds
  if(k>=numberOfColours) {k = numberOfColours - 1;}
  if(k<0) {k=0;}

  //define colour palettes
  std::vector <ngl::Vec3> paletteOne = {{0.000f, 0.000f, 0.804f},{0.118f, 0.565f, 1.000f},{0.604f, 0.804f, 0.196f},{0.133f, 0.545f, 0.133f},{0.545f, 0.271f, 0.075f},{0.878f, 1.000f, 1.000f}};
  std::vector <ngl::Vec3> paletteTwo = {{0.184f, 0.310f, 0.310f},{0.627f, 0.322f, 0.176f},{0.824f, 0.412f, 0.118f},{0.545f, 0.271f, 0.075f},{0.698f, 0.133f, 0.133f},{0.545f, 0.000f, 0.000f}};
  std::vector <ngl::Vec3> paletteThree = {{0.663f, 0.663f, 0.663f},{0.373f, 0.620f, 0.627f},{0.878f, 1.000f, 1.000f},{0.690f, 0.878f, 0.902f},{0.439f, 0.502f, 0.565f},{0.878f, 1.000f, 1.000f}};

  //returning the colour of the band
  //depending on the user palette choice
  if(_paletteChoice == 1)
  {
    return paletteOne[k];
  }
  if(_paletteChoice == 2)
  {
    return paletteTwo[k];
  }
  if(_paletteChoice == 3)
  {
    return paletteThree[k];
  }
  //else paletteOne is default
  else return paletteOne[k];
}


void Mesh::initialiseLandPoints()
{
  //to initialise the starting landscape either
  //with default grid or with user input areas
  //internal variable h for height
  float h=0.f;

  //loop for every point in the landscape
  for(int j=0; j<getDepth();++j)
  {
    for(int i=0; i<getWidth();++i)
    {
      //flag set up
      bool isPointInInputArea = false;
      //loop through the array of input areas
      for (int n=0; n<4; ++n)
      {
        //if the point is inside any of the input areas,
        //the point z-axis is set to the input area height value
        if(isPointInInputArea == false
           && j<((getInputAreas(n).posX+(getInputAreas(n).sideX/2)))
           && j>((getInputAreas(n).posX-(getInputAreas(n).sideX)/2))
           && i<((getInputAreas(n).posY+(getInputAreas(n).sideY)/2))
           && i>((getInputAreas(n).posY-(getInputAreas(n).sideY)/2)))
           {
             h = getInputAreas(n).value;
             m_gridPoints.push_back(ngl::Vec3(i,j,h));

             isPointInInputArea = true;
           }
       }
       //if the point already is in a different input area then the
       //z-axis is set to 0, height is 0
       if (isPointInInputArea == false)
       {
         h = 0.f;
         m_gridPoints.push_back(ngl::Vec3(i,j,h));
       }
         m_gridNorms.push_back(ngl::Vec3(0.f,0.f,1.f));
         //set the colour after calculating it, taking account the height and palette choice
         m_colour.push_back(calculateColour(h,getColourPalette()));
     }
  }
}

void Mesh::setWidth(const float _width)
{
  m_width = _width;
}
float Mesh::getWidth() const
{
  return m_width;
}

void Mesh::setDepth(const float _depth)
{
  m_depth = _depth;
}
float Mesh::getDepth() const
{
  return m_depth;
}

void Mesh::setColourPalette(const int _paletteNumber)
{
  m_palette = _paletteNumber;
}

int Mesh::getColourPalette() const
{
  return m_palette;
}

void Mesh::setInputAreas(const int _num, const int _pX, const int _pY,
                         const int _sX, const int _sY, const float _v)
{
  //_num is which number of imput area it is
  m_inputAreas[_num].posX  = _pX;
  m_inputAreas[_num].posY  = _pY;
  m_inputAreas[_num].sideX = _sX;
  m_inputAreas[_num].sideY = _sY;
  m_inputAreas[_num].value = _v;
}

const InputArea Mesh::getInputAreas(const int _num) const
{
  return m_inputAreas[_num];
}


void Mesh::setGridNorms (const ngl::Vec3 _normal)
{
  m_gridNorms.push_back(ngl::Vec3(_normal));
}
const ngl::Vec3 Mesh::getGridNorms (const size_t _n) const
{
  return m_gridNorms[_n];
}

void Mesh::setGridPoints (const ngl::Vec3 _points)
{
  m_gridPoints.push_back(ngl::Vec3(_points));
}
const ngl::Vec3 Mesh::getGridPoints (const size_t _n) const
{
  return m_gridPoints[_n];
}

void Mesh::setGridColour (const ngl::Vec3 _colour)
{
  m_colour.push_back(ngl::Vec3(_colour));
}
const ngl::Vec3 Mesh::getGridColour (const size_t _n) const
{
  return m_colour[_n];
}





