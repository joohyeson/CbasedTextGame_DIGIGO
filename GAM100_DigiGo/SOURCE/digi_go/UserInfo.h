/******************************************************************************/
/*
\project name DIGI_GO
\file   UserName.h
\primary contributor Shon hae won
\par    Course: GAM100
\brief
this program get/give user name.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/
#pragma once

struct player {
	double grade;
	char name[NAMESIZE];
};

void EnterUserName(void);
struct player *GetUserInfo(void);
bool CheckCheatName(void);
bool CheckHHHHName(void);
bool CheckJunseok(void);