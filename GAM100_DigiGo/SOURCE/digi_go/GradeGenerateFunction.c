/******************************************************************************/
/*
\project name DIGI_GO
\file   GradeGenerateFucntion.h
\primary contributor Shon hae won
\author Shon hae won, Son ju hye, Kim hagyeong
\par    Course: GAM100
\brief
this programe generates random grade.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "GameStateControl.h"

void GenerateGrade(char map[][WIDTH], STAGEINFO stageInfo)
{
	int gradeSetPosition;
	int count;
	bool plusFlag;

	/* random number arrays for random position */
	int widthCount[WIDTH] = {11,39,18,57,23,60,7,47,13,64,30,20,62,27,42,22,51,56,21,10,52,32,14,3,40,4,28,44,8,45,48,19,43,31,53,59,29,17,36,49,10,46,17,33,9,61,12,38,26,65,37,54,66,30,6,35,15,25,58,5,34,45,18,63,24,5,41,50,55,6};

	/* use time for random number */
	srand(GetTickCount());

	/* set gradeSetPosition randomly */
	gradeSetPosition = ((rand()) % (WIDTH - 4)) + 2;

	/* set one of the case */
	count = rand() % NUM_OF_SETGRADE;

	/* if position is even and if the grade is not F, set plus flag based on the chance */
	if (widthCount[gradeSetPosition] % 2 == 1 && rand() % 100 < stageInfo.plusRate)
	{
		plusFlag = true;
		if (stageInfo.gradeRate[count] == 'F')
			plusFlag = false;
	}
	else
	{
		plusFlag = false;
	}

	/* set grade position and grade randomly. if plusFlag is true, set + */
	map[0][widthCount[gradeSetPosition]] = stageInfo.gradeRate[count];
	if (plusFlag)
		map[0][widthCount[gradeSetPosition] + 1] = '+';
	
}