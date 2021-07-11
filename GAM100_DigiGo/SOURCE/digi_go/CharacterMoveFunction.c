/******************************************************************************/
/*!
\file   CharacterMoveFunction.c
\author Shon hae won
\par    Course: GAM100
\brief
This program allows the character in the program to be moved by receiving input from the keyboard
*/
/******************************************************************************/

#include "main.h"
#define LEFT 75   //keyboard inputs 
#define RIGHT 77



int CharacterMoveFunction(int characterPosition)
{
	int key;

	if (_kbhit()) // check if the key input is exist
	{
		key = _getch(); // receive key input
		switch (key)
		{
		case LEFT:				 //check if can move to left, move.
			if (characterPosition > 1)
				characterPosition -= 2;
			break;
		case RIGHT:			 //check if can move to right, move. 
			if (characterPosition < (WIDTH - (BASKETSIZE+2)))
				characterPosition += 2;
			break;
		}	
	}
	return characterPosition;
}