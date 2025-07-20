#include <stdio.h>

int main(void)
{
    int penjualan, evaluasi, presensi;

    printf("Jumlah penjualan: \n");
    scanf("%d", &penjualan);

    printf("Nilai evaluasi: \n");
    scanf("%d", &evaluasi);

    printf("Presensi: \n");
    scanf("%d", &presensi);

    if ((penjualan >= 100 && penjualan <= 200) && (evaluasi >= 85 && evaluasi <= 90) && presensi <= 60)
    {
        printf("Karyawan berkinerja baik");
    } else if ((penjualan >= 100 && penjualan <= 200) && evaluasi >= 85 && presensi >= 60)
    {
        printf("Presensinya tidak bagus");
    } else if (penjualan >= 200 && evaluasi >= 90 && presensi == 0)
    {
        printf("Sangat baik, Naik gaji");
    };

    return 0;
}
