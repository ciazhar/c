#include "header.h"

int main()
{
    BinTree A = Nil;
    BinTree B = Nil;
    BinTree C = Nil;
    int X;

    printf("IsTreeEmpty(A)? %s\n", IsTreeEmpty(A)?"ya":"tidak");
    MakeTree(1,B,A,&A);
    MakeTree(10,B,A,&A);
    MakeTree(27,B,A,&A);
    printf("PrintInorder(A):\t");PrintInorder(A);
    printf("\nPrintPreorder(A):\t");PrintPreorder(A);
    printf("\nPrintPostorder(A):\t");PrintPostorder(A);
    printf("\nPrintTree(A,1):\t\n");PrintTree(A,1);
    printf("\n\n");

    printf("GetAkar(A): %d\n", GetAkar(A));
    printf("GetLeft(A): %d\n", GetLeft(A));
    printf("GetRight(A): %d\n", GetRight(A));
    printf("\n");

    ///Tree
    ///BuildTree

    printf("IsOneElmt(A)? %s\n", IsOneElmt(A)?"ya":"tidak");
    printf("IsUnerLeft(A)? %s\n", IsUnerLeft(A)?"ya":"tidak");
    printf("IsUnerRight(A)? %s\n", IsUnerRight(A)?"ya":"tidak");
    printf("IsBiner(A)? %s\n", IsBiner(A)?"ya":"tidak");

    printf("\nNbElmt(A):%d\n",NbElmt(A));
    printf("NbDaun(A): %d\n", NbDaun(A));
    printf("IsSkewLeft(A)? %s\n", IsSkewLeft(A)?"ya":"tidak");
    printf("IsSkewRight(A)? %s\n", IsSkewRight(A)?"ya":"tidak");
    ///Level


    printf("\nAddDaunTerkiri(&A,4)\n");AddDaunTerkiri(&A,4);
    PrintInorder(A);
    printf("\nAddDaun(&A,4,5,true)\n");AddDaun(&A,4,5,true);
    PrintInorder(A);
    printf("\nDelDaunTerkiri(&A,&X)\n");DelDaunTerkiri(&A,&X);;
    PrintInorder(A);
    printf("\nDelDaun(&A,&X)\n");DelDaun(&A,&X);
    PrintInorder(A);

    ///kebawah

}
