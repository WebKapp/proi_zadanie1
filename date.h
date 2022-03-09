#ifndef DATE.H
#define DATE.H


class Date {
private:
    int day;
    int month;
    int year;

    bool checkDate(int d, int m, int y);

public:
    Date(int d, int m, int y);

    void setDay(int d);

    void setMonth(int m);

    void setYear(int y);

    int getDay();

    int getMonth();

    int getYear();
};


#endif; //ZADANIE1_DATE_H
