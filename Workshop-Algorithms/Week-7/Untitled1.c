#include <stdio.h>

int main()
{
    int x,y;

    printf("Masukkan nilai x: ");
    scanf("%d", &x);

    printf("Masukkan nilai y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("Kuadran 1");
    } else if (x < 0 && y > 0) {
        printf("Kuadran 2");
    } else if (x < 0 && y < 0) {
        printf("Kuadran 3");
    } else if (x > 0 && y < 0) {
        printf("kuadran 4");
    } else {
        printf("Diantara");
        };

    return 0;
}
