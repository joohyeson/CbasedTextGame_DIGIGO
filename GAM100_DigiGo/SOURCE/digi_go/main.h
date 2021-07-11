/******************************************************************************/
/*
\project name DIGI_GO
\file   main.h
\primary contributor Shon hae won
\author Shon hae won, Son ju hye
\par    Course: GAM100
\brief
this programe is header that determines the window size and adds the required header file.
All content © 2018 DigiPen (USA) Corporation, all rights reserved.
*/
/******************************************************************************/

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

/* prevent warnings from standard header files. */
#pragma warning(push, 0)
#include <stdio.h> /* printf, scanf */
#include <Windows.h> /* system */
#include <conio.h> /* _getch, _kbhit */
#include <stdlib.h>  /* rand, srand, system("cls") */
#include <time.h>  /* time */
#include <stdbool.h> /* bool */
#include <string.h> /* strcmp */
#pragma warning(pop)

#define WIDTH 70
#define HEIGHT 27
#define BASKETSIZE 7
#define NAMESIZE 24