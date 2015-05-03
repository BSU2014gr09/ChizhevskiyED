#include "mydate.h"
#include <iostream>
using namespace std;

date SetDate(const int d, const int m, const int y) 
{
  date iDate;

  iDate.day = d;
  iDate.month = m;
  iDate.year = y;

  return iDate;
};


void PrintDate(date da)
{
    cout << da.day <<"."<< da.month <<"."<< da.year << endl; 
    return;
}


void PrintDate(date *da)
{
    cout << da->day <<"."<< da->month <<"."<< da->year << endl; 
    return;
}

/*                                                          
   returns:                                                            
      true - дата корректная                                     
      false - дата не корректная           */

bool isDateValid(date da)
{
   if (da.year <0) 
      return false;

   if (da.month >12 || da.month <1) 
      return false;

   if (da.day >31 || da.day <1) 
       return false;

   if ((da.day == 31 && ( da.month == 2 || da.month ==4 || da.month ==6 || da.month ==9 || da.month ==11) ) )
      return false;

   if ( da.day ==30 && da.month ==2) 
      return false;

   if ( da.year <2000)
   {
      if ((da.day ==29 && da.month ==2) && !((da.year - 1900)%4==0)) 
         return false;
   }

   if ( da.year >2000)
   {
      if ((da.day ==29 && da.month ==2) && !((da.year - 2000)%4==0)) 
          return false;
   }

   return true;
};

/*                                                      
  returns:                                                            
       true - добавили                                               
       false - ошибка добавления, потому что дата не валидна   */

bool addDays(date *da, int number)
{
    if (number < 0)
        return false;

    if (!isDateValid(*da))
       return false;

    for(int i = 0; i < number; i++)
      *da = NextDate(*da);
    
    return true;
}

/*                                                 
  returns:                                                            
       true - вычли                                               
       false - ошибка вычисления, потому что дата не валидна   */

bool subDays(date *da, int number)
{
    if (number < 0)
        return false;

    if (!isDateValid(*da))
       return false;

    for(int i = 0; i < number; i++)
      *da = PreviousDate(*da);
    
    if (!isDateValid(*da))
       return false;    

    return true;
}


/*                                                                                                             
  returns:                                                            
  предыдущую дату, если она корректна    */

date NextDate(date da)
{
    date nDate;
    
    if (!isDateValid(da))
        return da;
    
    nDate = SetDate(da.day + 1, da.month, da.year);
    if (isDateValid(nDate))
        return nDate;

    nDate = SetDate(1, da.month + 1, da.year);
    if (isDateValid(nDate))
        return nDate;

    nDate = SetDate(1, 1, da.year + 1);

    return nDate;
}

/*                                                                                                
  returns:                                                            
      предыдущую дату, если она корректна       */                

date PreviousDate(date da)
{
    date nDate;
    
    if (!isDateValid(da))
        return da;

    nDate = SetDate(da.day - 1, da.month, da.year);
    if (isDateValid(nDate))
        return nDate;

    nDate = SetDate(31, da.month - 1, da.year);
    if (isDateValid(nDate))
        return nDate;

    nDate = SetDate(30, da.month - 1, da.year);
    if (isDateValid(nDate))
        return nDate;

    nDate = SetDate(29, da.month - 1, da.year);
    if (isDateValid(nDate))
        return nDate;

    nDate = SetDate(28, da.month - 1, da.year);
    if (isDateValid(nDate))
        return nDate;

   nDate = SetDate(31, 12, da.year - 1);

   return nDate;
}   
  
/*                                          
  returns:                                                            
       -2 - дата не валидная                                
       -1 - first < second                                            
        0 - first = second                                            
        1 - first > second         */                                   

int cmpDate(date first, date second)
{

    if (!isDateValid(first) || !isDateValid(second))
       return -2;
    
    if (first.year < second.year)
        return -1;

    if (first.year > second.year)
        return 1;

    // first.year == second.year

    if (first.month < second.month)
        return -1;

    if (first.month > second.month)
        return 1;
    
    // first.year == second.year and first.month == second.month

    if (first.day < second.day)
        return -1;

    if (first.day > second.day)
        return 1;

    return 0;
}

int  SubDates(date first, date second)
{
    int difference=0;

    if (!isDateValid(first) || !isDateValid(second))
       return false;

    date tmp=second;
    date tmp2=first;

    if (cmpDate(first, second) == -1 )
      { 
          tmp=first;
          tmp2=second;
      }


    for( ; cmpDate(tmp, tmp2) == -1; tmp = NextDate(tmp))
      difference++;   

    return difference;
}

date InputDate()
{
    date da;

    cout << "---------------------" << endl;

    do
    {
     cout << " Enter day: ";
     cin >> da.day;
     cout << " Enter month: ";
     cin >> da.month;
     cout << " Enter year: ";
     cin >> da.year;
    }
     while (!isDateValid(da));
     cout << endl;
     cout << " " ;
     
     cout << "Date: "; PrintDate(da);

    return da;
}