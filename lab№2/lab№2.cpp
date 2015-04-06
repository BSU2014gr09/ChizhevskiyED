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

     cout << "Введите размер квадратной матрицы: ";
     cin >> N;

      if (N < 2 )                                                                
       { 
           cout <<  "Матрица для инвалидов, введите нормальную матрицу, например 2х2:" << endl;
           return 0;
       }


    int **Mas = new int *[N];
    for (i = 0; i < N; i++)  
        Mas[i] = new int [N];

    cout << "1. Ввести матрицу руками" << endl;
    cout << "2. Проинициализировать матрицу случайными числами" << endl;

    vvodMatr(Mas,N);

    k=MinElement(Mas, N);
     cout << "Начальная матрица: "  << endl;
    printarray(Mas, N);

    cout << endl;

    cout << "Конечная матрица: "  << endl;

    changesign(Mas,N,k);
    printarray(Mas, N);

    for (i = 0; i < N; i++)
        delete[] Mas[i];
    delete [] Mas;

    
	return 0;
}

