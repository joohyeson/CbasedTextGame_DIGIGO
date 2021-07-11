/******************************************************************************/
/*
\project name DIGI_GO
\file   PlaySound.c
\primary contributor Son Ju Hye
\par    Course: GAM100
\brief
this program play backgroudn music.
*/
/******************************************************************************/
#include<stdio.h>
#include<Windows.h>
#include<MMSystem.h>
#include<conio.h>
#pragma comment(lib,"Winmm.lib")

void soundPlay(void)
{
	//mciSendString("play startsound.wav", NULL, 0, NULL);//배경음 재생
	PlaySound(TEXT("startsound.wav"), NULL, SND_ASYNC|SND_LOOP);
	//ex) C:\test\aa.wav ->"C:\\test\\aa.wav"
	//system("pause");

}
void soundBAAM(void)
{
	PlaySound(TEXT("BAAM.wav"), NULL, SND_ASYNC);

}
void soundClap(void)
{
	PlaySound(TEXT("clap.wav"), NULL, SND_ASYNC);
}
