//Implementation File for the class clockType

#include <iostream>
#include <cmath>
#include "clockType.h"

using namespace std;

void clockType::setTime(int hours, int minutes, int seconds)
{
  if (0 <= hours && hours < 24)
    hr = hours;
  else
    hr = 0;

  if (0 <= minutes && minutes < 60)
    min = minutes;
  else
    min = 0;

  if (0 <= seconds && seconds < 60)
    sec = seconds;
  else
    sec = 0;
}

void clockType::setHours(int hours)
{
  if (0 <= hours && hours < 24)
    hr = hours;
  else
    hr = 0;
}

void clockType::setMinutes(int minutes)
{
  if (0 <= minutes && minutes < 60)
    min = minutes;
  else
    min = 0;
}

void clockType::setSeconds(int seconds)
{
  if (0 <= seconds && seconds < 60)
    sec = seconds;
  else
    sec = 0;
}

void clockType::getTime(int &hours, int &minutes, int &seconds) const
{
  hours = hr;
  minutes = min;
  seconds = sec;
}

void clockType::incrementHours()
{
  hr++;
  if (hr > 23)
    hr = 0;
}

void clockType::incrementMinutes()
{
  min++;
  if (min > 59)
  {
    min = 0;
    incrementHours();
  }
}

void clockType::incrementSeconds()
{
  sec++;

  if (sec > 59)
  {
    sec = 0;
    incrementMinutes();
  }
}

void clockType::printTime() const
{
  if (hr < 10)
    cout << "0";
  cout << hr << ":";

  if (min < 10)
    cout << "0";
  cout << min << ":";

  if (sec < 10)
    cout << "0";
  cout << sec;
}

bool clockType::equalTime(const clockType &otherClock) const
{
  return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}

clockType::clockType(int hours, int minutes, int seconds)
{
  if (0 <= hours && hours < 24)
    hr = hours;
  else
    hr = 0;

  if (0 <= minutes && minutes < 60)
    min = minutes;
  else
    min = 0;

  if (0 <= seconds && seconds < 60)
    sec = seconds;
  else
    sec = 0;
}

clockType::clockType() //default constructor
{
  hr = 0;
  min = 0;
  sec = 0;
}

int clockType::timeElapsed()
{
  // int totalTime = sec + (60*min) + (hr*3600);
  return sec + (60 * min) + (hr * 3600);
}

int clockType::timeRemaining()
{
  //Total time in the day 24 (hrs) * 60(mins) *60(seconds) = 86400
  // totalTime = 86400;
  return 86400 - timeElapsed();
}

void clockType::timeDifference(clockType &otherClock)
{

  // initializing differences in seconds, mins, and hours
  int sDiff, mDiff, hDiff;

  // call timeElpased for clock 1
  int clock1Time = timeElapsed();

  // call timeElpased for clock 2
  int clock2Time = otherClock.timeElapsed();

  // Find the difference between the clocks
  // (use absolute value to ensure positive int)
  int timeDiff = abs(clock1Time - clock2Time);

  // Create a new clock to store the time difference
  clockType differenceClock;

  // mod time difference by 60 to grab remainder for sDiff
  sDiff = timeDiff % 60;

  // then divide the time difference by 60 and mod the result for mDiff
  mDiff = (timeDiff / 60) % 60;

  // then divide the time difference by 60 and 60 again (3600) for hDiff
  hDiff = (timeDiff / 3600);

  differenceClock.setTime(hDiff, mDiff, sDiff);

  differenceClock.printTime();
}
