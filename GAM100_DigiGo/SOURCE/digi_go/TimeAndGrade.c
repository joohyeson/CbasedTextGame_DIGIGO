/******************************************************************************/
/*
\project name DIGI_GO
\file   TimeAndGrade.c
\primary contributor Kim ha gyeong
\par    Course: GAM100
\brief
this programe print time and grade and face character
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "utils.h"  /* ClearLine, gotoxy */
#include "TimeAndGrade.h" 
#include "GradeCalculateFunction.h" /* GetTotalCredit, CurrentAverageGrade, TotalAverageGrade */

#define STAGETIME 20

static int stageStartTime = 0;

/* function to print grade and credit */
void Grade(void)
{
	gotoxy(75, 5);																							
	printf("|CURRENT GRADE : %.2lf|", CurrentAverageGrade());
	gotoxy(75, 6);
	printf("|TOTAL GRADE   : %.2lf|", TotalAverageGrade());
}

/* function to save current time, used in CountTime() */
void ResetTime(void)
{
	stageStartTime = GetTickCount();
}

/* function to count time */
int CountTime(void)
{
	int currentTime = GetTickCount();
	int timeCount  = STAGETIME - (currentTime - stageStartTime)/1000;

	gotoxy(75, 15);
	printf("Time : %2d", timeCount);

	return timeCount;
}

