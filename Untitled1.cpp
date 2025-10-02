#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_GRADES 10

// Funkce pro vytvoøení histogramu
void print_histogram(int grades[], int n) {
    int freq[6] = {0};  // Pøedpokládáme známky od 1 do 5 (index 0 je ignorován)

    // Spoèítání frekvence každé známky
    for (int i = 0; i < n; i++) {
        if (grades[i] >= 1 && grades[i] <= 5) {
            freq[grades[i]]++;
        }
    }

    printf("\nHistogram:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d: ", i);
        for (int j = 0; j < freq[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int grades[NUM_GRADES];
    int sum = 0, min_grade = 6, max_grade = 0;

    // Inicializace generátoru náhodných èísel
    srand(time(NULL));

    // Generování náhodných známek (od 1 do 5)
    for (int i = 0; i < NUM_GRADES; i++) {
        grades[i] = rand() % 5 + 1;  // Generuje èísla od 1 do 5
        sum += grades[i];

        // Hledání minimální a maximální známky
        if (grades[i] < min_grade) min_grade = grades[i];
        if (grades[i] > max_grade) max_grade = grades[i];
    }

    // Výpoèet prùmìrné známky
    float avg = (float)sum / NUM_GRADES;

    // Výpis výsledkù
    printf("Prùmìrná známka: %.2f\n", avg);
    printf("Nejlepší známka: %d\n", max_grade);
    printf("Nejhorší známka: %d\n", min_grade);

    // Vytvoøení histogramu
    print_histogram(grades, NUM_GRADES);

    return 0;
}

