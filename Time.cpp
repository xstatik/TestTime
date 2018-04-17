#include "Time.h"

Time::Time()
{
    m_seconds = 0;
    m_minutes = 0;
    m_hours = 0;
}

bool Time::SetSeconds(const unsigned sec)
{
    if(sec < 60 && sec >= 0)
    {
        m_seconds = sec;
        return true;
    }
    else
    {
        return false;
    }
}

unsigned Time::GetSeconds() const
{
    return m_seconds;
}

bool Time::SetMinutes(const unsigned mnut)
{
    m_minutes = mnut;
}

unsigned Time::GetMinutes() const
{
    return m_minutes;
}

bool Time::SetHours(const unsigned hrs)
{
    m_hours = hrs;
}

unsigned Time::GetHours() const
{
    return m_hours;
}
