#include "header.h"

 boolean IsEmpty (Queue Q)
{
    return ((HEAD(Q)==nil) && (HEAD(Q)==nil));
}

boolean IsFull (Queue Q)

{
    return ((HEAD(Q)==1)&&(TAIL(Q)==MaxEl(Q)));

}

int NBElmt(Queue Q)
{
    int hasil;

    if (IsEmpty(Q))
    {
        hasil = 0;
    }else{
    hasil = (TAIL(Q)-HEAD(Q)+1);}
    return hasil;
}
void CreateEmpty (Queue *Q, int Max)
{
    (*Q).T=(infotype*)malloc((Max+1)*sizeof(infotype));
    if ((*Q).T!= 0)
    {
        MaxEl(*Q)=Max;
        HEAD (*Q)=nil;
        TAIL(*Q)=nil;
    }
    else
        MaxEl(*Q)=nil;

}
void DeAlokasi(Queue *Q)
{
        MaxEl(*Q)=nil;
        free((*Q).T);
}
void Add (Queue *Q, infotype X)
{
	if (IsEmpty(*Q)==true)
	{
		HEAD(*Q)=TAIL(*Q)=1;
		infoTAIL(*Q)=X;
	}
	else
	{
		if (IsFull(*Q)==true)
		{
			printf("Queue penuh");
		}
		else
		{
			TAIL(*Q)++;
			infoTAIL(*Q)=X;
		}
	}
}

void Del (Queue *Q, infotype *X)
{
	address i;

	if(IsEmpty(*Q)==true)
	{
		printf("Queue kosong");
	}
	else
	{
		(*X)=HEAD(*Q);
		TAIL(*Q)--;
		if(TAIL(*Q)==0)
		{
			HEAD(*Q)=0;
		}
		else
		{
			for(i=1;i<=TAIL(*Q);i++)
			{
				(*Q).T[i]=(*Q).T[i+1];
			}
		}
	}
}

void CetakQueue(Queue Q){

    int i;

      for(i=1; i<=TAIL(Q); i++){

        printf("| %d",Q.T[i]);
        if(i==TAIL(Q)){
            printf(" |");
        }
      }
}


/*Soal Pemahaman*/

void InputGenap10(Queue *Q){

    int n;
    int i;
    int X;

    printf("Masukan Jumlah Queue yang akan ditambahkan : ");
    scanf("%d",&n);

    CreateEmpty(&(*Q),n);

    for(i=1; i<=n; i++){

       printf("Masukan Nilai ke-%d : ", i);
       scanf("%d",&X);
       if(X%2==0&&X>10){

        Add(&(*Q),X);
       }
    }
}

void TambahHeadTail(Queue Q){
int a;
a=infoHEAD(Q)+infoTAIL(Q);

    if(a%2==0){
        printf("\n\nHasil Pertambahan Head dan Tail : Genap dengan nilai %d",a);
    }else {
        printf("\n\nHasil Pertambahan Head dan Tail : Ganjil dengan nilai %d",a);
}
}

