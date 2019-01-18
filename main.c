/**
 * Programm: Es wird ein Datum eingegeben, es soll herausgefunden werden der wievielte Tag des Jahres das Datum ist
 * Autor: Lukas Alte-Bornholt
 * Datum: 18.12.2018
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "timelib.h"

int getdaysformonth(int month, int year);
int day_of_the_year(int day, int month, int year);
bool is_leapyear(int year);
bool exists_date(int day, int month, int year);

int main()
{
    int day, month, year;

    printf("Tag eingeben: ");
    scanf("%i", &day);
    printf("Monat eingeben: ");
    scanf("%i", &month);
    printf("Jahr eingeben: ");
    scanf("%i", &year);

    if(day_of_the_year(day,month,year) != -1)///Prüfung, ob ein gültiges Datum eingegeben wurde (sobald die Anzahl der Tage 0 sind)
      printf("Tag des Jahres: %i\n", day_of_the_year(day, month, year));
    else
      printf("\nUngueltiges Datum!\n");

    return 0;
}
