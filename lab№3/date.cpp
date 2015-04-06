#include "iostream"
#include "date.h"
using namespace std;


int Date::setDay(int d)
{
    int returncode = 1;
     switch (month)
     {
       case Jan:
       case Jul: 
       case Mar:
       case Aug:
       case Oct:
       case Dec:
       case May:
            if (d < 1 || d > 31)
              { day = 1;
               returncode = 0;
            }
            else
               day = d;
           break;

       case Feb:
           if (d < 1)
             {
                 day = 1;
                 returncode = 0;
                 break;
             }
            
           if (year % 4 == 0 && year % 100 != 0)
           {
              if (d > 29)
                  {
                      returncode = 0;
                      day = 1;
                  }
           }
           else
           {
              if (d > 28)
              {
                 returncode = 0;
                      day = 1;
              }
           }
           break;

       case Jun:
       case Sep:
       case Nov:
       case Apr:
            if (d < 1 || d > 30)
              { day = 1;
            returncode = 0;
            }
            else
               day = d;
           break;

       default:
           day =1;
           returncode = 0;
           break;
     }

     return returncode;
}

int Date::setYear(int y)    
{
    year = y;
    if (y < 0)
      { 
          year = 2000;
          return 0;
      }
   return 1;
}

int Date::setMonth(Month m)
{
     month = m;
     if (month < 1 || month > 12 )
         {
             month = Jan;
             return 1;
         }
 
        return 0;
}

int Date::getDay(void)
{
   return day;
}

Month Date::getMonth(void)
{

   return month;
}

int Date::getYear(void)
{
    return year;
}

void Date::printDate(void)
{
    cout << day << "." << month << "." << year <<  endl;
}