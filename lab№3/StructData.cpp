#include "iostream"
#include "date.h"
using namespace std;




int main()
{         
    Date *pDate = new Date(12, Dec, 2015);
    int d;
    int y;
    int m;

    setlocale(LC_ALL, "Russian");

     pDate->printDate();

    cout << "������� �����(Jan,Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec): " ;
    cin  >> m;
    cout << "������� �����: ";
    cin >> d;
    cout << "������� ���: ";
    cin >> y;


    if (pDate->setMonth((Month) m) == 0)
    {
        cout << "������ ������ ���. ��������� ������." << endl;
    }
    if (pDate->setYear(y) == 0)
    {
        cout << "������ ���� ���. ��������� 2000." << endl;
    }
    if (pDate->setDay(d) == 0)
    {
        cout << "������ ��� ���. ��������� 1." << endl;
    }

    pDate->printDate();

	return 0;
}

