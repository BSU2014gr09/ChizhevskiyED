// lab№1.cpp: В строке удалить все слова заданной длины, начинающиеся с цифры.
// TODO В main должно быть только меню и вызов функций, а у Вас прямо тут работа. Вынести пребразование строки в отдельную ф-цию
// Есть в программе NEW но нет DELETE. Добавить!!!

#include <iostream>
#include <conio.h>
#include "myutil.h"

using namespace std;

int main()
{
    char *m = new char [211];   // исходная строка
    char *str = new char[21];   // строка куда копируем
    char *k;  // сохраняем указатель на слово для копирования  
    int length=0;
    int N=4;
    int i=0;
    char *source=m; 
    char *result=str;
    int z=0;

    setlocale(LC_ALL, "Russian");

    cout << "Нажмите 0, чтобы узнать условие задачи" << endl;
    cout << "Нажмите 1, чтобы получить решение" << endl;
    cout << "Нажмите 2, чтобы выйти" << endl;

    z=_getch();
    switch(z)
    {
    case '0': {
                  cout << "В строке удалить все слова заданной длины, начинающиеся с цифры." << endl;  
                  return 0;
              }

    case '1': break;

    case '2' : return 0;

    default: return 0;

    }

    cout << "Введите строку, признаком конца строки будет являтся '.' "; 

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

    cout << "Исходная строка: " << source << endl ;
    cout << "Конечная строка: " << result << endl ;


	return 0;
}

