#include <stdio.h>

int main(void) {
    int suhu;

    scanf("%d", &suhu);

    if (suhu < 0) {
        printf("Beku");
    } else if (suhu >= 0 && suhu <= 20) {
        printf("Dingin");
    } else {printf("Hangat");}

    return 0;
}
