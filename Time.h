#ifndef TIME_H
#define TIME_H

	/**
	 * @class Time
	 * @brief  To hold the details of Time itself
	 *
	 * To hold the details of a Time.
	 *
	 * @author Wade Davidson
	 * @version 01
	 * @date 17/04/2018 Wade Davidson, added private member variables and pushed to git.
	 *
	 * @todo Everything
	 *
	 * @bug None yet....
	 */



class Time
{
    public:
        Time();

    private:
        unsigned m_seconds;
        unsigned m_minutes;
        unsigned m_hours;
};

#endif // TIME_H
