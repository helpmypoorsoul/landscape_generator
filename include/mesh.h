#ifndef MESH_H
#define MESH_H

#include <ngl/Vec3.h>
#include <array>

#include "InputArea.h"

//----------------------------------------------------------------------------------------------------------------------
/// @file mesh.h
/// @class Mesh
/// @brief this class defines a mesh landscape,
/// contains the dimensions, all vertex information,
/// and allows for alterations through Input Areas
//----------------------------------------------------------------------------------------------------------------------


class Mesh
{

public:
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief class ctor
  //----------------------------------------------------------------------------------------------------------------------
  Mesh();
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief class dtor
  //----------------------------------------------------------------------------------------------------------------------
  ~Mesh() = default;

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method to initialise the points of the landscape mesh
  //----------------------------------------------------------------------------------------------------------------------
  void initialiseLandPoints();

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method to get access to the landcsape width
  //----------------------------------------------------------------------------------------------------------------------
  float getWidth() const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the landscape width
  /// @param _w is the new width
  //----------------------------------------------------------------------------------------------------------------------
  void setWidth(const float _width);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief method to get access to the landcsape depth
  //----------------------------------------------------------------------------------------------------------------------
  float getDepth() const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the landscape depth
  /// @param _d is the new depth
  //----------------------------------------------------------------------------------------------------------------------
  void setDepth(const float _depth);

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to get the landscape vertex grid normals
  /// @param _n is the index
  //----------------------------------------------------------------------------------------------------------------------
  const ngl::Vec3 getGridNorms (const size_t _n) const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the landscape vertex grid normals
  /// @param _norm is the new vec3 grid normal
  //----------------------------------------------------------------------------------------------------------------------
  void setGridNorms (const ngl::Vec3 _normal);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to get the landscape vertex grid points
  /// @param _n is the index
  //----------------------------------------------------------------------------------------------------------------------
  const ngl::Vec3 getGridPoints (const size_t _n) const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the landscape vertex grid normals
  /// @param _points is the new vec3 grid normal
  //----------------------------------------------------------------------------------------------------------------------
  void setGridPoints (const ngl::Vec3 _points);
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to get the colour of a landscape vertex
  /// @param _n is the index
  //----------------------------------------------------------------------------------------------------------------------
  const ngl::Vec3 getGridColour (const size_t _n) const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the colour for a landscape vertex
  /// @param _points is the new vec3 grid normal
  //----------------------------------------------------------------------------------------------------------------------
  void setGridColour (const ngl::Vec3 _colour);

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to get the colour palette to be displayed
  //----------------------------------------------------------------------------------------------------------------------
  int getColourPalette() const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the colour palette to be displayed
  /// @param _paletteNumber is the number referring to the palette chosen
  //----------------------------------------------------------------------------------------------------------------------
  void setColourPalette(const int _paletteNumber);

  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to get the parameters of an input area
  /// @param _num is the index that indicates which input area to get
  //----------------------------------------------------------------------------------------------------------------------
  const InputArea getInputAreas(const int _num) const;
  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to set the parameters of an input area
  /// @param _num is the index that indicates which input area to get
  /// _pX is the position x, _pY is the position y, _sX is the side x,
  /// _sY is the side y, _v is the height value for the input area
  //----------------------------------------------------------------------------------------------------------------------
  void setInputAreas(const int _num, const int _pX, const int _pY, const int _sX, const int _sY, const float _v);


private:
  friend class Evolution;

  int                       m_palette;
  float                     m_width;
  float                     m_depth;
  std::vector <ngl::Vec3>   m_gridNorms;
  std::vector <ngl::Vec3>   m_gridPoints;
  std::vector <ngl::Vec3>   m_colour;
  std::array<InputArea,4>   m_inputAreas;


  //----------------------------------------------------------------------------------------------------------------------
  /// @brief  method to calculate landscape colour depending on height
  /// @param _height is the z height value of a point
  /// _paletteChoice is the user's choice of colour palette
  //----------------------------------------------------------------------------------------------------------------------
  const ngl::Vec3 calculateColour (const float _height, const int _paletteChoice);

};

#endif // MESH_H
