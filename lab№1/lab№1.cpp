// lab�1.cpp: � ������ ������� ��� ����� �������� �����, ������������ � �����.

#include <iostream>
#include <conio.h>
#include "myutil.h"

using namespace std;

int main()
{
    char *m = new char [211];   // �������� ������
    char *str = new char[21];   // ������ ���� ��������
    char *k;  // ��������� ��������� �� ����� ��� �����������  
    int length=0;
    int N=4;
    int i=0;
    char *source=m; 
    char *result=str;
    int z=0;

    setlocale(LC_ALL, "Russian");

    cout << "������� 0, ����� ������ ������� ������" << endl;
    cout << "������� 1, ����� �������� �������" << endl;
    cout << "������� 2, ����� �����" << endl;

    z=_getch();
    switch(z)
    {
    case '0': {
                  cout << "� ������ ������� ��� ����� �������� �����, ������������ � �����." << endl;  
                  return 0;
              }

    case '1': break;

    case '2' : return 0;

    default: return 0;

    }

    cout << "������� ������, ��������� ����� ������ ����� ������� '.' "; 

    initstr(m);

    while(*m!='\0')
    {
       while (*m== ' ' && *m!='\0')
       {                              
           *str=*m;
           m++;
           str++;
       }

       k=m;

       length=0;
       while (*m!= ' ' && *m!= '\0' )
       {
           m++;
           length++;
       }

       if(length == N || isdigit(*k) )
       {

       }

       else
       {
           while(k!=m)
           {
               *str=*k;
               k++;
               str++;
           }
       }

    }

    *str='\0';

    cout << "�������� ������: " << source << endl ;
    cout << "�������� ������: " << result << endl ;


	return 0;
}

