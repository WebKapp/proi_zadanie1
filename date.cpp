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

bool Date::checkDate(int d, int m, int y){
    bool output = true;
    if (m == 2) { //February
        if ((y%4==0 && y%100!=0) || y%400==0) {
            if (d > 29) output=false;
        }
        else if (d > 28) output=false;
    }
    else if ((m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12)){
        if (d > 31) output=false; //months 31-day
    }
    else if (d > 30) output=false; //months 30-day

    return output;
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