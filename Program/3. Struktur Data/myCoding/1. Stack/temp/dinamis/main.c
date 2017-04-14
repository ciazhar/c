#include "stack.h"

int main()
{
    Stack S;
    int pop;
    int psh;
    int siz;

    puts("\t-- PROGRAM STACK DENGAN ALOKASI MEMORI DINAMIK--");
    puts("\t-----------------------------------------------------------\n\n");


    printf("Masukan Ukuran Stack = ");scanf("%d",&siz);
    createempty(&S,siz);
    printf("I.S , Apakah Stack kosong? = %d\n\n",isempty(S));

    while (isfull(S)!=true)
    {
        printf("Masukan datanya = ");scanf("%d",&psh);
        push(&S,psh);
    }

    puts("\nStack sudah terisi penuh");
    puts("==========================\n");

    psh = 1;

    while (isempty(S)==false)
    {
        poop(&S,&pop);
        printf("> Nilai dari pop ke-%d = %d\n",psh,pop);
        psh++;
    }

    printf("\nApakah Stack kosong? (%s)\n",isempty(S)?"True":"False");

    Dealokasi(&S);

    puts("Stack telah di Dealokasi\n");
    puts("Create By : A11.2014.08196");
    return 0;
}
