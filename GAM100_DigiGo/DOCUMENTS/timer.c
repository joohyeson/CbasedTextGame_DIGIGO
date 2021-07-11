#include <stdio.h>
#include <conio.h> // _getch()
#include <time.h> // time()



void Timer(long waitTime)
{



}



#include <iostream>

#include <cstdio>

#include <ctime>

#include <conio.h>

 

using namespace std;

 

void wait(int sec) {

clock_t endwait;

endwait = clock() + sec * CLOCKS_PER_SEC;

while(clock() < endwait);

}

 







void Wait(long waitTime)
{
  clock_t wakeTime;
  wakeTime = waitTime + clock();
  while (wakeTime > clock())
  {
    /* Do nothing while waiting. */
  }
}