#include <stdio.h>

int main(void) {
    float bb, tinggi, bmi;

    printf("Formatnya [BERAT BADAN] [TINGGI]\n");
    scanf("%f %f", &bb, &tinggi);

    bmi = bb / (tinggi * tinggi);

    if (bmi < 18.5) {
        printf("kurus");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Kelebihan berat");
    } else if (bmi >= 30) {
        printf("Obesitas");
    }
}
