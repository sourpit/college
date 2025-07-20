#include <stdio.h>

int main(void) {
    float bmi;

    scanf("%f", &bmi);

    if (bmi < 18.5) {
        printf("kurus");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Normal");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Kelebihan berat");
    } else if (bmi >= 30) {
        printf("Obesitas");
    }

    return 0;
}
