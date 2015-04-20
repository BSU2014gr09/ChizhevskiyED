#include "iostream"
#include "date.h"
using namespace std;




int main()
{         
    Date *pDate = new Date(30, 12, 2015);
    int d;
    int y;
    int m,a;

    setlocale(LC_ALL, "Russian");

    cout << "Дата по умолчанию: ";

    pDate->printDate();
    (*pDate)++;

    cout << "Следующий день: ";
    pDate->printDate();

    cout << "Предыдущий день: ";
    (*pDate)--;
    pDate->printDate();
    

    cout << "Введите месяц: " ;
    cin  >> m;
    cout << "Введите число: ";
    cin >> d;
    cout << "Введите год: ";
    cin >> y;

    pDate->setMonth(m);
    pDate->setYear(y);
    pDate->setDay(d);

    if (!pDate->valid())
    {
        cout << "Date is not valid. Set to 1.1.2015." << endl;
            pDate->setMonth(1);
            pDate->setYear(2015);
            pDate->setDay(1);
    } 
     pDate->printDate();

    cout << "На сколько дней увеличить дату ";
    cin >> a;

    pDate->addDays(a);

    pDate->printDate();

    cout << "На сколько дней уменьшить дату ";
    cin >> a;

    pDate->subDays(a);

    pDate->printDate();

	return 0;
}

