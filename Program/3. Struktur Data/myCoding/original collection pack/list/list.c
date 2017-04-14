#include "list.h"

void createList(struct list* *l){
    (*l) = NULL;
}
int isEmpty(struct list* l){
    if(l==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct list* alokasi(int angka){
    struct list* l;
    l = malloc(sizeof(struct list));

    if (l!= NULL){  // jika masih ada memori
        l->data = angka;
        l->next = NULL;
    }
    return l;
}
struct list* dealokasi(struct list* *l){
    free(*l);
}
void insertDepan(struct list* *l, int angka){
    struct list* baru = alokasi(angka);
    if(baru!=NULL){
        baru->next=(*l);
        (*l)=baru;
    }
}
void Insert_After (struct list* *l,int Posisi,int Data){
    struct list* o;
    struct list* p;
    struct list* new_elm;

    int count=0;

    ///cek banyak elemen di list

    o = (*l);
    while(o!=NULL){
        count++;
        o=o->next;
    }

    ///cek posisi
    p = (*l);
    while(p!=NULL){
        if(count==Posisi){
            break;
        }
        count--;
        p=p->next;
    }
    ///masukin datanya
    new_elm = alokasi(Data);
    new_elm->next = p->next;
    p->next = new_elm;

}


void display (struct list* l){
    while (l != NULL ){
        printf("%d -> ",l->data);
        l= l->next;
    }
    printf("NULL\n");
}
