/******************************************************************************/
/*
\project name DIGI_GO
\file   UserInfo.c
\primary contributor Shon hae won
\par    Course: GAM100
\brief
this program get/give user name.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "color.h" /* ColorInit, SetConsoleTextAttribute, printColoredText */
#include "utils.h" /* ClearScreen, gotoxy */
#include "UserInfo.h" /* struct player */


static struct player user = { 0,0,0 };

void EnterUserName(void)
{
	ClearScreen();

	ColorInit();
	gotoxy(60, 15);
	printf("What is your name: ");


	gets_s(user.name, NAMESIZE);

	SetConsoleTextAttribute(stdHandle, WHITE);
}

struct player *GetUserInfo(void)
{
	return &user;
}

/* If input name is professors', cheat stage */
bool CheckCheatName(void)
{
	if (!strcmp(user.name, "David Ly") || !strcmp(user.name, "Rudy Castan") || !strcmp(user.name, "Kevin Wright"))
		return true;
	else
		return false;
}

/* if input name is HHHH, de-cheat stage */
bool CheckHHHHName(void)
{
	if (!strcmp(user.name, "HHHH"))
		return true;
	else
		return false;
}

/* if name is Junseok... fake bluescreen */
bool CheckJunseok(void)
{
	if (!strcmp(user.name, "Yang Junseok"))
	{
		ClearScreen();

		for (int sdk = 0; sdk < 38; sdk++)
		{
			printColoredText("                                                                                                                                                      ", WHITE, 0, DARK_BLUE);
		}
		gotoxy(30, 5);
		printColoredText("404 NOT FOUND", WHITE, 0, DARK_BLUE);
		gotoxy(30, 7);
		printColoredText("A fatal error has occurred", WHITE, 0, DARK_BLUE);
		gotoxy(30, 8);
		printColoredText("All running applications will be terminated", WHITE, 0, DARK_BLUE);
		gotoxy(30, 9);
		printColoredText("Please enter any key to exit the program.", WHITE, 0, DARK_BLUE);
		gotoxy(30, 10);
		printColoredText("Press the Ctrl + Alt + del key to restart the system.", WHITE, 0, DARK_BLUE);
		gotoxy(30, 11);
		printColoredText("Unsaved data will be deleted.", WHITE, 0, DARK_BLUE);
		gotoxy(30, 15);
		printColoredText("", WHITE, 0, DARK_BLUE);

		return true;
	}
	else
		return false;
}