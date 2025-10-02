
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//kostka s hodnotami 12 až 16
int main() {
   srand(time(NULL));
   int kostka = rand() % 5 + 12; // 0 až 4 + 12
   printf(kostka);
    return 0;
}