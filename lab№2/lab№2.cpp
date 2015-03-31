
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
     int z=0;
     bool ok=false;

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

    int** Mas = new int *[N];
    for (i = 0; i < N; i++)  
        Mas[i] = new int [N];

    cout << "1. ������ ������� �������" << endl;
    cout << "2. ������������� ������� ��������������" << endl;

    while (ok == false)
    {
    z=_getch();
    switch(z)
    {
    case '1': {
                  cout << "������� �������� �������" << N << "x" << N << endl;
                  inputarray(Mas, N);
                  ok = true;
                  break;
              }

    case '2' :   {
        initarray(Mas, N);
        cout << "������� �������������" << endl;
        ok = true;
        break;
                 }

    default: cout << "��������� ����: " << endl;

    }

    }

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

void inputarray(int **mas, int m )  
{

    for (int i=0; i<m; i++)
         for (int j=0; j<m; j++)
             cin >>  mas[i][j];
      return;
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

        cout <<endl;
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

     cout << "����������� ������� " << MinElement <<endl;

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
            cout << "���. ������� " << k << " ��������� ��� ������� ����������." <<endl;
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

    cout << "������� 0, ����� ������ ������� ������" << endl;
    cout << "������� 1, ����� �������� �������" << endl;
    cout << "������� 2, ����� �����" << endl;

    
    z=_getch();
    switch(z)
    {
    case '0': {
                  cout << "������� ���� ������������ �������� ������� �(N,N), ���� �� ��������� ���� ������� ���������." << endl;  
                  return 0;
              }

    case '1': return 1;

    case '2' : return 2;

    default: cout << "������������ ����" << endl; 
        return 3;

    }


}