/******************************************************************************/
/*
\project name DIGI_GO
\file   Color.h
\primary contributor Son ju hye
\par    Course: GAM100
\brief
This program control the color of background and text
All content ¨Ï 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#pragma once

#include "main.h"

#define BLACK 0
#define DARK_BLUE 1
#define DARK_GREEN 2
#define DARK_CYAN 3
#define DARK_RED 4
#define DARK_PURPLE 5
#define DARK_YELLOW 6
#define GRAY 7
#define DARK_GRAY 8
#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PURPLE 13
#define YELLOW 14
#define WHITE 15

HANDLE stdHandle;

void ColorInit(void);
void printColoredText(char* str, int colorId, int spaces, int background);


