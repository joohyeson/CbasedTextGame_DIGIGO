/******************************************************************************/
/*
\project name DIGI_GO
\file   DrawMapFuntcion.h
\primary contributor Shon hae won
\author Shon hae won, Jung hye rin
\par    Course: GAM100
\brief
this file is for functions for drawing factors
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#pragma once

#include "main.h" /* WIDTH, HEIGHT */

void DrawMap(char map[][WIDTH], char copyMap[][WIDTH]);
void DrawCharacter(short position);
void InitializeMap(char map[][WIDTH], char copyMap[][WIDTH]);
int CharacterMoveFunction(int characterPosition);
