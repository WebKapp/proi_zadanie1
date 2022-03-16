//
//  main.cpp
//  zadanie1
//
//  Created by Kacper Murygin on 08/03/2022.
//

#include <iostream>
#include "date.h"
using namespace std;

int main() {
    Date date1(10,12,2020);
    cout << date1.getDay() << "." << date1.getMonth() << "." << date1.getYear() << endl;

    date1.setMonth(1);
    date1.printDate();

    Date date2(10, 11, 2021);
    date2.printDate();
    
    Date date3(24, 13, 2023); //wrong date

    Date date4(24, 12, 2022);
    date4.printDate();

    date2.setDay(34); //wrong day
    date2.setYear(-223); //wrong year

    Date date5(28, 2, 2022);
    date5.printDate();

    Date date6(29, 2, 2022); //not a leap year
    Date date7(29, 2, 2024); //a leap year

    date7.printDate();
    return 0;
}
