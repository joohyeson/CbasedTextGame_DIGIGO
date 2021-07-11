/******************************************************************************/
/*
\project name DIGI_GO
\file   GameEnd.c
\primary contributor
\author Shon hae won, Kim ha gyeong, son ju hye, Jung hye rin
\par    Course: GAM100
\brief
function for game ending / ending screens
All content ¨Ï 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#pragma once

#include "main.h"
#include "GamePlay.h" /* RunningGame, RetakeGameInit */
#include "GradeCalculateFunction.h" /* TotalAverageGrade */
#include "color.h" /* SetConsoleTextAttribute, printColoredText */
#include "utils.h" /* gotoxy, ClearScreen, Wait */
#include "PlaySound.h"

bool retryChance = true;

void EndingA(void)
{
	ClearScreen();
	soundClap();
	Wait(500);

	gotoxy(31, 5);
	printf("___");
	gotoxy(26, 6);
	printf("____(   )_");
	gotoxy(24, 7);
	printf("_(            )__");
	gotoxy(22, 8);
	printf(" (_________________)");

	gotoxy(11,22);
	printf("___");
	gotoxy(6,23);
	printf("____(   )_");
	gotoxy(4, 24);
	printf("_(            )__");
	gotoxy(2, 25);
	printf(" (_________________)");


	gotoxy(120, 5);
	printf("___");
	gotoxy(115, 6);
	printf("____(   )_");
	gotoxy(113, 7);
	printf("_(            )__");
	gotoxy(111, 8);
	printf(" (_________________)");
	
	gotoxy(95, 13);
	printf("_______");
	gotoxy(50, 14);
	printf("___________________________              ___(       )_");
	gotoxy(50, 15);
	printf("|           ____      _    |           _(             )_ ");
	gotoxy(50, 16);
	printf("|  |   |  /          / \\   |         (__________________)");
	gotoxy(50, 17);
	printf("|  |   |  \\____     /___\\  |                   ____           /|");
	gotoxy(50, 18);
	printf("|  |   |        \\  |     | |            _______\\___\\________ / |");
	gotoxy(50, 19);
	printf("|  \\___/ o  ____/ o|     | |          /  o  o  o  o  o  o  o    |");
	gotoxy(50, 20);
	printf("|__________________________|         /___________\\   \\__________/");
	gotoxy(50, 21);
	printf("||                                                \\___\\");
	gotoxy(39, 22);
	printf("______    _||");
	gotoxy(38, 23);
	printf("/  0 u0\\  //|| ");
	gotoxy(38, 24);
	printf("|___ __|_//");
	gotoxy(37, 25);
	printf("/   \\/  __/");
	gotoxy(36, 26);
	printf("/ /|     |");
	gotoxy(35, 27);
	printf("/ / |_____|");
	gotoxy(33, 28);
	printf("_|_|  |  __ |");
	gotoxy(30, 29);
	printf("__/ //   | |  \\ \\");
	gotoxy(30, 30);
	printf("/   /    | |   \\ \\");
	

	gotoxy(81, 27);
	printf("\\/\\/\\/\\/\\/\\/\\/");
	gotoxy(80, 28);
	printf("/             \\");
	gotoxy(80, 29);
	printf("| scholarship |");
	gotoxy(80, 30);
	printf("|             |");
	gotoxy(105, 28);
	printf("I go to US with sweet scholarship~ YEAH!!");
	gotoxy(1, 31);
	printf("________________________________________________________________________________________________________________________");
	gotoxy(50, 33);


}

