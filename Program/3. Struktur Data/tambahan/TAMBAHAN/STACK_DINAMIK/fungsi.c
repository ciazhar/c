#include "header.h"

void CreateEmpty ( Stak *L , int Uk )
{
    (*L).T = (infotype *) malloc( (Uk+1) * sizeof(infotype) );
    //(*L).T = (int *) malloc( (uk+1) * sizeof(int) ); >> (int *) khusus untuk compiler C++ sebagai Casting tipedata
    //(*L).T = malloc( (uk+1) * sizeof(int) ); >> tanpa (int *) khusus untuk compiler C GCC

    (*L).TOP = 0 ;
    (*L).Ukuran = Uk ;
}

void Destruct ( Stak *L)
{
    free((*L).T);       // dealokasi tabel . hapus tabel
    (*L).TOP = 0 ;
    (*L).Ukuran =0 ;
}

boolean IsEmpty ( Stak L)
{
    if ( L . TOP == 0 ){
        return 1;
    } else {
        return 0;
    }
    // return L.TOP == 0 ; >> memberi nilai 1 jika L.TOP = 0
}

boolean IsFull ( Stak L )
{
    if ( L.TOP == L.Ukuran )
    {
        return 1;
    } else
    {
        return 0;
    }
    // return L.TOP == L.Ukuran ; >> memberi nilai 1 jika L.TOP =  L.Ukuran
}

void Push ( Stak *L, infotype X)
{
    if (!IsFull(*L)){            /// if (isFull(*S) == 0 )
    (*L).TOP ++ ;               /// Index paling atas di tambah 1
    (*L).T[ (*L).TOP ] = X ;
    } else {
        printf("Stack PENUH !!!!!!\n");
    }
}
void POP ( Stak *L, infotype *X)
{
    if (!IsEmpty(*L) ) {
    *X = (*L).T[ (*L).TOP ] ;
    (*L).TOP--;
    } else {
        printf("Stack KOSONG !!!!!!\n");
    }
}

void PrintALLStack (Stak L)
{
    int c ;
    for (c = L.Ukuran ; c > 0 ; c-- )
    {
        if (c <= L.TOP)
        {
            printf("|  %d  |\n", L.T[c]);
        }
        else {
            printf("|    |\n");
        }
    }
}

void PrintStack(Stak S)
{
    while (S.TOP != 0 )
    {
        printf("|addr:   %d   | stack:   %d   |\n", S.TOP,S.T[S.TOP]);
        S.TOP--;
    }

    /** Bentuk Lain
    int i ;
    for ( i = S.TOP ; i > 0 ; i-- )
    {
        printf("|addr:   %d   | stack:   %d   |\n", S.TOP,S.T[S.TOP]);
    }
    **/
}
