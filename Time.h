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
	 * @author Wade Davidson
	 * @version 02
	 * @date 17/04/2018 Wade Davidson, added set and get for seconds and tested.
	 *
	 * @todo Everything
	 *
	 * @bug None yet....
	 */



class Time
{
    public:
        Time();
            /**
            * @brief  Function to set seconds
            *
            * Retruns true if successful
            *
            * @param  sec - set it to this
            * @pre must be between 0 and 59 inclusive
            * @return bool
            */
        bool SetSeconds(const unsigned sec);
            /**
            * @brief  Retrieves seconds for you
            *
            * @return unsigned
            */
        unsigned GetSeconds() const;

        bool SetMinutes(const unsigned sec);
        unsigned GetMinutes() const;

        bool SetHours(const unsigned sec);
        unsigned GetHours() const;

    private:
        unsigned m_seconds;
        unsigned m_minutes;
        unsigned m_hours;
};

#endif // TIME_H
