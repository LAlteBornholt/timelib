#ifndef TIMELIB_H_INCLUDED
#define TIMELIB_H_INCLUDED

int getdaysformonth(struct date dateinput);

int day_of_the_year(struct date dateinput);

bool exists_date(struct date dateinput);

bool is_leapyear(int year);

int input_date(struct date dateinput);

#endif // TIMELIB_H_INCLUDED
