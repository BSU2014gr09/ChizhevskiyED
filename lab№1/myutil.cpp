#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include <iostream>
#include <stdio.h>


using namespace std;


int initstr(char *m)
{
     cout << "Введите строку ";
     gets(m); 
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

char *strokpreob_2(char *str, char *target)      // новая функция, с библиотечными функциями
{
     char *pWord=NULL;  // сохраняем указатель на слово для копирования  
     int N; // длина слова, которое нужно удалить
     *target='\0';

     cout << "Введите длину слова, которое будете удалять: ";
     cin >> N;

     cout << "Исходная строка: " << str << endl ;

    pWord = strtok(str, " ");
	while (pWord)	
    {
        if(strlen(pWord) == N && isdigit(*pWord) )
        {
                                                  
        }
        else
        {
          strcat(target, pWord);
          strcat(target, " ");
        }

		pWord = strtok(NULL, " ");

    }
    cout << "Конечная строка: " << target << endl ;

    return target;
}

void strokpreob(char *m, char *str)
{
     char *k;  // сохраняем указатель на слово для копирования 
     char f;  
     int N; // длина слова, которое нужно удалить

     cout << "Введите длину слова, которое будете удалять: ";
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
}    // cтарая функция