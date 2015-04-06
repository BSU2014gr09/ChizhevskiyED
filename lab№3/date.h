enum Month {Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

struct Date{

private:
  int    day;
  Month  month;
  int    year;

public:
  Date(int d = 1, Month m = Jan, int y = 2015)
  {
      setDay(d);
      setMonth(m);
      setYear(y);
  }

  int setDay(int d);
  int setMonth(Month m);
  int setYear(int y);

  int   getDay(void);
  Month getMonth(void);
  int   getYear(void);

  void  printDate(void);

};