#include <stdio.h>

int main() {
  char initials[8][24] = {
      "   A        GGGGG    ",  // Baris 1
      "  A A       G         ", // Baris 2
      " A   A      G         ", // Baris 3
      " AAAAA      G  GG     ", // Baris 4
      " A   A      G   G     ", // Baris 5
      " A   A      G    G    ", // Baris 6
      " A   A      GGGGG     ", // Baris 7
      "                    "    // Baris 8 (kosong)
  };

  for (int i = 0; i < 8; i++) {
    printf("%s\n", initials[i]);
  }
  return 0;
}
