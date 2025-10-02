/* ### 3. Hádej číslo
- Vygeneruj náhodnéčíslo 1 až 100.  
- Uživatel hádá číslo.  
- Po každém odhadu vypiš, zda číslo uhodl, nebo jestli hádá příliš nízko/vysoko.  
- Nakonec vypiš, na kolik pokusů uhodl, a nabídni možnost hrát znovu.  

**Ukázka vstupu/výstupu:**
```
Hádej číslo (1-100): 50
Moc nízko!
Hádej číslo (1-100): 75
Moc vysoko!
Hádej číslo (1-100): 62
Uhodl jsi! Počet pokusů: 3
Chceš hrát znovu? (a/n): n */

#include <stdio.h>
#include <stdlib.h>   
#include <time.h>    

int main() {
    int tip = 0, pokus = 1, beh = 1;
    char znovu;

     srand(time(NULL));
    int cislo = rand() % 100;
    printf("%d\n", cislo);

    while (beh){

   

    printf("Hadej cislo od 0 do 100:");
    scanf("%d", &tip);
    if (cislo > tip){
        printf("Zkus vic\n");
        pokus++;
    }
    else if (cislo < tip){
        printf("Zkus min\n");
        pokus++;
    }
    else if (cislo == tip){
        printf("Tipnul jsi spravne, pocet pokusu: %d\n", pokus);
        printf("Chces hrat znovu? (a/n):");
       
        scanf(" %c", &znovu);
       if (znovu == 'a'){
          srand(time(NULL));
          pokus = 1;
    cislo = rand() % 100;
    printf("%d\n", cislo);
       }
       else {
        beh = 0;
       }
    }
    }

    return 0;
}