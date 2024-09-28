//----------------------------------------------------------------------------------------------------------------------
/// @file Evolution.cpp
/// @brief contains the functions to calculate and fill
/// the array, also contains the relevant get/set functions
//----------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "Evolution.h"

Evolution::Evolution() :
                         m_left                 (-0.8f),
                         m_right                (1.f),
                         m_centre               (0.0f),
                         m_bottom               (0.6f),
                         m_top                  (-1.f),
                         m_delta                (0.02f),
                         m_iterationNum         (499),
                         m_iterationDrawnNum    (0)

{;}


void Evolution::fillArray()
{
    //for each landscape, excluding the initial one,
    //and up to the iteration number inputted, we apply the height rules
    //using the previous iteration landscape as input
    for(size_t t= 1; t<=m_iterationNum; ++t)
    {
      m_iterations[t] = applyRules(m_iterations[t-1]);
    }
}


const Mesh Evolution::applyRules(Mesh _previousLandscape)
{
  //defines the next landscape and height to be calculated
  Mesh nextLand;
  float h;
  nextLand.setWidth(_previousLandscape.getWidth());
  nextLand.setDepth(_previousLandscape.getDepth());

  //loops through the points in the landscape grid
  for(int j=0; j<_previousLandscape.getDepth();++j)
  {
    for(int i=0; i<_previousLandscape.getWidth();++i)
    {
      //calculates the height
      h = _previousLandscape.getGridPoints(j*_previousLandscape.getWidth()+i).m_z
          + m_delta*(m_left*_previousLandscape.getGridPoints(j*_previousLandscape.getWidth()+fmod((i-1+_previousLandscape.getWidth()),_previousLandscape.getWidth())).m_z
          + m_right*_previousLandscape.getGridPoints(j*_previousLandscape.getWidth()+fmod((i+1),_previousLandscape.getWidth())).m_z
          + m_centre*_previousLandscape.getGridPoints(j*_previousLandscape.getWidth()+i).m_z
          + m_bottom*_previousLandscape.getGridPoints((fmod((j-1+_previousLandscape.getDepth()),_previousLandscape.getDepth()))*_previousLandscape.getWidth()+i).m_z
          + m_top*_previousLandscape.getGridPoints((fmod((j+1),_previousLandscape.getDepth()))*_previousLandscape.getWidth()+i).m_z);

       //sets the new grid points with new z-value
       nextLand.setGridPoints(ngl::Vec3(i,j,h));
       //sets the new grid normal points
       nextLand.setGridNorms(ngl::Vec3(0.f,0.f,1.f));
       //sets the new grid colour after calling a function to calculate it
       nextLand.setGridColour(nextLand.calculateColour(h,m_evolutionColourPalette));
     }
  }
  return nextLand;
}



const Mesh Evolution::getIteration(const int _n) const
{
  return m_iterations[_n];
}
void Evolution::setIteration(const int _n, const Mesh _landscapeToSet)
{
  m_iterations[_n]=_landscapeToSet;
}

size_t Evolution::getIterationDrawnNum() const
{
  return m_iterationDrawnNum;
}
void Evolution::setIterationDrawnNum(const size_t _n)
{
  //setting iteration being drawn
  //for slider set-up
  m_iterationDrawnNum = _n;
}

size_t Evolution::getIterationNum() const
{
  return m_iterationNum;
}

void Evolution::setIterationNum(const size_t _n)
{
  m_iterationNum = _n;
}

int Evolution::getEvolutionColourPalette() const
{
  //gets the colour palette chosen for the
  //landscape iteration being visualised
  return m_iterations[m_iterationDrawnNum].getColourPalette();
}
void Evolution::setEvolutionColourPalette(const int _paletteNumber)
{
  //sets the colour palette
  m_evolutionColourPalette = _paletteNumber;
}

float Evolution::getLeftRule() const
{
  return m_left;
}
void Evolution::setLeftRule(const float _l)
{
  m_left = _l;
}
float Evolution::getRightRule() const
{
  return m_right;
}
void Evolution::setRightRule(const float _r)
{
  m_right = _r;
}
float Evolution::getCentreRule() const
{
  return m_centre;
}
void Evolution::setCentreRule(const float _c)
{
  m_centre = _c;
}
float Evolution::getBottomRule() const
{
  return m_bottom;
}
void Evolution::setBottomRule(const float _b)
{
  m_bottom = _b;
}
float Evolution::getTopRule() const
{
  return m_top;
}
void Evolution::setTopRule(const float _t)
{
  m_top = _t;
}
float Evolution::getDeltaRule() const
{
  return m_delta;
}
void Evolution::setDeltaRule(const float _d)
{
  m_delta = _d;
}



