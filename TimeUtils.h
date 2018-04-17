#include "Time.h"
#include <iostream>

using namespace std;


void printTime(Time &newTime)
{
    cout << "Seconds: " << newTime.GetSeconds() << endl;
    cout << "Minutes: " << newTime.GetMinutes() << endl;
    cout << "Hours: " << newTime.GetHours() << endl;
}
