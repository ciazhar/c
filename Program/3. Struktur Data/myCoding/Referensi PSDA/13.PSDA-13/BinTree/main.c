#include "bintree.h"

int main()
{
    BinTree P = Nil;
    BinTree L = Nil;
    BinTree R = Nil;
    int X;

    printf("IsTreeEmpty(P)?%s\n", IsTreeEmpty(P)?"ya":"tidak");
    MakeTree(27,Nil,Nil,&P);
    MakeTree(1,L,P,&P);
    MakeTree(10,L,P,&P);
    PrintInorder(P);
    PrintPreorder(P);
    PrintPostorder(P);
    PrintTree(P,1);
    printf("Akar pohon biner P: %d\n", GetAkar(P));
    printf("P merupakan pohon biner? %d\n", IsBiner(P));
    printf("P condong ke kiri? %d\n", IsSkewLeft(P));
    printf("P condong ke kanan? %d\n", IsSkewRight(P));
    printf("P satu elemen? %d\n", IsOneElmt(P));
    printf("P hanya punyai subpohon kiri? %d\n", IsUnerLeft(P));
    printf("P hanya punyai subpohon kanan? %d\n", IsUnerRight(P));

    printf("\nPohon Inorder: ");PrintInorder(P);
    printf("\nPohon Preorder: ");PrintPreorder(P);

    printf("\n\nJumlah elemen %d\n", NbElmt(P));
    printf("Jumlah daun : %d\n", NbDaun(P));
    AddDaunTerkiri(&P,4);
    //AddDaun(&P,7,4,true);
    //AddDaun(&P,8,1,true);

    printf("\nPohon Inorder: ");PrintInorder(P);
    printf("\nPohon Preorder: ");PrintPreorder(P);
    DelDaunTerkiri(&P,&X);
    printf("\nPohon Preorder: ");PrintPreorder(P);
    printf("\nPrintTree:");
    printf("\n");
    PrintTree(P,2);
    printf("\n");

    return 0;
}
