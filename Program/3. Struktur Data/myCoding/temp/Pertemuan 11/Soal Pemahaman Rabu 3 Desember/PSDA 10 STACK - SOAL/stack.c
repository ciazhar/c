#include "stack.h"

void CreateEmpty (Stack *S)
{
    TOP(*S) = NIL;
}
void ALOKASI (address *P , char buah[])
{
    *P = (address)malloc(sizeof(ElmtList));

    if (*P!=NIL)
    {
        strcpy(INFO(*P),buah);
        NEXT(*P) = NIL;
    }
}
void DEALOKASI (address P)
{
    free(P);
}

boolean IsEmpty (Stack S)
{
    return (TOP(S)==NIL);
}


void PUSH (Stack *S,char buah[])
{
    address newP;

    ALOKASI(&newP,buah);

    if (newP!=NIL)
    {
        NEXT(newP) = TOP(*S);
        TOP(*S) = newP;
    }

}
void POP (Stack *S,char buah[])
{
    address P;

    P = TOP(*S);

    if (IsEmpty(*S))
    {
        puts("Stack kosong tuh ...!");
    }
    else
    {
        strcpy(buah,INFO(P));
        TOP(*S) = NEXT(TOP(*S));
        NEXT(P) = NIL;

        DEALOKASI(P);
    }

}

void ShowFruits (Stack S)
{
    address P;

    P = TOP(S);

    if (IsEmpty(S))
    {
        puts("Isi Keranjang sudah kosong . . .");
    }
    else
    {
        puts("\t\t|*********|");
        while (P!=NIL)
        {
            printf("\t\t|  %s  |\n",INFO(P));

            P = NEXT(P);
        }
        puts("\t\t|*********|");
    }
}

void ShowKeranjang (Stack M,Stack N,Stack J,Stack S)
{
    address Melon;
    address Nanas;
    address Jeruk;
    address Salak;

    Melon = TOP(M);
    Nanas = TOP(N);
    Jeruk = TOP(J);
    Salak = TOP(S);

    puts("\n\n|*********|\t\t|*********|\t\t|*********|\t   |*********|");
    while (Melon!=NIL || Nanas!=NIL || Jeruk!=NIL || Salak!=NIL)
    {
        printf("|  %s  |\t\t|  %s  |\t\t|  %s  |\t   |  %s  |\n",INFO(Melon),INFO(Nanas),INFO(Jeruk),INFO(Salak));
        if (Melon!=NIL)
        {
            Melon = NEXT(Melon);
        }

        if (Nanas!=NIL)
        {
            Nanas = NEXT(Nanas);
        }

        if (Jeruk!=NIL)
        {
            Jeruk = NEXT(Jeruk);
        }

        if (Salak!=NIL)
        {
            Salak = NEXT(Salak);
        }
    }
    puts("|*********|\t\t|*********|\t\t|*********|\t   |*********|");
    puts("-Box Melon-\t\t-Box Nanas-\t\t-Box Jeruk-\t   -Box Salak-");
}
