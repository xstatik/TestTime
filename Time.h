//Time.h
//Author: Wade Davidson
//Stores a time

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
	 * @author Wade Davidson
	 * @version 03
	 * @date 17/04/2018 Wade Davidson, added set and get for minutes and tested.
	 *
	 * @author Wade Davidson
	 * @version 04
	 * @date 17/04/2018 Wade Davidson, added set and get for hours and tested.
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
        bool SetSeconds(unsigned sec);
            /**
            * @brief  Retrieves seconds for you
            *
            * @return unsigned
            */
        unsigned GetSeconds() const;
            /**
            * @brief  Function to set minutes
            *
            * Retruns true if successful
            *
            * @param  minut - set it to this
            * @pre must be between 0 and 59 inclusive
            * @return bool
            */
        bool SetMinutes(unsigned minut);
            /**
            * @brief  Retrieves minutes for you
            *
            * @return unsigned
            */
        unsigned GetMinutes() const;
            /**
            * @brief  Function to set hours
            *
            * Retruns true if successful
            *
            * @param  hrs - set it to this
            * @pre must be between 0 and 23 inclusive
            * @return bool
            */
        bool SetHours(unsigned hrs);
            /**
            * @brief  Retrieves hours for you
            *
            * @return unsigned
            */
        unsigned GetHours() const;

    private:
            ///Stores seconds
        unsigned m_seconds;
            ///Stores minutes
        unsigned m_minutes;
            ///Stores hours
        unsigned m_hours;
};

#endif // TIME_H
