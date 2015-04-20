#include "iostream"
#include "date.h"

using namespace std;


int Date::setDay(int d)
{
   day = d;
   return 1;
}

int Date::setYear(int y)    
{
    year = y;
   return 1;    // ок
}

int Date::setMonth(int m)
{
     month = m;
        return 1;
}

int Date::getDay(void)
{
   return day;
}

int Date::getMonth(void)
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

bool Date::valid()
{
   if (year <0) 
      return false;

   if (month >12 || month <1) 
      return false;

   if (day >31 || day <1) 
       return false;

   if ((day ==31 && ( month ==2 || month ==4 || month ==6 || month ==9 || month ==11) ) )
      return false;
   if ( day ==30 && month ==2) 
      return false;

   if ( year <2000)
   {
      if ((day ==29 && month ==2) && !((year - 1900)%4==0)) 
         return false;
   };

   if ( year >2000)
   {
      if ((day ==29 && month ==2) && !((year - 2000)%4==0)) 
          return false;
   };

   return true;
};

Date Date::nextDate(Date d)
{
    Date ndat;

    if (!d.valid())
       return ndat;

    ndat = Date((d.getDay()+1), d.getMonth(), d.getYear()); 
    if (ndat.valid()) 
       return ndat;

    ndat = Date(1,(d.getMonth()+1), d.getYear()); 
    if (ndat.valid()) 
       return ndat;

    ndat = Date(1,1,(d.getYear()+1)); 
    
    return ndat;
}

Date Date::previousDate(Date d)
{
   Date ndat;
   if (!d.valid()) 
      return ndat;

   ndat = Date((d.getDay() - 1), d.getMonth(), d.getYear()); 
   if (ndat.valid()) 
       return ndat;

   ndat = Date(31, (d.getMonth() - 1), d.getYear()); 
   if (ndat.valid()) 
      return ndat;

   ndat = Date(30, (d.getMonth() - 1), d.getYear()); 
   if (ndat.valid()) 
       return ndat;

   ndat = Date(29, (d.getMonth() - 1), d.getYear()); 
   if (ndat.valid()) 
       return ndat;

   ndat = Date(28, (d.getMonth() - 1), d.getYear()); 
   if (ndat.valid()) 
      return ndat;

   ndat = Date(31, 12, (d.getYear() - 1)); 

   return ndat;
};

Date Date::operator ++(int)
{ 
   Date d = *this;
   *this = nextDate(d);
   return d;
}
Date Date::operator ++()
{ 
   *this = nextDate(*this);
   return *this;
}
Date Date::operator --(int)
{ 
   Date d = *this;
  *this = previousDate(*this);
   return d;
}

Date Date::operator --()
{ 
   *this = previousDate(*this);
   return *this;
}

void Date::addDays(int n)
{
    if (n < 0)
        return;

    for (int i=0; i<n; i++)
         (*this)++;

}
  void Date::subDays(int n)
  {
      if (n < 0)
        return;

    for (int i=0; i<n; i++)
         (*this)--;
  }