#include <stdio.h>

int main()
{
    int a,total;

    printf("masukkan banyak data: ");
    scanf("%d", &a);

    for(int i=1; i <= a; i++) {
        total += i;
        printf("%d+", i);

    }

    printf("\b=%d", total);
}
