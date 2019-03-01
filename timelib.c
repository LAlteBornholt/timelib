/**
 * Programm: Es wird ein Datum eingegeben, es soll herausgefunden werden der wievielte Tag des Jahres das Datum ist
 * Autor: Lukas Alte-Bornholt
 * Datum: 18.12.2018
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "timelib.h"

struct date dateinput {
    int day;
    int month;
    int year;
};

int input_date()
{   ///Es wird das Datum zur Berechnung des Tages im jahr eingegeben und an die main() Funktion zurückgeben
    printf("Tag eingeben: ");
    scanf("%i", dateinput.day);
    printf("Monat eingeben: ");
    scanf("%i", dateinput.month);
    printf("Jahr eingeben: ");
    scanf("%i", dateinput.year);
}

/*
 * Es wird herausgefunden, den wievielten Tag in dem eingegeben Jahr das Datum hat
 * Rückgabewert: Tag des Jahres
 */
int day_of_the_year(struct date dateinput())
{
    int sum = 0;

    if(!exists_date(dateinput.day, dateinput.month, dateinput.year))
    {
        return 0;
    }
    ///summiert Tage pro Monat auf (bis zum eingegebenen Monat)
    for(int i = 1; i < month; i++)
    {
        sum += getdaysformonth(i, dateinput.year);
        }
    sum+= dateinput.day;

    return sum;///Zurückgeben des Ergebnisses;
}

 /*
  * Es werden die Anzahl der Tage zurückgegeben, die der jeweilige Monat hat
  * Rückgabewert: Tage im Monat pro Monat
  */
int getdaysformonth(struct date dateinput())
{
    int daysofmonth[13];///Definition der Tage im Monat

    daysofmonth[1] = 31;
    daysofmonth[2] = 28;
    daysofmonth[3] = 31;
    daysofmonth[4] = 30;
    daysofmonth[5] = 31;
    daysofmonth[6] = 30;
    daysofmonth[7] = 31;
    daysofmonth[8] = 31;
    daysofmonth[9] = 30;
    daysofmonth[10] = 31;
    daysofmonth[11] = 30;
    daysofmonth[12] = 31;

    if(is_leapyear(dateinput.year) && dateinput.month == 2)
        daysofmonth[2]++;

    return daysofmonth[dateinput.month];
}

 /*
  * Es wird überprüft, ob das eingegebene Datum existiert
  * Rückgabewert: 1 = Wahr, 0 = Falsch
  */
bool exists_date(struct date dateinput())
{   ///
    if(dateinput.day <= 31 && dateinput.day >= 1)
    {
        if(dateinput.month <= 12 && dateinput.month >= 1)
        {
            if(dateinput.year >= 1582 && dateinput.year <= 2400)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

 /*
  * Es wird geprüft, ob es sich bei dem eingegebenen Datum um ein Schaltjahr handelt
  * Rückgabewert: Wahr, wenn es ein Schaltjahr ist, Falsch, wenn nicht
  */
bool is_leapyear(int year)
{
    if(year < 1582 || year > 2400)
    {
        return -1;
    }
    if(year%4 == 0)
    {
        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
           return true;
        }
    }
    else
    {
        return false;
    }
}
