#include "stdafx.h"
#include "myfunc.h"
#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

void inputarray(int **mas, int m )  
{

    for (int i=0; i<m; i++)
         for (int j=0; j<m; j++)
             cin >>  mas[i][j];
      return;
}

int lab2()
{
     int i=0;
     int k=0;
     int N=0;

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

void printarray(int **mas, int m )
 {
     int i,j;
  
     for (i=0; i<m; i++)
     {
       for (j=0; j<m; j++)
     {
         cout << mas[i][j] << "\t";
	}

        cout << endl;
     }

     return;
 }

int MinElement(int **mas, int m )
 {
     int MinElement=mas[0][0];

     for (int i=0; i<m; i++)
     {
        for(int j=0; j<m; j++)
        {
            if (MinElement > mas[i][j])
             { 
                 MinElement = mas[i][j];
             }
        }
     }

     cout << "Минимальный элемент: " << MinElement <<endl;

        return MinElement;
 }

void changesign(int **mas, int m, int k)
 {
    bool did=false;

    for (int i=0; i<m; i++)
     {
        for(int j=i+1; j<m; j++)
        {
            if (k == mas[i][j])
             { 
                 mas[i][j]= (-1)*mas[i][j];
                 did=true;
             }
        }
     }
        if (did == false)
            cout << "Мин. элемент " << k << " находится под главной диагональю." <<endl;
        return ;
 }

void initarray(int **mas, int m)  
{
  int i,j;
  srand(time(NULL));
  for(i=0; i<m; i++)
      for (j=0; j<m; j++)
       mas[i][j]=rand() % 100-50;
  return;
}

int printcondition()
{
    int z=0;

    cout << "Введите 0 для просмотра условия: " << endl;
    cout << "Нажмите 1, чтобы получить решение" << endl;
    cout << "Нажмите 2, чтобы выйти" << endl;

    
    z=_getch();
    switch(z)
    {
    case '0': {
                  cout << "Сменить знак минимального элемента массива А(N,N), если он находится выше главной диагонали." << endl;  
                  return 0;
              }

    case '1': return 1;

    case '2' : return 2;

    default: cout << "Некорректный ввод" << endl; 
        return 3;

    }


}

void vvodMatr(int **Mas, int N)
{
     int z=0;
     bool ok=false;

     while (ok == false)
    {
    z=_getch();
    switch(z)
    {
    case '1': {
                  cout << "Вводите занчение матрицы" << N << "х" << N << endl;
                  inputarray(Mas, N);
                  ok = true;
                  break;
              }

    case '2' :   {
        initarray(Mas, N);
        cout << "Матрица сгенерирована" << endl;
        ok = true;
        break;
                 }

    default: cout << "Повторите ввод: " << endl;

    }

    }

}