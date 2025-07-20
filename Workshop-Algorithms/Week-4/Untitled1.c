#include <stdio.h>

int main (void)
{
  int andi = 3;
  ++andi;       // Andi naik 1 tangga - 4
  ++andi;       // Andi naik 1 tangga - 5
  ++andi;       // Andi naik 1 tangga - 6
  ++andi;       // Andi naik 1 tangga - 7
  ++andi;       // Andi naik 1 tangga - 8

  --andi;       // Andi turun 1 tangga - 7
  --andi;       // Andi turun 1 tangga - 6
  --andi;       // Andi turun 1 tangga - 5

  printf("%d", andi);
}
