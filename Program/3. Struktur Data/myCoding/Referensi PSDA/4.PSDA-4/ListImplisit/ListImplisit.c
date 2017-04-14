#include "ListImplisit.h"

boolean ListEmpty (List L)
{
    return(First(L)==Nil);
}
void CreateList (List * L)
{
    First(*L)=Nil;
}
address Alokasi (infotype X)
{
    address Y;
    Y=(ElmtList*)malloc(sizeof(ElmtList));
    if(Y!=Nil)
    {
        info(Y)=X;
        next(Y)=Nil;
        return Y;
    }
    else
        return Nil;
}
void Dealokasi (address P)
{
    free(P);
}
address Search (List L, infotype X)
{
    address P;
    P=First(L);
    while(P!=Nil)
    {
        if(X==info(P))
        {
            return P;
        }
        else
            P=next(P);
    }
    return Nil;
}
boolean FSearch (List L, address P)
{
    address Pt;
    Pt=First(L);
    while(Pt!=Nil)
    {
        if(Pt==P)
        {
            return true;
        }
        else
            Pt=next(Pt);
    }
    return false;
}
address SearchPrec (List L, infotype X)
{
    address P,Prec;
    P=First(L);
    Prec=Nil;
    while(P!=Nil)
    {
        if(X==info(P))
        {
            return Prec;
        }
        else
        {
            Prec=P;
            P=next(P);
        }
    }
    Prec=Nil;
    return Nil;
}
void InsVFirst (List * L, infotype X)
{
    address P;
    P=Alokasi(X);
    if(P!=Nil)
    {
        next(P)=First(*L);
        First(*L)=P;
    }
}
void InsVLast (List * L, infotype X)
{
    address Last,P;
    P=Alokasi(X);
    if(First(*L)==Nil)
        InsVFirst(L,X);
    else
    {
        Last=First(*L);
        while(next(Last)!=Nil)
        {
            Last=next(Last);
        }
        next(Last)=P;
    }
}
void DelVFirst(List * L, infotype x)
{
    address P;
    P=First(*L);
    (x)=info(P);
    First(*L)=next(P);
    Dealokasi(P);
}
void DelVLast (List * L, infotype * X)
{
    address P,Prec;
    if(First(*L)==Nil)
        (*X)=0;
    else
    {
        Prec=Nil;
        P=First(*L);
        while(next(P)!=Nil)
        {
            Prec=P;
            P=next(P);
        }
        (*X)=info(P);
        next(Prec)=Nil;
        Dealokasi(P);
    }
}
void InsertFirst (List * L, address P)
{
    next(P)=First(*L);
    First(*L)=P;
}
/* I.S. Sembarang, P sudah dialokasi */
/* F.S. Menambahkan elemen ber-address P sebagai elemen pertama */
void InsertAfter (List * L, address P, address Prec)
{
    if(FSearch((*L),Prec))
    {
        next(P)=next(Prec);
        next(Prec)=P;
    }
}
/* I.S. Prec pastilah elemen list dan bukan elemen terakhir, */
/* P sudah dialokasi */
/* F.S. Insert P sebagai elemen sesudah elemen beralamat Prec */
void InsertLast (List * L, address P)
{
    address Last;
    if(First(*L)==Nil)
        InsertFirst(L,P);
    else
    {
        Last=First(*L);
        while(next(Last)!=Nil)
        {
            Last=next(Last);
        }
        InsertAfter(L,P,Last);
    }
}
/* I.S. Sembarang, P sudah dialokasi */
/* F.S. P ditambahkan sebagai elemen terakhir yang baru */
/*** PENGHAPUSAN SEBUAH ELEMEN ***/
void DelFirst (List * L, address *P)
{
    *P=First(*L);
    First(*L)=next(First(*L));
}
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen pertama list sebelum penghapusan */
/* Elemen list berkurang satu (mungkin menjadi kosong) */
/* First element yg baru adalah suksesor elemen pertama yang lama */
void DelP (List * L, infotype X)
{
    address P,Prec=Nil;
    if(info(First(*L))==X)
        DelFirst(L,&Prec);
    else
    {
        Prec=First(*L);
        while(info(next(Prec))!=X)
            Prec=next(Prec);
        P=next(Prec);
        next(Prec)=next(next(Prec));
        next(P)=Nil;
    }
}
/* I.S. Sembarang */
/* F.S. Jika ada elemen list beraddress P, dengan info(P)=X */
/* Maka P dihapus dari list dan di-dealokasi */
/* Jika tidak ada elemen list dengan info(P)=X, maka list tetap */
/* List mungkin menjadi kosong karena penghapusan */
void DelLast (List * L, address *P)
{
    address Last,PrecLast;
    Last=First(*L);
    PrecLast=Nil;
    while(next(Last)!=Nil)
    {
        PrecLast=Last;
        Last=next(Last);
    }
    *P=Last;
    if(PrecLast==Nil)
        First(*L)=Nil;
    else
        next(PrecLast)=Nil;
}
/* I.S. List tidak kosong */
/* F.S. P adalah alamat elemen terakhir list sebelum penghapusan */
/* Elemen list berkurang satu (mungkin menjadi kosong) */
/* Last element baru adalah predesesor elemen pertama yg lama, */
/* jika ada */
void DelAfter (List * L, address *Pdel, address Prec)
{
    *Pdel=next(Prec);
    next(Prec)=next(next(Prec));
    next(*Pdel)=Nil;
}
/* I.S. List tidak kosong. Prec adalah anggota list */
/* F.S. Menghapus Next(Prec): */
/* Pdel adalah alamat elemen list yang dihapus */
/****************** PROSES SEMUA ELEMEN LIST ******************/
void Printinfo (List L)
{
    int i;
    address P=First(L);
    printf("Data List:\n");
    if(P==Nil)
        printf("list kosong\n");
    else
    {
        i=1;
        do
        {
            printf("%d. %d\n",i,info(P));
            i++;
            P=next(P);
        }while(P!=Nil);
        printf("\n");
    }
}
/* I.S. List mungkin kosong */
/* F.S. Jika list tidak kosong, */
/* Semua info yg disimpan pada elemen list diprint */
/* Jika list kosong, hanya menuliskan "list kosong" */
int NbElmt(List L)
{
    int i=0;
    address P=First(L);
    if(P!=Nil)
    {
        do
        {
            i++;
            P=next(P);
        }while(P!=Nil);
    }
    return i;
}
/* Mengirimkan banyaknya elemen list; mengirimkan 0 jika list kosong */
/*** Prekondisi untuk Max/Min/rata-rata : List tidak kosong ***/
infotype Max (List L)
{
    infotype maks;
    address P;
    P=First(L);
    if(P==Nil)
        return 0;
    else
    {
        maks=info(P);

        while(next(P)!=Nil)
        {
            P=next(P);
            if(info(P)>maks)
                maks=info(P);
        }
        return maks;
    }
}
/* Mengirimkan nilai info(P) yang maksimum */
address AdrMax (List L)
{
    address P,maks;
    maks=First(L);
    if(maks!=Nil);
    {
        P=next(maks);
        while(P!=Nil)
        {
            if(info(P)>info(maks))
                maks=P;
            P=next(P);
        }
    }
    return maks;
}
/* Mengirimkan address P, dengan info(P) yang bernilai maksimum */
infotype Min (List L)
{
    infotype mini;
    address P;
    P=First(L);
    if(P==Nil)
        return 0;
    else
    {
         mini=info(P);
        while(next(P)!=Nil)
        {
            P=next(P);
            if(info(P)<mini)
                mini=info(P);
        }
        return mini;
    }
}
/* Mengirimkan nilai info(P) yang minimum */
address AdrMin (List L)
{
    address P,mini;
    mini=First(L);
    if(mini!=Nil)
    {
        P=next(mini);
        while(P!=Nil)
        {
            if(info(P)<info(mini))
                mini=P;
            P=next(P);
        }
    }
    return mini;
}
/* Mengirimkan address P, dengan info(P) yang bernilai minimum */
float Average (List L)
{
    infotype i=0,sum=0;
    address P;
    P=First(L);
    while(P!=Nil)
    {
        i++;
        sum=sum+info(P);
        P=next(P);
    }
    return(sum/i);
}
/* Mengirimkan nilai rata-rata info(P) */
/****************** PROSES TERHADAP LIST ******************/
void DelAll (List *L)
{
    address P,Nxt;
    P=First(*L);
    if(P!=Nil)
    {
        Nxt=next(P);
        Dealokasi(P);
        First(*L)=Nxt;
        DelAll(L);
    }
}
/* Delete semua elemen list dan alamat elemen di-dealokasi */
void InversList (List *L)
{
    address P=Nil,temp,temp2;
    if(First(*L)!=Nil)
    {
        DelLast(L,&P);
        temp=P;
        temp2=P;
        while(First(*L)!=Nil)
        {
            DelLast(L,&P);
            next(temp2)=P;
            temp2=next(temp2);
        }
        First(*L)=temp;
    }
}
/* I.S. sembarang. */
/* F.S. elemen list dibalik : */
/* Elemen terakhir menjadi elemen pertama, dan seterusnya. */
/* Membalik elemen list, tanpa melakukan alokasi/dealokasi. */
List FInversList (List L)
{
    List A;
    CreateList(&A);
    address P,P2;
    P=First(L);
    while(P!=Nil)
    {
        P2=Alokasi(info(P));
        if(P2==Nil)
        {
            DelAll(&A);
            break;
        }
        InsertFirst(&A,P2);
        P=next(P);
    }
    return A;
}
/* Mengirimkan list baru, hasil invers dari L */
/* dengan menyalin semua elemn list. Alokasi mungkin gagal. */
/* Jika alokasi gagal, hasilnya list kosong */
/* dan semua elemen yang terlanjur di-alokasi, harus didealokasi */
void CopyList (List* L1, List * L2)
{
    First(*L2)=First(*L1);
}
/* I.S. L1 sembarang. F.S. L2=L1 */
/* L1 dan L2 "menunjuk" kepada list yang sama.*/
/* Tidak ada alokasi/dealokasi elemen */
List FCopyList (List L )
{
    List A;
    CreateList(&A);
    address P,P2;
    P=First(L);
    while(P!=Nil)
    {
        P2=Alokasi(info(P));
        if(P2==Nil)
        {
            DelAll(&A);
            break;
        }
        InsertLast(&A,P2);
        P=next(P);
    }
    return A;
}
/* Mengirimkan list yang merupakan salinan L */
/* dengan melakukan alokasi. */
/* Jika ada alokasi gagal, hasilnya list kosong dan */
/* semua elemen yang terlanjur di-alokasi, harus didealokasi */
void CpAlokList (List Lin, List * Lout)
{
    CreateList(Lout);
    address P,P2;
    P=First(Lin);
    while(P!=Nil)
    {
        P2=Alokasi(info(P));
        if(P2==Nil)
        {
            DelAll(Lout);
            break;
        }
        InsertLast(Lout,P2);
        P=next(P);
    }
}
/* I.S. Lin sembarang. */
/* F.S. Jika semua alokasi berhasil,maka Lout berisi hasil copy Lin */
/* Jika ada alokasi yang gagal, maka Lout=Nil dan semua elemen yang terlanjur
dialokasi, didealokasi */
/* dengan melakukan alokasi elemen. */
/* Lout adalah list kosong jika ada alokasi elemen yang gagal */
void Konkat (List L1, List L2, List * L3)
{
    address P;
    CpAlokList(L1,L3);
    P=First(*L3);
    while(next(P)!=Nil)
    {
        P=next(P);
    }
    next(P)=First(L2);
}
/* I.S. L1 dan L2 sembarang */
/* F.S. L1 dan L2 tetap, L3 adalah hasil konkatenasi L1 & L2 */
/* Jika semua alokasi berhasil, maka L3 adalah hasil konkatenasi*/
/* Jika ada alokasi yang gagal, semua elemen yang sudah dialokasi */
/* harus di-dealokasi dan L3=Nil*/
/* Konkatenasi dua buah list : L1 & L2 menghasilkan L3 yang “baru” */
/* Elemen L3 adalah hasil alokasi elemen yang “baru”. */
/* Jika ada alokasi yang gagal, maka L3 harus bernilai Nil*/
/* dan semua elemen yang pernah dialokasi didealokasi */
void Konkat1 (List * L1, List * L2, List * L3)
{
    address P;
    P=First(*L1);
    while(next(P)!=Nil)
    {
        P=next(P);
    }
    next(P)=First(*L2);
    First(*L3)=First(*L1);
    First(*L1)=Nil;
    First(*L2)=Nil;
}
/* I.S. L1 dan L2 sembarang */
/* F.S. L1 dan L2 kosong, L3 adalah hasil konkatenasi L1 & L2 */
/* Konkatenasi dua buah list : L1 dan L2 */
/* menghasilkan L3 yang baru (dengan elemen list L1 dan L2)*/
/* dan L1 serta L2 menjadi list kosong.*/
/* Tidak ada alokasi/dealokasi pada prosedur ini */
void PecahList (List *L1, List * L2, List L)
{
    infotype n,i=0;
    address P;
    n=NbElmt(L)/2;
    CreateList(L1);
    CreateList(L2);
    P=First(L);
    do
    {
        InsertLast(L1,Alokasi(info(P)));
        i++;
        P=next(P);
    }while(i<n);
    do
    {
        InsertLast(L2,Alokasi(info(P)));
        P=next(P);
    }while(P!=Nil);
}
/* I.S. L mungkin kosong */
/* F.S. Berdasarkan L, dibentuk dua buah list L1 dan L2 */
/* L tidak berubah: untuk membentuk L1 dan L2 harus alokasi */
/* L1 berisi separuh elemen L dan L2 berisi sisa elemen L */
/* Jika elemen L ganjil, maka separuh adalah NbElmt(L) div 2 */

