#include <stdio.h>
#include <stdlib.h>

void cetak(int x, int y)
{
  printf("(%d, %d)", x, y);
}

int main()
{
  int a = 5, b = 3;

  cetak(a,b);
  return 0;
}
