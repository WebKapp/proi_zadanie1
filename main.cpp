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
    cout << date1.getDay() << endl;
    cout << date1.getMonth() << endl;
    cout << date1.getYear() << endl;
    date1.setMonth(January);
    cout << date1.getMonth() << endl;

    Date date2(10, 11, 2021);
    
    Date date3(24, 13, 2023);

    date2.setDay(34);
    date2.setYear(-223);
    return 0;
}
