using namespace std;

struct date 
{
    int year ;
    int month ;
    int day ;
};

date SetDate(const int d, const int m, const int y);
void PrintDate(date da);
void PrintDate(date *da);
bool isDateValid(date da);

date NextDate(date da);
date PreviousDate(date da);

bool addDays(date *da, int number);
bool subDays(date *da, int number);
int  cmpDate(date first, date second);
int  SubDates(date first, date second);
date InputDate();