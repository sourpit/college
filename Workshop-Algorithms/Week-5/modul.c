#include <stdio.h>

int main(void)
{
    int inputSatu, inputDua, jumlah;

    printf("Masukkan bilangan 1: \n");
    scanf("%d", &inputSatu);

    printf("Masukkan bilangan 2: \n");
    scanf("%d", &inputDua);

    jumlah = inputSatu + inputDua;

    if ( jumlah % 2 == 0 )
    {
        printf("Penjumlahannya Genap");
    } else {
        printf("Penjumlahannya Ganjil");
    };

    return 0;
}
