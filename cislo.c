#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int nejmensi, nejvetsi, rozdil, random;
   srand(time(NULL));
   printf("napis nejmensi cislo:");
   scanf("%d", &nejmensi);
   printf("napis nejvetsi cislo:");
   scanf("%d", &nejvetsi);

rozdil = nejvetsi - nejmensi + 1;
   random = rand() % rozdil + nejmensi;

   printf("Vysledek je: %d", random);
   
    return 0;
}