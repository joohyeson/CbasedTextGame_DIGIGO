/******************************************************************************/
/*
\project name DIGI_GO
\file   GradeCalculateFunction.c
\primary contributor Shon hae won
\author Shon hae won, Kim ha gyeong
\par    Course: GAM100
\brief
this file have functions that get grade and calculate grade.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "DrawFace.h" /* ClearFace, FaceA, FaceB, FaceC, FaceD, FaceF, Face5, FaceStart */
#include "UserInfo.h" /* GetUserInfo */
#include "GradeCalculateFunction.h"
#include "PlaySound.h"
static float grade;
static float totalGrade;
static int stageGradeCount;
static int totalGradeCount;

/* Clear computed grade and count for new stage */
void ClearGrade(void)	
{
	grade = 0.f;
	stageGradeCount = 0;
}

void DropGrade(char map[][WIDTH])
{
	for (int i = HEIGHT - 1; i > 0; i--)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			map[i][j] = map[i - 1][j];		// Drop grades by copying upper line in map array
		}
	}

	for (int j = 0; j < WIDTH; j++)
	{
		map[0][j] = 0;		// Since first line is should be empty, initialize with 0
	}
}

void CheckGetGrade(char map[][WIDTH], int position)
{
	/* check upper position of the basket */
	for (int i = position + 1; i < position + BASKETSIZE - 1; i++)
	{			
		/* if there is something on the upper line of basket, */
		if (map[HEIGHT - 1][i] != 0)
		{
			/* calculate grade and print face based on the checked grade */
			switch (map[HEIGHT - 1][i])	
			{
			case 'A':
				CalculateGrade(4.f);
				ClearFace();
				FaceA();
				break;
			case 'B':
				CalculateGrade(3.f);
				ClearFace();
				FaceB();
				break;
			case 'C':
				CalculateGrade(2.f);
				ClearFace();
				FaceC();
				break;
			case 'D':
				CalculateGrade(1.f);
				ClearFace();
				FaceD();
				break;
			case 'F':
				CalculateGrade(0.f);
				ClearFace();
				FaceF();
				break;
			case '+':
				grade += 0.5f;
				totalGrade += 0.5f;
			}
		}
	}

	if (stageGradeCount == 0)
	{
		FaceStart();
	}
	else if (stageGradeCount % 5 == 0)
	{
		Face5();
	}
}

/* function for calculate grade and save that in user struct */
void CalculateGrade(float catchedGrade)
{
	grade += catchedGrade;
	totalGrade += catchedGrade;
	stageGradeCount++;
	totalGradeCount++;

	struct player *user;
	user = GetUserInfo();

	user->grade = TotalAverageGrade();
}


double CurrentAverageGrade(void)
{
	/* to prevent print N/A */
	if (stageGradeCount == 0)
		return 0;
	return grade / (double)stageGradeCount;
}

double TotalAverageGrade(void)	
{
	/* to prevent print N/A */
	if (totalGradeCount == 0)	
		return 0;
	return totalGrade / (double)totalGradeCount;
}