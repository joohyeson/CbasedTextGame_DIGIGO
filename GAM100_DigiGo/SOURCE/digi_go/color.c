/******************************************************************************/
/*
\project name DIGI_GO
\file   Color.c
\primary contributor Son ju hye
\author Son ju hye, Kim ha gyeong
\par    Course: GAM100
\brief
This program control the color of background and text
All content ¨Ï 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#include "color.h"

void ColorInit(void)
{
	stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(stdHandle, WHITE);
	system("color 0F");

}

void printColoredText(char* str, int foreground, int spaces, int background) //txt color and indent
{
	for (int count = 0; count < spaces; count++)
	{
		printf(" ");
	}
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)color);
	printf("%s", str);
}