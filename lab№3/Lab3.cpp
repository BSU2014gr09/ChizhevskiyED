#include "stdafx.h"
#include "mydate.h"
#include <iostream>
using namespace std;


int main()
{
    date today;
    date daybefore;
    date *tomorrow = new date;
    int i;

   /* today = SetDate(19, 05, 2015); */
    cout << "--------";
    today = InputDate();
    

    *tomorrow = NextDate(today);
    daybefore = PreviousDate(today);

    cout << "day before: ";
    PrintDate(daybefore);
    
    cout << "today: ";
    PrintDate(today);
    
    cout << "tomorrow: ";
    PrintDate(tomorrow);

    cout << "In a days: ";
    cin >> i;

    addDays(&today, i);

    cout << " = ";
    PrintDate(today);

    cout << "Days ago: ";
    cin >> i;

    subDays(&today, i);

    cout << " = ";
    PrintDate(today);

    cout << endl;
    
    /* PrintDate(today); */
    
    int rc = cmpDate(today, *tomorrow);
    if (rc == 0)
        cout << " equal to ";
    else if (rc == -1)
        cout << " less than ";
    else if (rc == 1)
        cout << " more than ";
    else
        cout << " invalid date ";
    PrintDate(tomorrow);

    setlocale(LC_ALL, "Russian");
    cout << endl;
    cout << "¬ведите две даты дл€ вычислени€ разницы между ними" << endl;

    date d1,d2;
    d1 = InputDate();
    d2 = InputDate();

   
    cout << "Difference between d1 and d2 : " << SubDates(d1, d2) << " days" << endl;


	return 0;
}

