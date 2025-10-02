#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_GRADES 10

// Funkce pro vytvo�en� histogramu
void print_histogram(int grades[], int n) {
    int freq[6] = {0};  // P�edpokl�d�me zn�mky od 1 do 5 (index 0 je ignorov�n)

    // Spo��t�n� frekvence ka�d� zn�mky
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

    // Inicializace gener�toru n�hodn�ch ��sel
    srand(time(NULL));

    // Generov�n� n�hodn�ch zn�mek (od 1 do 5)
    for (int i = 0; i < NUM_GRADES; i++) {
        grades[i] = rand() % 5 + 1;  // Generuje ��sla od 1 do 5
        sum += grades[i];

        // Hled�n� minim�ln� a maxim�ln� zn�mky
        if (grades[i] < min_grade) min_grade = grades[i];
        if (grades[i] > max_grade) max_grade = grades[i];
    }

    // V�po�et pr�m�rn� zn�mky
    float avg = (float)sum / NUM_GRADES;

    // V�pis v�sledk�
    printf("Pr�m�rn� zn�mka: %.2f\n", avg);
    printf("Nejlep�� zn�mka: %d\n", max_grade);
    printf("Nejhor�� zn�mka: %d\n", min_grade);

    // Vytvo�en� histogramu
    print_histogram(grades, NUM_GRADES);

    return 0;
}

