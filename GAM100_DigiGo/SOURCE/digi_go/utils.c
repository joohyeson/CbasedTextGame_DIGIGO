/******************************************************************************/
/*
\project name DIGI_GO
\file   Utils.C
\primary contributor  Jung hye rin
\par    Course: GAM100
\brief
decleration for utilites
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#include "utils.h" /* CURSOR_TYPE */
#include "main.h"

/* function for hide cursor */
void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;

	switch (c) {
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NORMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}

void ClearLine(short xPosition, short yPosition)
{
	gotoxy(xPosition, yPosition);
	printf("                                                                               ");
}

/* function for clear screen */
void ClearScreen(void)
{
	system("cls");
}

/* function for waiting certain time */
void Wait(long waitTime)
{
	clock_t	wakeTime;
	wakeTime = waitTime + clock();
	while (wakeTime > clock())
	{
		
	}
}

/* function for put indent */
void PrintIndent(int number, char Menu[])
{
	for (int i = 0; i < number - 1; i++)
	{
		printf(" ");
	}
	printf("%s", Menu);

}

/* function for control cursor position */
void gotoxy(short x, short y)
{
	COORD pos;
	pos.X = x;
	pos.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
