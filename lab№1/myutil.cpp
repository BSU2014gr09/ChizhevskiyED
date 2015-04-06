#include <conio.h> 
#include <iostream>

using namespace std;

int initstr(char *m)
{
    cout << "Введите строку, признаком конца строки будет являтся '.' ";
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

    cout << "Введите 0 для просмотра условия: " << endl;
    cout << "Нажмите 1, чтобы получить решение" << endl;
    cout << "Нажмите 2, чтобы выйти" << endl;

    
    z=_getch();
    switch(z)
    {
    case '0': {
                  cout << "В строке удалить все слова заданной длины, начинающиеся с цифры." << endl;  
                  return 0;
              }

    case '1': return 1;

    case '2' : return 2;

    default: cout << "Некорректный ввод" << endl; 
        return 3;

    }


}

void strokpreob(char *m, char *str)
{
     char *k;  // сохраняем указатель на слово для копирования 
     int length=0;
     int N=4; // длина слова

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