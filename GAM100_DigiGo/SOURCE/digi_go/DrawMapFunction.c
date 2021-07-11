/******************************************************************************/
/*
\project name DIGI_GO
\file   DrawMapFuntcion.c
\primary contributor Shon hae won
\author Shon hae won, Jung hye rin, Kim ha gyeong
\par    Course: GAM100
\brief
This program prints the overall game (creator, map, and grade) on the screen.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "utils.h" /* gotoxy, ClearLine */
#include "TimeAndGrade.h" /* Grade */
#include "UserInfo.h" /* GetUserInfo */

#define LEFT 75   // keyboard inputs
#define RIGHT 77

/* function for draw map */
void DrawMap(char map[][WIDTH], char copyMap[][WIDTH])
{
	for (short i = 0; i < HEIGHT; i++)
	{
		for (short j = 1; j < WIDTH-1; j++)
		{
			/* if the part of current map is different with copied map, 
				print that part only and copy changed map */
			if (map[i][j] != copyMap[i][j])
			{
				gotoxy(j, i);
				printf("%c", map[i][j]);
				copyMap[i][j] = map[i][j];
			}
		}
	}
	/* function for print current grade and credit */
	Grade();
}

int CharacterMoveFunction(int characterPosition)
{
	int key;

	/* check if there is a key input */
	if (_kbhit()) 
	{
		/* get key input and change the position based on input */
		key = _getch();
		switch (key)
		{
		case LEFT:	
			/* if position is larger than minimum */
			if (characterPosition > 1)
				characterPosition -= 2;
			break;
		case RIGHT:
			/* if position is smaller than maximum */
			if (characterPosition < (WIDTH - (BASKETSIZE + 2)))
				characterPosition += 2;
			break;
		}
	}
	return characterPosition;
}

/* function for draw character */
void DrawCharacter(short position)
{
	struct player *user = NULL;
	user = GetUserInfo();

	/* clean the line where character exist */
	ClearLine(0, (short)HEIGHT);
	ClearLine(0, (short)HEIGHT + 1);
	ClearLine(0, (short)HEIGHT + 2);
	ClearLine(0, (short)HEIGHT + 3);
	ClearLine(0, (short)HEIGHT + 4);

	/* draw character form */
	gotoxy(position, (short)HEIGHT);
	printf("\\______/");
	gotoxy(position, (short)HEIGHT + 1);
	printf("  \\O/");
	gotoxy(position, (short)HEIGHT + 2);
	printf("  |_|");
	gotoxy(position, (short)HEIGHT + 3);
	printf("  / \\");
	gotoxy(((position + 3)-(short)strlen(user->name)/2), (short)HEIGHT + 4);
	printf("%s", user->name);
}

/* initializing map at the start of stage */
void InitializeMap(char map[][WIDTH], char copyMap[][WIDTH])
{
	/* loop for initializing */
	for (int i = 0; i < HEIGHT; i++) 
	{
		for (int j = 0; j < WIDTH; j++)
		{
			map[i][j] = 0;
		}
	}

	/* loop for copying */
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			copyMap[i][j] = map[i][j];
		}
		printf("\n");
	}
}