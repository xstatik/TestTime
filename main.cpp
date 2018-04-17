#include "Time.h"
#include "TimeUtils.h"
#include <iostream>

using namespace std;

void Test01();
void Test02();
void Test03();

int main()
{
    Test01();
    Test02();
    Test03();

    return 0;
}

void Test01()
{
    cout << "----------TEST01----------" << endl;

    Time testTime;

    printTime(testTime);
}

void Test02()
{
    cout << "----------TEST02----------" << endl;

    Time testTime;

    if(!testTime.SetSeconds(-1))
    {
        cout << "Can't assign a negative" << endl;
    }
    if(!testTime.SetSeconds(60))
    {
        cout << "Can't assign a more than 59" << endl;
    }

    testTime.SetSeconds(59);
    printTime(testTime);
    testTime.SetSeconds(0);
    printTime(testTime);
}

void Test03()
{
    cout << "----------TEST03----------" << endl;

    Time testTime;

    if(!testTime.SetMinutes(-1))
    {
        cout << "Can't assign a negative" << endl;
    }
    if(!testTime.SetMinutes(60))
    {
        cout << "Can't assign a more than 59" << endl;
    }

    testTime.SetMinutes(59);
    printTime(testTime);
    testTime.SetMinutes(0);
    printTime(testTime);
}
