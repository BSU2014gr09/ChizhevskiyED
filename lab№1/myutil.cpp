#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include <iostream>
#include <stdio.h>


using namespace std;


int initstr(char *m)
{
     cout << "������� ������ ";
     gets(m); 
     return 0;
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
                  cout << "� ������ ������� ��� ����� �������� �����, ������������ � �����." << endl;  
                  return 0;
              }

    case '1': return 1;

    case '2' : return 2;

    default: cout << "������������ ����" << endl; 
        return 3;

    }


}

void strokpreob(char *m, char *str)
{
     char *k;  // ��������� ��������� �� ����� ��� ����������� 
     char f;  
     int N; // ����� �����, ������� ����� �������

     cout << "������� ����� �����, ������� ������ �������: ";
     cin >> N;

     while(*m!='\0')
    {
       while (*m== ' ' && *m!='\0')
       {                              
           *str=*m;
           m++;
           str++;
       }

       k=m;

      while (*m!= ' ' && *m!= '\0' )
       {
           m++;
       }

       f=*m;
       *m= '\0';
       if(!(strlen(k) == N && isdigit(*k) ))
       {
           while(k!=m)
           {
               *str=*k;
               k++;
               str++;
           }
       }
       *m=f;
     }
    *str='\0';
    

    return;
}