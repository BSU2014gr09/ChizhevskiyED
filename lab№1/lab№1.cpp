// lab�1.cpp: � ������ ������� ��� ����� �������� �����, ������������ � �����.

#include <iostream>
#include <conio.h>
#include "myutil.h"

using namespace std;

int main()
{
    char *m = new char [211];   // �������� ������
    char *str = new char[211];   // ������ ���� �������� 

    setlocale(LC_ALL, "Russian");

    if (printcondition() != 1 )
         return -1; 

    initstr(m); 
    strokpreob(m,str);

    cout << "�������� ������: " << m << endl ;
    cout << "�������� ������: " << str << endl ;

    delete[]m;
    delete[]str;


	return 0;
}


