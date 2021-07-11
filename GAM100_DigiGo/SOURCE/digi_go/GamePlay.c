/******************************************************************************/
/*
\project name DIGI_GO
\file   GamePlay.c
\primary contributor Shon hae won
\par    Course: GAM100
\brief
This program allows the game to run
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#include "main.h"
#include "GradeGenerateFunction.h" /* GenerateGrade, DropGrade */ 
#include "DrawMapFunction.h"	/* InitializeMap, DrawMap, DrawCharacter, CharacterMove */
#include "GradeCalculateFunction.h" /* ClearGrade */
#include "GameStateControl.h" /* STAGEINFO, GetStageInfo */
#include "TimeAndGrade.h" /* ResetTime */
#include "utils.h"	/* ClearScreen, setcursortype */
#include "Transitions.h" /* StageTransition, StageTransitionFail */
#include "UserInfo.h" /* CheckCheatName, CheckHHHHName */
#include "PlaySound.h"

char map[HEIGHT][WIDTH];			// declare map
char copyMap[HEIGHT][WIDTH];

bool isGameRunning;

int position;
static int count;

static int currentStage = 0;

static STAGEINFO stageInfo;

void GameInit(void)
{
	/* function for hide cursor */
	setcursortype(NOCURSOR);

	isGameRunning = true;

	/* initialize map, grade, time, position, etc. */
	InitializeMap(map, copyMap);
	ClearGrade();
	
	position = 20; // initial position
	count = 0;

	/* set and get next stage */
	currentStage++;

	stageInfo = GetStageInfo(currentStage);
	ResetTime();

	/* check cheat name */
	if (CheckCheatName())
	{
		stageInfo = GetCheatStageInfo();
	}	
	else if (CheckHHHHName())
	{
		stageInfo = GetHHHHStageInfo();
	}

	ClearScreen();
	DrawCharacter((short)position);
}

/* in case of retake stage */
void GameInitRetake(void)
{
	currentStage = 5;
	GameInit();
}

/* set isGameRunning to false, finish the game */
void GameFinish(void)
{
	isGameRunning = false;
}

void RunningGame(void)
{
	/* if isGameRunning is true, */
	while (isGameRunning)
	{
		int timeLimit = CountTime();
		int lastPosition;
		
		/* if time is 0, show transition, then get stageinfo and start next stage
			if stage is 4 or more(retake), finish the game */
		if (timeLimit == 0)
		{
			
			if (currentStage < 4)	
			{
				
				if (TotalAverageGrade() >= 3.f)
				{
					/* positive transition */
					StageTransition();
					GameInit();
				}
				else
				{
					/* negative transition */
					StageTransitionFail();
					GameInit();
				}
			}
			else
			{
				/* if next stage is not exist, finish the game */
				GameFinish();
				return;
			}
		}

		/* when count is multiply of dropDelay, drop/check grade */
		if (count % stageInfo.dropDelay == 0)	
		{
			CheckGetGrade(map, position);
			DropGrade(map);
		}

		/* when count is multiply of generateDelay, generate grade */
		if (count % stageInfo.generateDelay == 0) 
		{
			GenerateGrade(map, stageInfo);
		}

		/* count number of loop */
		count++;

		/* save last position and get new position */
		lastPosition = position;
		position = CharacterMoveFunction(position);		// Set basket's position

		DrawMap(map, copyMap);

		/* if last position is different with current position, draw character */
		if (lastPosition != position)
		{
			DrawCharacter((short)position);
		}

		/* delay */
		Wait(1);
	}
}
