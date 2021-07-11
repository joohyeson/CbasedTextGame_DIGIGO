/******************************************************************************/
/*
\project name DIGI_GO
\file   StartScreenFunction.c
\primary contributor Jung hye rin
\author Jung hye rin, Kim ha gyeong
\par    Course: GAM100
\brief
	This program prints logo and main menu.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/


#include "main.h"
#include "utils.h" /* ClearScreen, gotoxy, PrintIndent, Wait */
#include "color.h"  /* ColorInit, PrintColoredText */

void ShowDigiPenLogo(void)
{
	FILE *fp = NULL;
	int c = 0;

	fp = fopen("DigiPenLogo (Unofficial).txt", "rt");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}

	Wait(2500);
}

void DigiGoLogoInit(void)
{
	
	FILE *fp = NULL;
	int c = 0;

	fp = fopen("title.txt", "rt");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}
	
	PrintIndent(56,"Please press the Enter Key...\n");
	getchar();
}

void MainMenuPrint(void)
{
	system("cls");
	ColorInit();
	gotoxy(59, 7);
	printColoredText("                                          \n", WHITE, 0, WHITE);
	for (short count = 8; count <= 21; count++)
	{
		gotoxy(59, count);
		printColoredText(" ", WHITE, 0, WHITE);
	}
	for (short count2 = 8; count2 <= 21; count2++)
	{
		gotoxy(100, count2);
		printColoredText(" ", WHITE, 0, WHITE);
	}
	gotoxy(60, 8);
	printColoredText("                                        \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 9);
	printColoredText("                                        \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 10);
	printColoredText("     ___________DIGI_Go___________      \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 11);
	printColoredText("     |                            |     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 12);
	printColoredText("     |         1. start           |     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 13);
	printColoredText("     |         2. story           |     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 14);
	printColoredText("     |         3. how to play     |     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 15);
	printColoredText("     |         4. credit          |     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 16);
	printColoredText("     |         5. quit            |     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 17);
	printColoredText("     |____________________________|     \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 18);
	printColoredText("                                        \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 19);
	printColoredText("                                        \n", WHITE, 0, DARK_GREEN);
	gotoxy(60, 20);
	printColoredText("                                        \n", WHITE, 0, DARK_GREEN);
	gotoxy(59, 21);
	printColoredText("                                          \n", WHITE, 0, WHITE);
	gotoxy(60, 22);
	printColoredText("\t\tYOUR ANSWER: ", WHITE, 0, BLACK);
	SetConsoleTextAttribute(stdHandle, WHITE);
}