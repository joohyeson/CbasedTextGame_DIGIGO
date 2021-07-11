#pragma once
/******************************************************************************/
/*
\project name DIGI_GO
\file   StartGame.c
\primary contributor Jung hye rin
\author Jung hye rin, Kim hagyeong
\par    Course: GAM100
\brief
This file include main menu sequence.
All content ¨Ï 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#include "main.h"
#include "utils.h" /* ClearScreen */
#include "StartScreenFunction.h" /* ShowDigiPenLogo, DigiGoLogoInit, MainMenuPrint */
#include "Transitions.h"	/* LogoTransitionScreen, MenuStageTransition */
#include "mainmenuDetail.h" /* story, how to play, credit, gamequit */

/* enum for menu */
typedef enum gameState {
	mainMenu = 0, gamePlay, story, howToPlay, credit, gameQuit
} gameState;

void MainMenu(void)
{
	int state = mainMenu;
	int c;

	/* First, print the DigiPen logo */
	ShowDigiPenLogo();

	/* Second, show DigiGo logo */
	DigiGoLogoInit();

	ClearScreen();

	/* if user haven't choose gameplay or quit, repeat */
	do
	{
		ClearScreen();

		/* Print main menu */
		MainMenuPrint();

		/* get choice from user */
		scanf("%d", &state);

		/* execute function that user chose */
		switch (state)
		{
		case gamePlay:
			break;
		case story:
			Story_F();
			break;
		case howToPlay:
			How_To_Play_F();
			break;
		case credit:
			Credit_F();
			break;
		case gameQuit:
			Quit_the_Game_F();
			break;
		default:
			printf("Invalid option");
			Wait(500);
			while ((c = getchar()) != '\n');
			break;
		}

	} while ((state != gamePlay && !WillUserQuit()));
}