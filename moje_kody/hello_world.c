
#include <stdio.h>

int main() {
    int cislo;
    int pocetDelitelu = 0;

    printf("Zadej cele kladne cislo: ");
    scanf("%d", &cislo);

    if (cislo <= 0) {
        printf("Zadej prosim kladne cislo.\n");
        return 1;
    }

    printf("Delitele cisla %d jsou:\n", cislo);
    for (int i = 1; i <= cislo; i++) {
        if (cislo % i == 0) {
            printf("%d\n", i);
            pocetDelitelu++;
        }
    }

    printf("Pocet delitelu: %d\n", pocetDelitelu);
    return 0;
}