//
//  date.h
//  zadanie1
//
//  Created by Kacper Murygin on 15/03/2022.
//

#ifndef date_h
#define date_h

enum Months {
    January=1, February, March, April, May, June,
    July, August, September, October, November, December
};

class Date {
private:
    int day;
    int month;
    int year;
    bool checkIfLeap(int year);
    bool checkDate(int day, int month, int year);

public:
    Date(int day, int month, int year);

    void setDay(int new_day);

    void setMonth(int new_month);

    void setYear(int new_year);

    int getDay();

    int getMonth();

    int getYear();
};

#endif /* date_h */
