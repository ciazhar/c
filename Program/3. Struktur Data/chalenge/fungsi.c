#include "header.h"

void CreateEmpty (List *L)
{
    Head(*L)=Nil;
}
address Alokasi(List *L, char Name[])
{
    address P;
    P=malloc(sizeof(TNode));
    if(P!=Nil)
    {
        strcpy(Name(P))=;
    }
}

