/******************************************************************************/
/*
\project name DIGI_GO
\file   GameStateControl.h
\primary contributor Shon hae won
\author Shon hae won, Son ju hye, Kim hagyeong
\par    Course: GAM100
\brief
this program allows to apply level
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#pragma once

#define NUM_OF_SETGRADE 100

typedef struct stageInfo {
	int dropDelay;
	int generateDelay;
	int plusRate;
	char gradeRate[NUM_OF_SETGRADE];
} STAGEINFO;

STAGEINFO GetStageInfo(int stageNumber);
STAGEINFO GetCheatStageInfo(void);
STAGEINFO GetHHHHStageInfo(void);