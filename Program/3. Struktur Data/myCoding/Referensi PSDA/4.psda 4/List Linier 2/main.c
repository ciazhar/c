#include <stdio.h>
#include <stdlib.h>
#include "List Linear 2.h"
int main()
{
    List L,B,A,C,D;
    CreateList(&L);
    printf("is empty : %d \n",ListEmpty(L));
    printinfo(L);
    int i=1;
    while(i<=10){
        insvfirst(&L,i);
        i++;
    }
    printf("insvfirst 1-10 : \n");
    printinfo(L);
    printf("\nnbelmt L : %d\n",nbelmt(L));
    printf("\ninfo search 4 : %d \n",(Search(L,4)->info));
    printf("\nfsearch 4 : %d \n",FSearch(L,(Search(L,4))));
    printf("\ninfo searchprec 4 : %d \n",(SearchPrec(L,4)->info));
    printf("\ninsvlast 12 : \n");
    insvlast(&L,12);
    printinfo(L);
    infotype a;
    printf("\ndelvlast : \n");
    delvlast(&L,&a);
    printinfo(L);
    printf("a : %d \n",a);

    printf("\ndelvfirst : \n");
    delvfirst(&L,&a);
    printinfo(L);
    printf("a : %d \n",a);
    printf("\ninsertfirst alokasi(a) : \n");
    insertfirst(&L,Alokasi(a));
    printinfo(L);
    printf("\ninsertafter 3 alokasi(a) : \n");
    insertafter(&L,Alokasi(a),Search(L,3));
    printinfo(L);
    printf("\ninsertafter 6 alokasi(a) : \n");
    insertafter(&L,Alokasi(a),Search(L,6));
    printinfo(L);
    printf("\ninsertlast alokasi(a) : \n");
    insertlast(&L,Alokasi(a));
    printinfo(L);
    printf("\ndelfirst P : \n");
    address P;
    delfirst(&L,&P);
    printinfo(L);
    printf("\ninfo P : %d\n",P->info);
    printf("\ndellast P : \n");
    dellast(&L,&P);
    printinfo(L);
    printf("\ninfo P : %d\n",P->info);
    i=0;
    while(i<=10){
        insvfirst(&L,10);
        i++;
    }
    i=0;
    while(i<=10){
        insvlast(&L,10);
        i++;
    }
    printf("\ndelpe ALokasi(a) checking (before) : \n");
    printinfo(L);
    printf("\nafter : \n");
    delpe(&L,a);
    printinfo(L);
    printf("\ndelafter 7 P : \n");
    delafter(&L,&P,(Search(L,7)));
    printinfo(L);
    printf("\ninfo P : %d\n",P->info);
    printf("\ndelp 2 checking (before) : \n");
    printinfo(L);
    printf("\nafter : \n");
    delpe(&L,2);
    printinfo(L);
    printf("\ndelall : \n");
    delall(&L);
    printinfo(L);
    i=1;

    while(i<=10){
        P=Alokasi(i);
        insvlast(&L,i);
        i++;
    }
    printf("insvlast 1~10 : \n");
    printinfo(L);
    printf("L after inverse : \n");
    inverselist(&L);
    printinfo(L);
    printf("finverse L\n");
    printinfo(finverselist(L));
    CreateList(&B);
    copylist(&L,&B);
    printf("Copy L to B\n");
    printinfo(B);
    printf("fcopylist B\n");
    printinfo(fcopylist(B));
    printf("Copyaloklist B to A\n");
    CreateList(&A);
    cpaloklist(B,&A);
    printinfo(A);
    CreateList(&D);
    konkat(L,B,&D);
    printf("Konkat L&B to D \n");
    printinfo(D);
    CreateList(&C);
    konkat1(&D,&B,&C);
    printf("Konkatl D&B to C \n");
    printf("D : ");
    printinfo(D);
    printf("B : ");
    printinfo(B);
    printf("C : \n");
    printinfo(C);
    printf("Pecah C ke D & B : \n");
    pecahlist(&D,&B,C);
    printf("C : \n");
    printinfo(C);
    printf(" \n");
    printf("D : ");
    printinfo(D);
    printf("B : ");
    printinfo(B);
    printf("Max D : %d\nMin D : %d\nadrmax(B)->info : %d\nadrmin(B)->info : %d\naverage : %f\n",Max(D),Min(D),adrmax(B)->info,adrmin(B)->info,average(B));
    return 0;
}
