#include <conio.h> 
#include <iostream>

using namespace std;

int initstr(char *m)
{
    cout << "������� ������, ��������� ����� ������ ����� ������� '.' ";
    *m=_getch();
    _putch(*m);

    while (*m != '.')
    {
        m++;
        *m = _getch();
        _putch(*m);
    }

      *m = '\0';

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
     int length=0;
     int N=4; // ����� �����

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

    return;
}