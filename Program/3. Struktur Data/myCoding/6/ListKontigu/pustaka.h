#include <stdio.h>
#include <stdlib.h>

///boolean
#define boolean unsigned char
#define true 1
#define false 0

#define IndexMin 1
#define IndexMax 100
#define Nil 0

typedef int infotype;
typedef int address;

typedef struct {
    infotype Info;

}ElmtList;

typedef struct{
    ElmtList TabMem[IndexMax+1];
    address N; ///gantine last
}List;

address FirstAdd;
address LastAdd;

#define First(L) FirstAdd
#define Last(L) LastAdd
#define Nest(P) (P+1)
#define Info(P) (L.TabMem[P].Info)

void CreateList(List *L);
boolean ListEmpty(List L);
void InsertFirst(List *L);
void InsertVFIrst(List *L, infotype X);
void PrintList(List L);
