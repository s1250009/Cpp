#ifndef DATE_H
#define DATE_H

class Date {
public:
  Date() {}
  void set(int m, int d, int y) const;
  void print();
  int get_month();
  int get_day();
  int get_year();
private:
  int month, day, year;
};

#endif
