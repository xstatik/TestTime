#include "Time.h"

Time::Time()
    :m_seconds(0), m_minutes(0), m_hours(0)
{}

bool Time::SetSeconds(unsigned sec)
{
    if(sec < 60)
    {
        m_seconds = sec;
        return true;
    }

    return false;
 }

unsigned Time::GetSeconds() const
{
    return m_seconds;
}

bool Time::SetMinutes(unsigned minut)
{
    if(minut < 60)
    {
        m_minutes = minut;
        return true;
    }

    return false;
}

unsigned Time::GetMinutes() const
{
    return m_minutes;
}

bool Time::SetHours(unsigned hrs)
{
    if(hrs < 24)
    {
        m_hours = hrs;
        return true;
    }

    return false;
 }

unsigned Time::GetHours() const
{
    return m_hours;
}
