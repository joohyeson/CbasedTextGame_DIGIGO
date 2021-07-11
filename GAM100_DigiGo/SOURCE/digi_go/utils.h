/******************************************************************************/
/*
\project name DIGI_GO
\file   Utils.h
\primary contributor  Jung hye rin
\par    Course: GAM100
\brief
decleration for utilites
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;					 //enum for hide cursor
void ClearScreen(void);
void Wait(long waitTime);
void PrintIndent(int number, char Menu[]);
void gotoxy(short x, short y);
void setcursortype(CURSOR_TYPE c);
void ClearLine(short xPosition, short yPosition);