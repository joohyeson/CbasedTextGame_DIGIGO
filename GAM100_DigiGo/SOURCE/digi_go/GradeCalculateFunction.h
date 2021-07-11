/******************************************************************************/
/*
\project name DIGI_GO
\file   GradeCalculateFunction.h
\primary contributor Shon hae won
\author Shon hae won, Kim ha gyeong
\par    Course: GAM100
\brief
this file include decleration about grade calculating functions.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#pragma once

void ClearGrade(void);

void CheckGetGrade(char map[][WIDTH], int position);

double CurrentAverageGrade(void);

double TotalAverageGrade(void);

void CalculateGrade(float catchedGrade);

void DropGrade(char map[][WIDTH]);