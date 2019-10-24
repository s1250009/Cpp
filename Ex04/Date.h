#ifndef DATE_H
#define DATE_H

class Date {
public:
  Date() {}
  void set(const int m,const int d,const int y);
  void print();
  int get_month();
  int get_day();
  int get_year();
private:
  int month, day, year;
};

#endif