void EndingB(void)
{
	ClearScreen();
	soundClap();
	Wait(500);

	gotoxy(31, 5);
	printf("___");
	gotoxy(26, 6);
	printf("____(   )_");
	gotoxy(24, 7);
	printf("_(            )__");
	gotoxy(22, 8);
	printf(" (_________________)");

	gotoxy(11, 22);
	printf("___");
	gotoxy(6, 23);
	printf("____(   )_");
	gotoxy(4, 24);
	printf("_(            )__");
	gotoxy(2, 25);
	printf(" (_________________)");


	gotoxy(120, 5);
	printf("___");
	gotoxy(115, 6);
	printf("____(   )_");
	gotoxy(113, 7);
	printf("_(            )__");
	gotoxy(111, 8);
	printf(" (_________________)");

	gotoxy(95, 13);
	printf("_______");
	gotoxy(50, 14);
	printf("___________________________              ___(       )_");
	gotoxy(50, 15);
	printf("|           ____      _    |           _(             )_ ");
	gotoxy(50, 16);
	printf("|  |   |  /          / \\   |         (__________________)");
	gotoxy(50, 17);
	printf("|  |   |  \\____     /___\\  |                   ____           /|");
	gotoxy(50, 18);
	printf("|  |   |        \\  |     | |            _______\\___\\________ / |");
	gotoxy(50, 19);
	printf("|  \\___/ o  ____/ o|     | |          /  o  o  o  o  o  o  o   |");
	gotoxy(50, 20);
	printf("|__________________________|         /___________\\   \\_________/");
	gotoxy(50, 21);
	printf("||                                                \\___\\");
	gotoxy(39, 22);
	printf("______    _||");
	gotoxy(38, 23);
	printf("/  0 -0\\  //|| ");
	gotoxy(60, 23);
	printf("< NO SMILE, STOP HAND...");
	gotoxy(38, 24);
	printf("|___ __|_//");
	gotoxy(37, 25);
	printf("/   \\/  __/");
	gotoxy(36, 26);
	printf("/ /|     |");
	gotoxy(35, 27);
	printf("/ / |_____|");
	gotoxy(33, 28);
	printf("_|_|  |  __ |");
	gotoxy(30, 29);
	printf("__/ //   | |  \\ \\");
	gotoxy(30, 30);
	printf("/   /    | |   \\ \\");


	gotoxy(85, 28);
	printf("I GO TO U.S. WITH MY MONEY... TOO EXPENSIVE.. HUHUHU....");
	gotoxy(1, 31);
	printf("________________________________________________________________________________________________________________________");
	gotoxy(50, 33);

}

void EndingC(void)
{
	ClearScreen();
	soundBAAM();
	char faceCc[70] = { 'I',' ','t','h','i','n','k',' ','y','o','u',' ','h','a','v','e',' ','t','o',' ','r','e','t','a','k','e',' ','t','h','e',' ','c','o','u','r','s','e',' ','t','o',' ','g','o',' ','A','m','e','r','i','c','a','.',' ','Y','o','u',' ','m','u','s','t',' ','d','o','!','!','!' };

	gotoxy(25, 4);
	printf("\\\\|//");
	gotoxy(22, 5);
	printf("__________");
	gotoxy(25, 7);
	printf("\\");
	gotoxy(29, 7);
	printf("/");
	gotoxy(21, 6);
	printf("/");
	gotoxy(21, 7);
	printf("|");
	gotoxy(21, 8);
	printf("|");
	gotoxy(21, 9);
	printf("|");
	gotoxy(21, 10);
	printf("|");
	gotoxy(32, 6);
	printf("\\");
	gotoxy(32, 7);
	printf("|");
	gotoxy(32, 8);
	printf("|");
	gotoxy(32, 9);
	printf("|");
	gotoxy(32, 10);
	printf("|");
	gotoxy(21, 11);
	printf("\\");
	gotoxy(32, 11);
	printf("/");
	gotoxy(24, 10);
	printf("\\oooo/");
	gotoxy(21, 12);
	printf("/-----------");
	gotoxy(32, 12);
	printf("\\");
	gotoxy(21, 13);
	printf("|");
	gotoxy(21, 14);
	printf("|");
	gotoxy(21, 15);
	printf("|");
	gotoxy(21, 16);
	printf("|");
	gotoxy(32, 13);
	printf("|");
	gotoxy(32, 14);
	printf("|");
	gotoxy(32, 15);
	printf("|");
	gotoxy(32, 16);
	printf("|");
	gotoxy(10, 17);
	printf("------------------------------------------------------");
	gotoxy(63, 18);
	printf("|");
	gotoxy(63, 19);
	printf("|");
	gotoxy(63, 20);
	printf("|");
	gotoxy(10, 18);
	printf("|");
	gotoxy(10, 19);
	printf("|");
	gotoxy(10, 20);
	printf("|");

	for (short int count1 = 0; count1 < 70; count1++)
	{
		gotoxy(33 + count1, 10);
		printf("%c", faceCc[count1]);
		Wait(40);
	}
	Wait(1500);
}

