/**
 * Programm: Es wird ein Datum eingegeben, es soll herausgefunden werden der wievielte Tag des Jahres das Datum ist
 * Autor: Lukas Alte-Bornholt
 * Datum: 18.12.2018
 **/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "timelib.h"
 /*
  * Algorithmus des Programms, Prüfung, ob ein eingegebenes Datum gültig ist
  * Rückgabewert: 0
  */
int main()
{

    input_date();

    printf("%i, %i, %i\n\n", dateinput.day, dateinput.month, dateinput.year);

    if(day_of_the_year(dateinput()) != -1)///Prüfung, ob ein gültiges Datum eingegeben wurde (sobald die Anzahl der Tage 0 sind)
      printf("Tag des Jahres: %i\n", day_of_the_year(dateinput.day, dateinput.month, dateinput.year));
    else
      printf("\nUngueltiges Datum!\n");

    return 0;
}
