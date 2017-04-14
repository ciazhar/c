#include <stdio.h>
int main() {
        int x;
        for(x=2; x<=100; x=x+2)
        {
  	  if (x == 5) continue;
   	  printf("Nilai Genap Adalah = %d \n", x);

        }
        return 0;
}
