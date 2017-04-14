#ifndef DUMMY_H_INCLUDED
#define DUMMY_H_INCLUDED

#include "boolean.h"

typedef int infotype;
typedef struct tElmtList *address;
typedef struct tElmtList
{
    infotype info;
    address NEXT;
}ElmtList;

typedef struct
{
    address FIRST;
    address NEXT;
}List;

#define INFO(P) (P)->Info
#define NEXT(P) (P)->NEXT
#define FIRST(L) (L).FIRST
#define LAST(L) (L).LAST
#define NIL NULL
#endif // DUMMY_H_INCLUDED
