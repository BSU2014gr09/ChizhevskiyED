// lab№1.cpp: В строке удалить все слова заданной длины, начинающиеся с цифры.

#include <iostream>
#include <conio.h>
#include "myutil.h"

using namespace std;

int main()
{
    char *m = new char [211];   // исходная строка
    char *str = new char[211];   // строка куда копируем 

    setlocale(LC_ALL, "Russian");

    if (printcondition() != 1 )
         return -1; 

    initstr(m);

    strokpreob(m,str);

    cout << "Исходная строка: " << m << endl ;
    cout << "Конечная строка: " << str << endl ;

    delete[]m;
    delete[]str;


	return 0;
}


