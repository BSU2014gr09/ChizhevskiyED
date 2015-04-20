struct Date{

private:
  int    day;
  int  month;
  int    year;

public:
  Date(int d = 1, int m = 1, int y = 2015)
  {
      setMonth(m);
      setDay(d);
      setYear(y);
  }

  int setDay(int d);
  int setMonth(int m);
  int setYear(int y);

  int   getDay(void);
  int getMonth(void);
  int   getYear(void);

  void  printDate(void);
  Date nextDate(Date d);
  Date previousDate(Date d);
  bool Date::valid();
  Date operator ++(); 
  Date operator ++(int); 
  Date operator --(); 
  Date operator --(int); 
  void addDays(int);
  void subDays(int);
  int  cmpDate(Date);

};