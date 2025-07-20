#include "stdio.h"

int main() {
  int angka = 0, genap = 0, jumlah = 0, max_genap = -1, ArrayBilGenap[20];

  do {
    printf("Input angka: \n");
    if (scanf("%d", &angka) != 1) {
      printf("Input bukan angka!\n");
      return 0;
    }

    genap += angka;

    ArrayBilGenap[jumlah] = angka;

    if (angka > max_genap) {
      max_genap = angka;
    }

    if (angka % 2 == 0)
      jumlah++;

  } while (angka % 2 == 0);

  if (jumlah > 0) {
    printf("rata-rata Genap: %.2f,\n"
           "maximum genap: %d,\n"
           "banyak bilangan: %d\n",
           (float)genap / jumlah, max_genap, jumlah);
  } else {
    printf("Tidak ada data yg diinputkan\n");
  }
}
