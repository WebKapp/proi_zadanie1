#include "date.h"
using namespace std;

enum Months {
    January=1, February, March, April, May, June,
    July, August, September, October, November, December
};

Date::Date(int d, int m, int y) {
    if (checkDate(d, m, y)) {
        day = d;
        month = m;
        year = y;
    }
//    else cout << "Wrong data. " <<d << " " << m << " " << y << endl;
};

void Date::setDay(int d) {
    if (checkDate(d, month, year)) day = d;
//    else cout << "Wrong data. " << d << " " << month << " " << year << endl;
}

void Date::setMonth(int m) {
    if (checkDate(day, Months(m), year)) month = Months(m);
//    else cout << "Wrong data. " << day << " " << Months(m) << " " << year << endl;
}

void Date::setYear(int y) {
    if (checkDate(day, month, y)) year = y;
//    else cout << "Wrong data. " << day << " " << month << " " << y<< endl;
}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}