#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

typedef struct {
    int pembilang;
    int penyebut;
}pecahan;

pecahan makePecahan(int pemb, int peny);
void printPecahan(pecahan p);
int pembilang(pecahan p);
int penyebut(pecahan p);
pecahan addPecahan(pecahan p1, pecahan p2);
pecahan subPecahan(pecahan p1, pecahan p2);
pecahan mulPecahan(pecahan p1, pecahan p2);
pecahan divPecahan(pecahan p1, pecahan p2);
float desimalPecahan(pecahan p);
int isEqual(pecahan p1, pecahan p2);
int isBigger(pecahan p1, pecahan p2);
int isSmaller(pecahan p1, pecahan p2);


#endif // PUSTAKA_H_INCLUDED
