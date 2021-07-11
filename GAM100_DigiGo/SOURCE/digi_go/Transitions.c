/******************************************************************************/
/*
\project name DIGI_GO
\file   Transition.C
\primary contributor Kim ha gyeong
\par    Course: GAM100
\brief
This program allows to print transitioneffect.
All content ¨Ï 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "utils.h" /* PrintIndent, Wait, gotoxy, ClearScreen	 */
#include "UserInfo.h" /* GetUserInfo */
#include "color.h" /* printColoredText */
#include "PlaySound.h"

void MenuStageTransition(void)
{
	system("mode con cols=150 lines=38");
	printf("\n\n\n");
	gotoxy(20, 4);
	printf("__________________________________________________________________________________________________");
	for (short count = 0; count < 22; count++)
	{
		gotoxy(20, 5 + count);
		printf("|");
		gotoxy(118, 5 + count);
		printf("|");
	}
	gotoxy(15, 27);
	printf("_____|_________________________________________________________________________________________________|______");
	for (short count2 = 0; count2 < 5; count2++)
	{
		gotoxy(15, 28 + count2);
		printf("|");
		gotoxy(125, 28 + count2);
		printf("|");
	}
	gotoxy(41, 10);
	printf("***");
	gotoxy(40, 11);
	printf("** **");
	gotoxy(39, 12);
	printf("*** ***");
	gotoxy(38, 13);
	printf("**** ****");
	gotoxy(37, 14);
	printf("****   ****");
	gotoxy(36, 15);
	printf("*************");
	gotoxy(35, 16);
	printf("***************");
	gotoxy(34, 17);
	printf("****         ****");
	gotoxy(33, 18);
	printf("****           ****");
	gotoxy(32, 19);
	printf("****             ****");

	gotoxy(80, 10);
	printf("*******************");
	gotoxy(80, 11);
	printf("*******************");
	gotoxy(80, 12);
	printf("***");
	gotoxy(80, 13);
	printf("***");
	gotoxy(80, 14);
	printf("*******************");
	gotoxy(80, 15);
	printf("*******************");
	gotoxy(80, 16);
	printf("***");
	gotoxy(80, 17);
	printf("***");
	gotoxy(80, 18);
	printf("***");
	gotoxy(80, 19);
	printf("***");
	gotoxy(65, 20);
	printf("or");
	gotoxy(52, 23);
	printf("What is your grade this semester?");
	gotoxy(50, 33);
	Wait(1500);
}

void StageTransition(void)
{
	ClearScreen();

	struct player *user = NULL;
	user = GetUserInfo();

	char faceS[70] = { 'I',' ','t','h','i','n','k',' ','y','o','u',' ','c','a','n',' ','g','e','t',' ','s','c','h','o','l','a','r','s','h','i','p',' ','i','f',' ','y','o','u',' ','k','e','e','p',' ','s','t','u','d','y','i','n','g',' ','h','a','r','d','!','!','!','!','!','!','!','!','!','!','!','!' };

	MenuStageTransition();

	ClearScreen();
	soundClap();
	gotoxy(25, 4);
	printf("\\\\|//");
	gotoxy(22, 5);
	printf("__________");
	gotoxy(25, 7);
	printf("@");
	gotoxy(29, 7);
	printf("@");
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
	printf("\\____/");
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

	gotoxy(33, 9);
	printf("%s,", user->name);

	for (short int count1 = 0; count1 < 70; count1++)
	{
		gotoxy(33 + count1, 10);
		printf("%c", faceS[count1]);
		Wait(40);
	}
	Wait(1500);
}


void StageTransitionFail(void)
{
	ClearScreen();

	struct player *user = NULL;
	user = GetUserInfo();

	char warning[70] = { 'i','f',' ','y','o','u',' ','k','e','e','p',' ','g','o','i','n','g',' ','t','h','a','t',' ','w','a','y',' ','y','o','u',' ','c','a','n',' ','n','o','t',' ','g','o',' ','t','o',' ','A','m','e','r','i','c','a','!','!','!','!','!','!','!','!','!','!','!','!','!','!','!','!','!' };

	MenuStageTransition();
	ClearScreen();
	soundBAAM();
	gotoxy(25, 4);
	printf("\\\\|//");
	gotoxy(22, 5);
	printf("__________");
	gotoxy(25, 7);
	printf("a");
	gotoxy(29, 7);
	printf("a");
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
	printf("/----\\");
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

	gotoxy(33, 9);
	printf("%s,", user->name);

	for (short int count1 = 0; count1 < 70; count1++)
	{
		gotoxy(33 + count1, 10);
		printf("%c", warning[count1]);
		Wait(40);
	}
	Wait(1500);
	ClearScreen();
}

void StageNumber1(void)
{
	ClearScreen();
	soundPlay();
	FILE *fp = NULL;
	int c = 0;

	fp = fopen("stage1.txt", "r");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}

	Wait(2000);
}

void StageNumber2(void)
{

	ClearScreen();
	soundPlay();
	FILE *fp = NULL;
	int c = 0;

	fp = fopen("stage2.txt", "r");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}

	Wait(2000);
}
void StageNumber3(void)
{
	ClearScreen();
	soundPlay();
	FILE *fp = NULL;
	int c = 0;

	fp = fopen("stage3.txt", "r");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}

	Wait(2000);
}
void StageNumber4(void)
{
	ClearScreen();
	soundPlay();
	FILE *fp = NULL;
	int c = 0;

	fp = fopen("stage4.txt", "r");
	if (fp)
	{
		while ((c = fgetc(fp)) != EOF)
		{
			putchar(c);
		}
		fclose(fp);
	}

	Wait(2000);
}

void StageRetake(void)
{
	ClearScreen();
}