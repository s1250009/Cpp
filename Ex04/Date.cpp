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

int Date::get_month() {
  return month;
}

int Date::get_year() {
  return year;
}

int Date::get_day() {
  return day;
}
