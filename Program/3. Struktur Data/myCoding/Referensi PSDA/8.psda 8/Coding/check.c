#include "container.h"

/*--- Mengecek Apakah Ada Gerbong Pada Rangkaian Kereta Atau Tidak ---*/
boolean ListEmpty(List Q) {
    return First(Q) == Nil;
}
/*--------------------------------------------------------------------*/

/*--- Menbuat Rangkaian Kereta yang Siap Digunakan ---*/
void CreateList(List *Q) {
    First(*Q) = Nil;
}
/*----------------------------------------------------*/

/*--- Membuang Gerbong Kereta ---*/
void Dealokasi(address *x) {
    free(&(*x));
}
/*-------------------------------*/

/*--- Menyiapkan Gerbong Kosong yang Siap Digunakan */
address Alokasi(infotype x) {
    address R;

    R = (address) malloc (sizeof(ElmtList));

    if(R!=Nil) {
        Info(R) = x;
        Next(R) = Nil;
    }
    return R;
}
/*--------------------------------------------------*/

/*--- Menampilkan Isi Rangkaian Kereta ---*/
void PrintInfo(List Q) {
    address R;

    if(ListEmpty(Q)) {
        printf("Tak ada gerbong !!!");
    }
    else {
        R = First(Q);
        do {
            printf(" %d ", Info(R));

            R = Next(R);

            if(R!=First(Q)) {
                printf("->");
            }
        }while(R!=First(Q));
    }
}
/*---------------------------------------*/

/*--- Mnghitung Jumlah Gerbong Pada Rangkaian---*/
int SumElmt(List Q) {
    address R;
    int flag;

    if(ListEmpty(Q)) {
        return 0;
    }
    else {
        R = First(Q);

        do {
            R = Next(R);

            flag++;
        }while(R!=First(Q));

        return flag;
    }
}
/*----------------------------------------------*/


/************** OPERASI PENAMBAHAN GERBONG PADA RANGKAIAN KERETA **************/

/*--- Penambahan Gerbong Pada Bagian Awal Rangkaian ---*/
void InsertFirst(List *Q, address x) {
    address Last;

    if(ListEmpty(*Q)) {
        First(*Q) = x;
        Next(x)   = x;
    }
    else {
        Last = First(*Q);

        while(1) {
            if(Next(Last)==First(*Q)) {
                break;
            }
            else {
                Last = Next(Last);
            }
        }

        Next(x)     = First(*Q);
        First(*Q)   = x;
        Next(Last)  = First(*Q);
    }
}

void InsertVFirst(List *Q, infotype x) {
    address R;

    R = Alokasi(x);

    if(R!=Nil) {
        InsertFirst(Q, R);
    }
}
/*-----------------------------------------------------*/

/*----- Menambahkan Gerbong 'x' setelah Gerbong 'n' -----*/
InsertAfter(List *Q, address x, address prec) {
    Next(x) = Next(prec);
    Next(prec) = x;
}

void InsertVAfter(List *Q, infotype x, infotype n) {
    address R, S;
    int prec=1;

    if(ListEmpty(*Q)) {
        InsertVFirst(Q, x);
    }
    else {
        R = First(*Q);
        while(prec!=n) {
            R=Next(R);
            prec++;
        }
        S = Alokasi(x);
        if(S!=Nil) {
            InsertAfter(Q, S, R);
        }
    }
}
/*-------------------------------------------------------*/

/*--- Menambahakan Gerbong Pada Bagian Akhir Rangkaian Kereta ---*/

void InsertLast(List *Q, address x, address prec) {
    Next(prec) = x;
    Next(x) = First(*Q);
}

void InsertVLast(List *Q, infotype x) {
    address R, S;

    if(ListEmpty(*Q)) {
        InsertVFirst(Q, x);
    }
    else {
        R = First(*Q);

        while( Next(R)!=First(*Q) ) {
            R = Next(R);
        }

        S = Alokasi(x);
        if(S!=Nil) {
            InsertLast(Q, S, R);
        }
    }
}
/*---------------------------------------------------------------*/

/******************************************************************************/


/************** OPERASI PELEPASAN GERBONG PADA RANGKAIAN KERETA **************/

/*--- Melepaskan Gerbong Pada Bagian Awal Rangkaian ---*/
void DelFirst(List *Q, address *x) {
    address R;

    //mengaitkan gerbong terakhir dengan gerbong kedua
    R = First(*Q);

    do {
        R = Next(R);
    }while( Next(R)!=First(*Q) );

    Next(R) = Next(First(*Q));

    *x = First(*Q);
    //mengaitkan lokomotif dengan gerbong kedua
    First(*Q) = Next(First(*Q));

    Dealokasi(*x);
}

void DelVFirst(List *Q, infotype x) {
    address R;

    if(ListEmpty(*Q)) {
        printf("Tak ada gerbong !!!");
    }
    else {
        R = First(*Q);
        x = Info(R);
        DelFirst(&(*Q), &R);
    }
}
/*-----------------------------------------------------*/

/*--- Melepaskan Gerbong 'x' setelah gerbong 'n' ---*/
void DelAfter(List *Q, address *x, address prec) {
    *x = Next(prec);
    Next(prec) = Next(Next(prec));
    Next(*x) = Nil;
}

void DelVAfter(List *Q, infotype *x, infotype n) {
    address R,S;
    int jml=1;

    if(ListEmpty(*Q)) {
        printf("Tak ada gerbong !!!");
    }
    else {
        R = First(*Q);
        while(jml!=n) {
            R = Next(R);
            jml++;
        }
        DelAfter(&(*Q), &S, R);
        *x = Info(S);
    }
}
/*--------------------------------------------------*/

/*--- Melepaskan Gerbong Pada Bagian Akhir Rangkaian ---*/
void DelLast(List *Q, address *x) {
    address Last, PrecLast;

    Last = First(*Q);
    PrecLast = Nil;

    while( Next(Last)!=First(*Q) ) {
        PrecLast = Last;
        Last = Next(Last);
    }
    *x = Last;

    if(PrecLast==Nil) {
        First(*Q) = Nil;
    }
    else {
        Next(PrecLast)=First(*Q);
    }
}

void DelVLast(List *Q, infotype *x) {
    address R;

    if(ListEmpty(*Q)) {
        printf("Tak ada gerbong !!!");
    }
    else {
        *x = Info(R);
        DelLast(&(*Q), &R);
    }
}
/*------------------------------------------------------*/

/*****************************************************************************/

/*********** PENCARIAN GERBONG PADA RANGKAIAN ***********/
/*--- Mencari Alamat Gerbong 'x' Pada Rangkaian ---*/
address Search(List Q, infotype x) {
    address R;
    boolean flag = false;

    if(ListEmpty(Q)) {
        return Nil;
    }
    else {
        R = First(Q);
        do {
            if(Info(R)==x) {
                flag=true;
                break;
            }
            R=Next(R);
        }while( R!=First(Q));

        if(flag==true) {
            return R;
        }
        else {
            return Nil;
        }
    }
}
/*------------------------------------------------*/

/*--- Mengecek Keberadaan Alamat Gerbong 'x' Pada Rangkaian ---*/
boolean FSearch(List Q, address x) {
    address prec;
    boolean flag = false;

    if(ListEmpty(Q)) {
        return flag;
    }
    else {
        prec = First(Q);
        do {
            if(x=Next(prec)) {
                flag = true;
                break;
            }
            else {
                prec = Next(prec);
            }
        }while(prec!=First(Q));
        return flag;
    }
}
/*------------------------------------------------------*/

/********************************************************/
