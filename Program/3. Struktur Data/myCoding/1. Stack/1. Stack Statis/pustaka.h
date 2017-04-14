///dekalrasi boolean
#define true 1
#define false 0
#define boolean unsigned char

#define Nil 0 ///stack dengan elemen kosong
#define MaxEl 10 ///elemen mentok stack

typedef int infotype;///akses nilai elemen
typedef int address;///akses path

///deklarasi stack
typedef struct{
    infotype T[MaxEl+1]; ///ini array
    address TOP;///ini counter
}Stack;

///deklarasi shortcut
#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]

///deklarasi fungsi dan prosedur
void CreateEmpty(Stack *S);/// mengkondisikan stack menjadi kosong
boolean IsEmpty(Stack S);/// mengecek apakah stack kosong
boolean IsFull(Stack S);/// mengecek apakah stack penuh
void Push(Stack *S, infotype X); /// melakukan push
void Pop(Stack *S, infotype X); /// melakukan pop
void printStack(Stack S);
boolean IsInfoTopGenap(Stack S);
int SumOfBlack(Stack S);
void ChangeInfoTop(Stack *S, infotype X);
boolean IsInfotopSameWithX(Stack S, infotype X);
