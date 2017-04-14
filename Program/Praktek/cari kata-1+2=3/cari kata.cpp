#include <stdio.h>

int main()
{
    void terbalik();
    printf("Masukkan sembarang kalimat: ");
    terbalik();
    return 0;
}

void terbalik()
{
    char ch;
    ch = getchar();
    if (ch != 10)
    {
        terbalik();
    }
    putchar(ch);
}
