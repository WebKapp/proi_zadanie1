#include <iostream>
#include "date.h"
using namespace std;

Date::Date(int d, int m, int y) {
    if (checkDate(d, m, y)) {
        day = d;
        month = m;
        year = y;
    }
    else cout << "Wrong date- " <<d << "." << m << "." << y << endl;
};

bool Date::checkIfLeap(int year){
    return ( ((year % 4 == 0) & (year % 100 != 0)) || (year % 400 == 0));
}

bool Date::checkDate(int day, int month, int year){
    if(day < 1 || day > 31) return false;
    if(month < January || month > December) return false;
    if(month == February) {
        if (checkIfLeap(year)) {
            if (day > 29) return false;
            else if (day > 28) return false;
        }
    }
    if (month == April || month == June || month == September || month == November){
        if(day > 30) return false;
    }
    return true;
};

void Date::setDay(int new_day) {
    if (checkDate(new_day, month, year)) day = new_day;
    else cout << "Wrong data. " << day << " " << month << " " << year << endl;
}

void Date::setMonth(int new_month) {
    if (checkDate(day, Months(new_month), year)) month = Months(new_month);
    else cout << "Wrong data. " << day << " " << Months(new_month) << " " << year << endl;
}

void Date::setYear(int new_year) {
    if (checkDate(day, month, new_year)) year =  new_year;
    else cout << "Wrong data. " << day << " " << month << " " << new_year<< endl;
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