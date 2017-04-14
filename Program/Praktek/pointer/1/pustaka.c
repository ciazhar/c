#include "pustaka.h"

void input(){
    printf("input char : ");scanf("%c",&c);
    printf("input integer : ");scanf("%d",&i);
    printf("input float : ");scanf("%f",&f);

}
void cetak(){
    printf("\nCetak langsung\n");
    printf("alamat : %p,\t isi : %c\n",&c,c);
    printf("alamat : %p,\t isi : %d\n",&i,i);
    printf("alamat : %p,\t isi : %f\n",&f,f);
    printf("\ncetak lewat pointer\n");
    printf("alamat : %p,\t isi : %c\n",pointerc,*pointerc);
    printf("alamat : %p,\t isi : %d\n",pointeri,*pointeri);
    printf("alamat : %p,\t isi : %f",pointerf,*pointerf);
}
void resetinput(){
    *pointerc=c;
    *pointeri=i;
    *pointerf=f;
}
void inputbalok(){
    printf("input p : ");scanf("%d",&p);
    printf("input l : ");scanf("%d",&l);
    printf("input t : ");scanf("%d",&t);
}
void cetakbalok(){
    printf("\np : %d\n",p);
    printf("l : %d\n",l);
    printf("t : %d\n",t);
}
int volumeBalok(int p, int l, int t, int *volume){
    *volume=p*l*t;
    return *volume;
}

