#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

int getdaysformonth(int month, int year);

int day_of_the_year(int day, int month, int year);

bool exists_date(int day, int month, int year);

bool is_leapyear(int year);

int input date(int *day, int *month, int *year);

#endif // TIMELIB_H_INCLUDED
