/******************************************************************************/
/*
\project name DIGI_GO
\file   GameStateControl.c
\primary contributor Shon hae won
\author Shon hae won, Son ju hye, Kim hagyeong
\par    Course: GAM100
\brief
this program apply level each stage
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#include "main.h"
#include "GameStateControl.h" /* STAGEINFO */
#include "utils.h" /* ClearScreen */
#include "Transitions.h" /* StageNumber1, 2, 3, 4, Retake */

STAGEINFO stage1 = { 80, 160, 80,		// 50 A 30 B 15 C 5 D
									{ 'A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A',
									'B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B',
									'C','C','C','C','C','C','C','C','C','C','C','C','C','C','C',
									'D','D','D','D','D'}};
STAGEINFO stage2 = { 60, 90, 60,		// 30 A 35 B 20 C 10 D 5 F
									{ 'A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A','A',
									'B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B',
									'C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C',
									'D','D','D','D','D','D','D','D','D','D',
									'F','F','F','F','F'} };
STAGEINFO stage3 = { 50, 75, 50,		// 20 A  25 B 20 C 15 D 20 F
									{ 'A','A','A','A','A', 'A','A','A','A','A', 'A','A','A','A','A', 'A','A','A','A','A',
									'B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B',
									'C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C','C',
									'D','D','D','D','D','D','D','D','D','D','D','D','D','D','D',
									'F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F'} };
STAGEINFO stage4 = { 40, 60, 30,		// 10 A 20 B 20 C 20 D 30 F
									{  'A','A','A','A','A', 'A','A','A','A','A',
									'B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B','B',
									'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C',
									'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D', 'D',
									'F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F','F'} };

// stage for cheat - professors with all A
STAGEINFO stageProf = { 50, 50, 90,{ 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'} };
// stage for un-cheat - 4H with all F
STAGEINFO stageHHHH = { 50, 50, 0, { 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F', 'F'} };

STAGEINFO GetStageInfo(int stageNumber)
{
	/* print transition and return stageInfo based on input */
	switch (stageNumber)
	{
	case 1:
		StageNumber1();
		return stage1;
	case 2:
		StageNumber2();
		return stage2;
	case 3:
		StageNumber3();
		return stage3;
	case 4:
		StageNumber4();
		return stage4;
	case 5:
		StageRetake();
		return stage3;
	default:
		return stage1;
	}
}

/* if cheat stage, return correct stageInfo */
STAGEINFO GetCheatStageInfo(void)
{
	return stageProf;
}

STAGEINFO GetHHHHStageInfo(void)
{
	return stageHHHH;
}
