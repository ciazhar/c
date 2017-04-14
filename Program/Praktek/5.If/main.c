#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;
    char nilaihuruf;

    printf("input nilai : ");
    scanf("%d", &nilai);

    if (nilai>85&&nilai<=100) {
        nilaihuruf = 'A';
    }
    else if (nilai>=70&&nilai<85) {
        nilaihuruf = 'B';
    }
    else print("salah jon")
    }
