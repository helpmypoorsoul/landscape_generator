#ifndef INPUTAREA_H
#define INPUTAREA_H

//----------------------------------------------------------------------------------------------------------------------
/// @file InputArea.h
/// @struct InputArea
/// @brief this struct defines an input area,
/// whcih is then used to alter the initial landscape
//----------------------------------------------------------------------------------------------------------------------

struct InputArea
{
  int posX    =   0;
  int posY    =   0;
  int sideX   =   0;
  int sideY   =   0;
  float value = 0.f;
};

#endif // INPUTAREA_H
