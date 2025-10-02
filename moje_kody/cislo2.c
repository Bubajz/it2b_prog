#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    srand(time(NULL));
 float nahoda = (float) rand() / RAND_MAX;

   printf("Vysledek je: %f", nahoda);
   
    return 0;
}