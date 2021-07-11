/******************************************************************************/
/*
\project name DIGI_GO
\file   main.c
\primary contributor Shon hae won
\author Shon hae won, Son ju hye
\par    Course: GAM100
\brief
This program adjusts console size and calls functions for game execution
All content ¨Ï 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "utils.h" /* ClearScreen */
#include "StartGame.h" /* MainMenu */
#include "GamePlay.h" /* RunningGame, GameInit */
#include "Color.h"		/* ColorInit */
#include "UserInfo.h" /* CheckJunseok */
#include "GameEnd.h" /* GameEnding */
#include "mainmenuDetail.h" /* WillUserQuit */
#include "PlaySound.h" /* soundPlay */

int main(void)
{
	ColorInit();
	
	system("title DIGI_GO");                            //console title

	system("mode con cols=150 lines=38");				//console size

	MainMenu();

	/* if user chose quit to game, skip entire sequence */
	if (!WillUserQuit()) 
	{	
		getchar();
		EnterUserName();

		/* Junseok cannot play this game */
		if (CheckJunseok())	
		{			
			return 0;
		}

		GameInit();
	
		RunningGame();

		GameEnding();

	}
	ClearScreen();

	return 0;
}