#include "header.h"

void CreateEmpty(Stack *S)
{
     (*S).TOP = 0 ;     // Stack ke-0 diisi 0
}


int isEmpty(Stack S)
{
        return S.TOP == 0 ;   /// jika cek nilai kebenaran hasilnya akan return 1
}

/** sistem boolean
boolean isEmpty(Stack S)
{
    S.TOP == Nil;
}
**/

int isFull (Stack S)
{
    return S.TOP == 10 ;
}


void Push (Stack *S, int X)
{
    if (!isFull(*S)){            /// if (isFull(*S) == 0 )
    (*S).TOP ++ ;               /// Index paling atas di tambah 1
    (*S).T[ (*S).TOP ] = X ;
    }

}
void POP (Stack *S, int *X)
{
    if (!isEmpty(*S) ) {
    *X = (*S).T[ (*S).TOP ] ;
    (*S).TOP--;
    }
}


void PrintStack(Stack S)
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

void PrintALLStack (Stack S)
{
    int c ;
    for (c = 10 ; c > 0 ; c-- )
    {
        if (c <= S.TOP)
        {
            printf("|  %d  |\n", S.T[c]);
        }
        else {
            printf("|    |\n");
        }
    }
}
