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

char *strokpreob_2(char *str, char *target)      // ����� �������, � ������������� ���������
{
     char *pWord=NULL;  // ��������� ��������� �� ����� ��� �����������  
     int N; // ����� �����, ������� ����� �������
     *target='\0';

     cout << "������� ����� �����, ������� ������ �������: ";
     cin >> N;

     cout << "�������� ������: " << str << endl ;

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
    cout << "�������� ������: " << target << endl ;

    return target;
}