void EndingD(void)
{
	ClearScreen();
	soundBAAM();
	gotoxy(25, 5);
	printf("_______________________________________________________________________________________");
	gotoxy(25, 15);
	printf("_______________________________________________________________________________________");
	for (short count = 0; count < 30; count++)
	{
		gotoxy(25, 6 + count);
		printf("|");
	}
	gotoxy(40, 10);
	printf("the government-sponsored scholastic aptitude test in 2019");
	gotoxy(63, 12);
	printf("5 examination");
	for (short count2 = 0; count2 < 30; count2++)
	{
		gotoxy(112, 6 + count2);
		printf("|");
	}
	for (short count2 = 0; count2 < 15; count2++)
	{
		gotoxy(5, 21 + count2);
		printf("|");
	}
	for (short count3 = 0; count3 < 20; count3++)
	{
		gotoxy(5 + count3, 20);
		printf("_");
	}
	for (short count3 = 0; count3 < 20; count3++)
	{
		gotoxy(113 + count3, 20);
		printf("_");
	}
	for (short count4 = 0; count4 < 15; count4++)
	{
		gotoxy(133, 21 + count4);
		printf("|");

	}
	gotoxy(60, 19);
	printf("press the enter key");
	gotoxy(40, 20);
	printf("___________________________________________________________");
	gotoxy(40, 30);
	printf("___________________________________________________________");
	getchar();
	gotoxy(60, 19);
	printf("                   ");
	gotoxy(45, 23);
	printf("My grades were so bad");
	gotoxy(45, 24);
	Sleep(300);
	printf("I finally decided to drop out.");
	gotoxy(45, 26);
	Sleep(300);
	printf("I decided to take the college entrance exam again");
	gotoxy(45, 27);
	Sleep(300);
	printf("after five failed exams, I was able to go to college.");
	gotoxy(2, 3);
}

void spark(void)
{
	for (int count = 1; count <= 38; count++)
	{
		printColoredText("                                                                                                                                                      ", WHITE, 0, WHITE);
	}
	Wait(30);
	for (int count = 1; count <= 38; count++)
	{
		printColoredText("                                                                                                                                                      ", BLACK, 0, BLACK);
	}
	Wait(30);
}
void letters(void)
{
	gotoxy(15, 5);
	printf("H");
	Wait(500);
	gotoxy(17, 5);
	printf("O");
	Wait(500);
	gotoxy(19, 5);
	printf("W");
	Wait(500);
	gotoxy(21, 5);
	printf("E");
	Wait(500);
	gotoxy(23, 5);
	printf("V");
	Wait(500);
	gotoxy(25, 5);
	printf("E");
	Wait(500);
	gotoxy(27, 5);
	printf("R");
	Wait(500);

}void letters2(void)
{
	gotoxy(15, 5);
	printf("H");
	gotoxy(17, 5);
	printf("O");
	gotoxy(19, 5);
	printf("W");
	gotoxy(21, 5);
	printf("E");
	gotoxy(23, 5);
	printf("V");
	gotoxy(25, 5);
	printf("E");
	gotoxy(27, 5);
	printf("R");
	Wait(1000);
}
void fending(void)
{
	gotoxy(50, 7);
	printf("___________________________________________________");
	gotoxy(50, 8);
	printf("|  ______________________________________________  |");
	for (short count2 = 0; count2 < 9; count2++)
	{
		gotoxy(50, 9 + count2);
		printf("| |");
	}
	for (short count1 = 0; count1 < 9; count1++)
	{
		gotoxy(99, 9 + count1);
		printf("| |");
	}
	gotoxy(50, 18);
	printf("| |______________________________________________| |");
	gotoxy(50, 19);
	printf("|__________________________________________________|");
	gotoxy(73, 20);
	printf("|   |");
	gotoxy(68, 21);
	printf("_____|   |_____");
	gotoxy(68, 22);
	printf("|______________|");
	soundClap();
	char lotto[38] = { 'C','o','n','g','r','a','t','u','l','a','t','i','o','n','s',' ','y','o','u',' ','h','a','v','e',' ','w','o','n',' ','t','h','e',' ','L','o','t','t','o' };
	for (short int count2 = 0; count2 < 38; count2++)
	{
		gotoxy(57 + count2, 13);
		printf("%c", lotto[count2]);
		Wait(80);
	}
	gotoxy(65, 15);
	printf("Winners: $999999999999$");
	gotoxy(60, 25);
}

void EndingF(void)
{
	ClearScreen();
	soundBAAM();
	gotoxy(10, 2);
	printf(" I dropped out of school because of my poor grades.");
	Sleep(1000);
	gotoxy(80, 4);
	letters();
	ClearScreen();
	spark();
	spark();
	spark(); 
	spark();
	ClearScreen();
	SetConsoleTextAttribute(stdHandle, WHITE);
	fending();
}

void ThanksForPlaying(void)
{
}

void GameEnding(void)
{	
	double finalGrade = TotalAverageGrade();

	/* based on total grade, different ending */
	if (finalGrade >= 4.f)
		EndingA();
	else if (finalGrade >= 3.f)
		EndingB();
	else if (finalGrade >= 2.f)
	{
		/* in case of C, give retry chance. if fails, go D ending. */
		if (retryChance)
		{
			EndingC();

			retryChance = false;

			GameInitRetake();
			soundPlay();
			RunningGame();
			
			GameEnding();
		}
		else
			EndingD();
	}
	else if (finalGrade >= 1.f)
		EndingD();
	else
		EndingF();

	getchar();
}
