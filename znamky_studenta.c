
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   


 srand(time(NULL));
    
  int max = 0;
  int min = 0;
  float prumer = 0;
  int jedna, dva, tri, ctyri, pet;
    int pole[10];
    int hodnoty[5];
    
    for (int i = 0; i < 10; i++) {
        pole[i] = rand() % 5 + 1;  
    }
    for (int i = 0; i < 10; i++) {
        if (pole[i] > max){
            max = pole[i];
        }
        if (pole[i] < min){
            min = pole[i];
        }
        switch (pole[i]) {
        case 1:
            jedna++;
            break;
        case 2:
            dva++;
            break;
        case 3:
            tri++;
            break;
        case 4:
            ctyri++;
            break;
        case 5:
            pet++;
            break;
        default:
            printf("Neplatná hodnota v poli.\n");
            break;

        
    }
    
    prumer += pole[i];
        
       
    }
    prumer / 10;
    printf("Prumer znamek je: %f", prumer);
    printf("Nejhorsi znamka je: %d", max);
    printf("Nejlepsi znamka je: %d", min);
 //printf("Prvek %d: %d\n", i, pole[i]);
    return 0;
}