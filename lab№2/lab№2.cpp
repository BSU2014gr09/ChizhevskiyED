#include "stdafx.h"
#include <conio.h>
#include <time.h>
#include <iostream>
#include "myfunc.h"

using namespace std;

int main()
{
     int i=0;
     int k=0;
     int N=0;
    
     setlocale(LC_ALL, "Russian");

     if (printcondition() != 1 )
         return -1;

     cout << "������� ������ ���������� �������: ";
     cin >> N;

      if (N < 2 )                                                                
       { 
           cout <<  "������� ��� ���������, ������� ���������� �������, �������� 2�2:" << endl;
           return 0;
       }


    int **Mas = new int *[N];
    for (i = 0; i < N; i++)  
        Mas[i] = new int [N];

    cout << "1. ������ ������� ������" << endl;
    cout << "2. ������������������� ������� ���������� �������" << endl;

    vvodMatr(Mas,N);

    k=MinElement(Mas, N);
     cout << "��������� �������: "  << endl;
    printarray(Mas, N);

    cout << endl;

    cout << "�������� �������: "  << endl;

    changesign(Mas,N,k);
    printarray(Mas, N);

    for (i = 0; i < N; i++)
        delete[] Mas[i];
    delete [] Mas;

    
	return 0;
}

