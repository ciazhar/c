#define true 1
#define false 0
#define boolean unsigned char

#define Nil 0

typedef int infotype;
typedef struct ElmtList *address;

/*elemen list punya 2 komponen yaitu :
info sama next.
next itu juga elemen list yang dialiaskan
dengan address
*/

///Elemen list<next> di dalam elemen list<struct>
typedef struct ElmtList{
    infotype Info;
    address Next;
}ElmtList;

typedef struct {
    address First;
}List;

#define Next(P) (P)->Next
#define Info(P) (P)->Info
#define Firt(L) (L).First

void CreatEmpty(List *L);
boolean IsEmpty(List L);
address Alokasi(infotype X);
void insertFIrst(List *L,address P);
void isVFirst(List *L, infotype X);
void PrintInfo(List L);
