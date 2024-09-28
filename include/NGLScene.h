#ifndef NGLSCENE_H_
#define NGLSCENE_H_

#include <ngl/Vec3.h>
#include <ngl/Mat4.h>
#include <ngl/AbstractVAO.h>
#include <QKeyEvent>
#include <QOpenGLWidget>

#include "Evolution.h"
#include "mesh.h"
#include "WindowParams.h"

//----------------------------------------------------------------------------------------------------------------------
/// @file NGLScene.h
/// @brief this class allows the use NGL to draw OpenGL
/// Modified from:
/// Jonathan Macey - 10/9/13
/// @class NGLScene
/// @brief our main glwindow widget for NGL applications all drawing elements are
/// put in this file
//----------------------------------------------------------------------------------------------------------------------


class NGLScene : public QOpenGLWidget
{
  Q_OBJECT
public:
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief ctor for our NGL drawing class
  /// @param [in] parent the parent window to the class
  //----------------------------------------------------------------------------------------------------------------------
  NGLScene(QWidget *_parent);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief dtor must close down ngl and release OpenGL resources
  //----------------------------------------------------------------------------------------------------------------------
  ~NGLScene() override = default;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief the initialize class is called once when the window is created and we have a valid GL context
  /// use this to setup any default GL stuff
  //----------------------------------------------------------------------------------------------------------------------
  void initializeGL() override;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this is called everytime we want to draw the scene
  //----------------------------------------------------------------------------------------------------------------------
  void paintGL();
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this is called everytime we want to draw the scene
  //----------------------------------------------------------------------------------------------------------------------
  void resizeGL(int _width, int _height) override;

private:
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief the windows params such as mouse and rotations etc
  //----------------------------------------------------------------------------------------------------------------------
  WinParams m_win;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief used to store the global mouse transforms
  //----------------------------------------------------------------------------------------------------------------------
  ngl::Mat4 m_mouseGlobalTX;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief the model position for mouse movement
  //----------------------------------------------------------------------------------------------------------------------
  ngl::Vec3 m_modelPos;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief the view matrix for camera
  //----------------------------------------------------------------------------------------------------------------------
  ngl::Mat4 m_view;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief the projection matrix for camera
  //----------------------------------------------------------------------------------------------------------------------
  ngl::Mat4 m_projection;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief vertex array object for the landscape
  //----------------------------------------------------------------------------------------------------------------------
  std::unique_ptr<ngl::AbstractVAO> m_vao;


  int           m_numOfIterationsToCalculate = 1;
  Mesh          m_initialLand;
  Evolution     m_landArray;

private:
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method to load transform matrices to the shader
  //----------------------------------------------------------------------------------------------------------------------
  void loadMatricesToShader();
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this method is called every time a mouse is moved
  /// @param _event the Qt Event structure
  //----------------------------------------------------------------------------------------------------------------------
  void mouseMoveEvent (QMouseEvent *_event) override;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this method is called everytime the mouse button is pressed
  /// inherited from QObject and overridden here.
  /// @param _event the Qt Event structure
  //----------------------------------------------------------------------------------------------------------------------
  void mousePressEvent ( QMouseEvent *_event) override;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this method is called everytime the mouse button is released
  /// inherited from QObject and overridden here.
  /// @param _event the Qt Event structure
  //----------------------------------------------------------------------------------------------------------------------
  void mouseReleaseEvent ( QMouseEvent *_event) override;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief this method is called everytime the mouse wheel is moved
  /// inherited from QObject and overridden here.
  /// @param _event the Qt Event structure
  //----------------------------------------------------------------------------------------------------------------------
  void wheelEvent( QWheelEvent *_event) override;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief Qt Event called when a key is pressed
  /// @param [in] _event the Qt event to query for size etc
  //----------------------------------------------------------------------------------------------------------------------
  void keyPressEvent(QKeyEvent *_event) override;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method that sets the landscape data to be passed to the VAO
  /// @param [in] _landscape the mesh landscape iteration that is to be visualised
  //----------------------------------------------------------------------------------------------------------------------
  void buildLand(Mesh _landscape);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method called to build and update initial starting landscape
  /// @param [in] _num the number of iteration that is being initialised,
  /// _landscape the mesh landscape that is being set as initial
  //----------------------------------------------------------------------------------------------------------------------
  void buildInitial(Mesh _landscape);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method called to calculate the evolution of the landscape
  /// @param [in] _landEvolution variable that has the information of the evolution
  /// _numOfLandscapes is the number of landscapes that are going to be calculated
  //----------------------------------------------------------------------------------------------------------------------
  void buildIterations( Evolution _landEvolution, int _numOfLandscapes);



public slots :
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies the left rule
  /// @param [in] _newRule the new value for the rule
  //----------------------------------------------------------------------------------------------------------------------
  void addLeftRule(double _newRule);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies the right rule
  /// @param [in] _newRule the new value for the rule
  //----------------------------------------------------------------------------------------------------------------------
  void addRightRule(double _newRule);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies the centre rule
  /// @param [in] _newRule the new value for the rule
  //----------------------------------------------------------------------------------------------------------------------
  void addCentreRule(double _newRule);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies the bottom rule
  /// @param [in] _newRule the new value for the rule
  //----------------------------------------------------------------------------------------------------------------------
  void addBottomRule(double _newRule);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies the top rule
  /// @param [in] _newRule the new value for the rule
  //----------------------------------------------------------------------------------------------------------------------
  void addTopRule(double _newRule);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies the delta rule value
  /// @param [in] _newRule the new value for the rule
  //----------------------------------------------------------------------------------------------------------------------
  void addDeltaRule(double _newRule);

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user sets the first input area
  /// @param [in] _x the position on the x axis, _y the position on the y axis,
  ///  _sx the size of the x-side, _sy the size of the y-side, _val height value
  //----------------------------------------------------------------------------------------------------------------------
  void setAreaOne(int _x, int _y, int _sx, int _sy, double _val);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user sets the second input area
  /// @param [in] _x the position on the x axis, _y the position on the y axis,
  ///  _sx the size of the x-side, _sy the size of the y-side, _val height value
  //----------------------------------------------------------------------------------------------------------------------
  void setAreaTwo(int _x, int _y, int _sx, int _sy, double _val);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user sets the third input area
  /// @param [in] _x the position on the x axis, _y the position on the y axis,
  ///  _sx the size of the x-side, _sy the size of the y-side, _val height value
  //----------------------------------------------------------------------------------------------------------------------
  void setAreaThree(int _x, int _y, int _sx, int _sy, double _val);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user sets the fourth input area
  /// @param [in] _x the position on the x axis, _y the position on the y axis,
  ///  _sx the size of the x-side, _sy the size of the y-side, _val height value
  //----------------------------------------------------------------------------------------------------------------------
  void setAreaFour(int _x, int _y, int _sx, int _sy, double _val);

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies what the maximum iteration to be drawn is
  /// @param [in] _num the new value for the maximum
  //----------------------------------------------------------------------------------------------------------------------
  void setMaxIterations(int _num);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user modifies what iteration to visualise
  /// @param [in] _newSliderValue the new value for the iteration number
  //----------------------------------------------------------------------------------------------------------------------
  void setIterationSlider(int _newSliderValue);

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user selects colour palette one
  //----------------------------------------------------------------------------------------------------------------------
  void setColourPaletteOne();
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user selects colour palette two
  //----------------------------------------------------------------------------------------------------------------------
  void setColourPaletteTwo();
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief function called when the user selects colour palette three
  //----------------------------------------------------------------------------------------------------------------------
  void setColourPaletteThree();

};


#endif
