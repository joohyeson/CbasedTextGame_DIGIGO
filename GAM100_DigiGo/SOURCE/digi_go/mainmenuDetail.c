/******************************************************************************/
/*
\project name DIGI_GO
\file   mainmenuDetail.c
\primary contributor Jung hye rin
\par    Course: GAM100
\brief
	This program print menu detail on the screen.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include"main.h"
#include"utils.h" /* ClearScreen, gotoxy, Wait */


bool willUserQuit = false;

/* print story of DigiGo */
void Story_F(void)
{
	ClearScreen();

	gotoxy(15 , 8);
	printf("In Redmond, United Statement, there is a university called Digipen Institute of Technology, which specializes in game production.");
	Wait(500);

	gotoxy(15, 12);
	printf("In Keimyung University, Korea, there is a DigiPen - KMU course, which is one of the way to go to US Digipen.");
	Wait(500); 
	
	gotoxy(15,16);
	printf("After completing two years of Digipen course in Korea, you can go to USA and finish all the other semesters and graduate.");
	Wait(500);

	
	getchar();
	gotoxy(15, 27);
	printf("Press Enter to see next page~");
	getchar();
	ClearScreen();

	gotoxy(20, 8);
	printf("However, in order to take classes in the United States, the total average of two years must exceed 3.0.");
	Wait(500);
	
	gotoxy(20, 12);
	printf("Can you be able to go to the US Digipen safely with a grade of 3.0 or higher?");
	Wait(1500);

	gotoxy(62, 20);
	printf("The semester begins.");
	Wait(500);
	
	gotoxy(62, 24);
	printf("Get FANTASTIC grades!");
	Wait(3000);
	
	printf("Press enter to go MainMenu...");
	getchar();

}


/* print about how to play the game */
void How_To_Play_F(void)
{
	ClearScreen();

	FILE *fp = NULL;
	int c = 0;

	/* open and print the HowToPlay file */
	fp = fopen("HowToPlay.txt", "rt");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}

	Wait(10000);

	printf("\n\n\n       Press Enter to go to MAINMENU...");
	getchar();
}

/* print the credit of the game */
void Credit_F(void)
{
	ClearScreen();

	gotoxy(65, 15);
	printf("Claude Comair");
	gotoxy(65, 17);
	printf("President of DigiPen");
	gotoxy(65, 19);
	printf("David Ly");
	gotoxy(65, 21);
	printf("Instructor");
	Wait(2000);

	ClearScreen();

	gotoxy(65, 18);
	printf("Team 404 NOT FOUND");
	Wait(2000);

	ClearScreen();

	gotoxy(65, 15);
	printf("Son Hae Won");
	gotoxy(65, 17);
	printf("Lead Programmer");
	gotoxy(65, 19);
	printf("Jung hyerin");
	gotoxy(65, 21);
	printf("Programmer, Level Designer");
	Wait(2000);

	ClearScreen();

	gotoxy(65, 15);
	printf("Kim Ha Gyeong");
	gotoxy(65, 17);
	printf("Producer, Programmer");
	gotoxy(65, 19);
	printf("Son Ju Hye");
	gotoxy(65, 21);
	printf("Programmer, Level Designer");
	Wait(2000);

	ClearScreen();

	gotoxy(65, 10);
	printf("Special Thanks To");
	gotoxy(65, 12);
	printf("Yang Jun seok");
	gotoxy(65, 14);
	printf("interrupting Lead Programmer");
	gotoxy(65, 16);
	printf("Bbal bong boonsik");
	gotoxy(65, 18);
	printf("the place where we came up with the idea of DigiGo");
	gotoxy(65, 20);
	printf("gotoxy function");
	gotoxy(65, 22);
	printf("There are over 400 gotoxy function in this game");
	gotoxy(65, 24);
	printf("Owner of Takoyaki truck");
	gotoxy(65, 26);
	printf("hope of our team");
	Wait(5000);
}

/* Ask will user really quit */
void Quit_the_Game_F(void)
{
	ClearScreen();

	int userAnswer;

	/* Ask user will quit or not */
	printf("Do you really want to quit the game?\n");	
	printf("(1)Yes/(2)No \n");

	do{
		printf("Enter command: ");	//choose menu
		scanf("%d", &userAnswer);

		switch (userAnswer)
		{
		case 1:
			/* if answered yes, set willUserQuit true */
			willUserQuit = true;
			printf("Good Bye.");
			ClearScreen();
			return;
		case 2:
			/*if answered no, nothing happen, back to main menu */
			ClearScreen();
			return;
		default:
			printf("invalid choice\n");
		}
	} while (userAnswer != 1 && userAnswer != 2);
}

/* return willUserQuit that saved user answer */
bool WillUserQuit(void)
{
	return willUserQuit;
}