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

     cout << "����������� �������: " << MinElement <<endl;

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

    cout << "������� 0 ��� ��������� �������: " << endl;
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
                  cout << "������� �������� �������" << N << "�" << N << endl;
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

}