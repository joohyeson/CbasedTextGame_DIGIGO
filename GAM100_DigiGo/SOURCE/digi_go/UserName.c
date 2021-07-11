/******************************************************************************/
/*!
\file   UserName.c
\author Shon hae won
\par    Course: GAM100
\brief
this program get/give user name.
*/
/******************************************************************************/

#include "main.h"
#include "color.h"
#include "utils.h"
char name[NAMESIZE] = { 0 };

void EnterUserName(void)
{
	ColorInit();
	gotoxy(60, 15);
	printf("What is your name: ");


	gets_s(name, NAMESIZE);

	SetConsoleTextAttribute(stdHandle, WHITE);
}

void GettingUserName(char userName[])
{
	for (int i = 0; i < NAMESIZE; i++)
		userName[i] = name[i];
}

bool CheckCheatName(void)
{
	if (!strcmp(name, "David Ly") || !strcmp(name, "Rudy Castan") || !strcmp(name, "Kevin Wright"))
		return true;
	else
		return false;
}

bool CheckHHHHName(void)
{
	if (!strcmp(name, "HHHH"))
		return true;
	else
		return false;
}

bool CheckJunseok(void)
{
	if (!strcmp(name, "Yang Junseok"))
		return true;
	else return false;
}