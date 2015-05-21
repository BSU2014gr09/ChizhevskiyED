//Дано: файл с числами.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "LinkList.h"

using namespace std;

#define RC_OK 1
#define RC_ERROR -1;

int UserInput(char* file_name, int a, int b);
int DoLab(char* file_name, int a, int b);

int UserInput(char* file_name, int *a, int *b)
{
    cout << "A: ";
    cin >> *a;

    cout << "b: ";
    cin >> *b;

    if (*a > *b)
    {
        cout << "Incorrect input. A must be less B!!!";
        return RC_ERROR;
    }

    cout << "File name: ";
    cin >> file_name;

    return RC_OK;
}

int DoLab(char* file_name, int a, int b)
{
    ifstream     file;
    int          number;
    linklist    *lA  = new linklist();
    linklist    *lAB = new linklist();
    linklist    *lB  = new linklist();

    file.open(file_name);

    if (!file)
    {
        cout << "Cannot open file "<< file_name <<endl;
        return RC_ERROR;
    }

    cout << "contents of file:" << endl;
    cout << "Begin" << endl;

    while (file)
    {
        file >> number;
        if (file)
        {
           cout << number << " ";
           if (number < a)
           {
               lA->additem(number);
           }
           else if (number > b)
           {
               lB->additem(number);
           }
           else
           {
               lAB->additem(number);
           }
        }
    }

    cout << endl << "End" << endl;
    file.close();

    cout << endl <<"Numbers less than "<< a << ": " << endl;
    lA->PrintList();

    cout << endl << "The numbers in the range ["<< a <<"..." << b<< "]: "<< endl;
    lAB->PrintList();

    cout << endl << "Numbers greater than "<< b << ": "<< endl;
    lB->PrintList();

    delete lA;
    delete lAB;
    delete lB;

    return RC_OK;
}

int main()
{
    char         file_name[1024];
    int          a, b;

    if (UserInput(file_name, &a, &b) != RC_OK)
        return RC_ERROR;

    if (DoLab(file_name, a, b))
        return RC_ERROR;

    return RC_OK;
}
