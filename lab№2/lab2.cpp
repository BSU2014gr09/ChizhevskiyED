#include "stdafx.h"
#include <conio.h>
#include <time.h>
#include <iostream>
#include "myfunc.h"

using namespace std;

int main()
{   
     setlocale(LC_ALL, "Russian");

     if (printcondition() != 1 )
         return -1;
    lab2();

	return 0;
}

