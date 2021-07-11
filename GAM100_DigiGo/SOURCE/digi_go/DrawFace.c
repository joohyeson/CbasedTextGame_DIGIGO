/******************************************************************************/
/*
\project name DIGI_GO
\file   DrawFace.c
\primary contributor Kim ha gyeong
\par    Course: GAM100
\brief
This program print face on the screen.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "UserInfo.h" /* GetUserInfo */
#include "utils.h" /* gotoxy */

char userName[NAMESIZE];

void ClearFace(void) // reomove character face
{
	for (short i = 19; i <= 26; i++)
	{
		gotoxy(74, i);
		printf("                                                                   ");
	}
}

void FaceF(void) // when players get F, print character
{
	struct player *user = NULL;
	user = GetUserInfo();

	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("a");
	gotoxy(82, 22);
	printf("a");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(77, 25);
	printf("/----\\");
	gotoxy(86, 24);
	printf("%s,", user->name);
	gotoxy(86, 25);
	printf("Are you kidding me?");
}

void Face5(void) // when players get 5,10,15,20,25...., print character
{
	struct player *user = NULL;
	user = GetUserInfo();

	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("a");
	gotoxy(82, 22);
	printf("a");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(77, 25);
	printf("\\_____/");
	gotoxy(86, 24);
	printf("%s,", user->name);
	gotoxy(86, 25);
	printf("cheer up! cheer up!");
}

void FaceA(void) // when players get A, print character
{
	struct player *user = NULL;
	user = GetUserInfo();

	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("♥");
	gotoxy(82, 22);
	printf("♥");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(77, 25);
	printf("\\_____/");
	gotoxy(86, 24);
	printf("%s,", user->name);
	gotoxy(86, 25);
	printf("Amazing!!!!!♥♥♥♥♥♥");
}

void FaceB(void) // when players get B, print character
{
	struct player *user = NULL;
	user = GetUserInfo();

	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("^");
	gotoxy(82, 22);
	printf("^");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(77, 25);
	printf("\\_____/");
	gotoxy(86, 24);
	printf("%s,", user->name);
	gotoxy(86, 25);
	printf("Oh good! good!");
}

void FaceC(void) // when players get C, print character
{
	struct player *user = NULL;
	user = GetUserInfo();

	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("-");
	gotoxy(82, 22);
	printf("-");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(78, 25);
	printf("-----");
	gotoxy(86, 24);
	printf("%s,", user->name);
	gotoxy(86, 25);
	printf("oh... C");
}

void FaceD(void) // when players get D, print character
{
	struct player *user = NULL;
	user = GetUserInfo();

	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("/");
	gotoxy(82, 22);
	printf("\\");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(77, 25);
	printf("=----=");
	gotoxy(86, 24);
	printf("%s,", user->name);
	gotoxy(86, 25);
	printf("humm...D??");
}

void FaceStart(void) // when DIGI_GO start, print character
{
	gotoxy(78, 19);
	printf("\\\\|//");
	gotoxy(75, 20);
	printf("__________");
	gotoxy(78, 22);
	printf("#");
	gotoxy(82, 22);
	printf("#");
	gotoxy(74, 21);
	printf("/");
	gotoxy(74, 22);
	printf("|");
	gotoxy(74, 23);
	printf("|");
	gotoxy(74, 24);
	printf("|");
	gotoxy(74, 25);
	printf("|");
	gotoxy(85, 21);
	printf("\\");
	gotoxy(85, 22);
	printf("|");
	gotoxy(85, 23);
	printf("|");
	gotoxy(85, 24);
	printf("|");
	gotoxy(85, 25);
	printf("|");
	gotoxy(74, 26);
	printf("\\");
	gotoxy(85, 26);
	printf("/");
	gotoxy(77, 25);
	printf("(_____)");
	gotoxy(86, 25);
	printf("Good morning, have a nice day.");
}