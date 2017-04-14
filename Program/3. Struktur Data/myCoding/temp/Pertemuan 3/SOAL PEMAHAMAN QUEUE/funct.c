#include "queue.h"

void CreateEmpty (Queue *Q, int Max)
{
    (*Q).T = (int *) malloc((Max+1) * sizeof(int));
        HEAD(*Q) = NIL;
        TAIL(*Q) = NIL;
        MaxEl(*Q) = Max;
}

boolean IsMax (Queue Q)
{
    return ((TAIL(Q)==MaxEl(Q))&&(HEAD(Q)==1));
}

boolean IsEmpty (Queue Q)
{
    return ((TAIL(Q)==NIL)&&(HEAD(Q)==NIL));
}

int NbElmt (Queue Q)
{
    return TAIL(Q);
}

void Add (Queue *Q,int val)
{
    HEAD(*Q)=1;
    TAIL(*Q)++;
    InfoTail(*Q) = val;
}

void Del (Queue *Q, int *val)
{
    int i=1;


    *val = InfoHead(*Q);

    do
    {
        (*Q).T[i] = (*Q).T[i+1];
        i++;
    }while (i!=NbElmt(*Q)+1);


    TAIL(*Q)--;
    if (TAIL(*Q)==NIL)
    {
        HEAD(*Q)=NIL;
    }
}

void Dealokasi (Queue *Q)
{
    MaxEl(*Q) = NIL;
    free((*Q).T);
}

void PrintQUEUE (Queue Q)
{
    int idx = HEAD(Q);

    while(idx!=TAIL(Q))
    {
        printf("[ %d ] - ",Q.T[idx]);
        idx++;

    }

    printf("[ %d ]\n",Q.T[idx]);
}

///////////////////////// SOAL PEMAHAMAN //////////////////////////

boolean Is_Kembar (Queue Q)
{
    // buatlah fungsi yang mengembalikan nilai true atau false.
    // jika nilai dari HEAD dan TAIL apakah sama ??
    return InfoHead(Q)==InfoTail(Q);
}

void Swap_Head_Tail (Queue *Q)
{
     // buatlah prosedur untuk menukar NILAI dari HEAD dan TAIL.
    int a;
    a=InfoHead(*Q);
    InfoHead(*Q)=InfoTail(*Q);
    InfoTail(*Q)=a;
}

void All_Genap (Queue *Q)
{
    // Golden QUESTION , nilai + untuk yang bisa solved soal ini.
    // buatlah sebuah prosudrr untuk membuat semua isi QUEUE menjadi genap
    /*int i;
    for(i=1;i<=MaxEl(*Q);i++)
    {
        if(((*Q).T[i]) % 2 == 0)
        {
            printf("%d\t ",(*Q).T[i]);
        }
    }*/
    int tem, i;

    for(i=1;i<=MaxEl(*Q);i++)
    {
        if(InfoHead(*Q)%2!=0)
        {
            Del(Q,%tem);
        }
        else
        {
            Del(Q,&tem);
            Add(Q,&tem);
        }
    }
}
