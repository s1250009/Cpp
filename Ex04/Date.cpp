#include <iostream>
#include "Date.h"

int ma;
int da;
int ya;


void Date::set(int m, int d, int y){
  month = m;
  day = d;
  year = y;
}

void Date::print() {
  std::cout << year << "year " << month << "month " << day << "days" << std::endl;
}

inline int Date::get_month() {
  return month;
}

inline int Date::get_year() {
  return year;
}

inline int Date::get_day() {
  return day;
}
