#include"tanggal.h"
#include"boolean.h"



void ResetTanggal()
{
    DD=1,MM=1,YY=1901;
}
boolean IsTanggalValid(int D, int M, int Y)
{
    if(D<=31&&D>0&&M>0&&M<=12&&Y>0)
    {
        return true;
    }
    else return false;
}
boolean IsKabisat(int Y)
{
    if(Y%4==0&&Y%100==0){
        return true;
    }
    else return false;
}
void MakeTANGGAL(int h, int b, int t)
{
    if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
        DD=h;MM=b;YY=t;
    }
    else DD=1,MM=1,YY=1901;
}
void BacaTANGGAL()
{
    int YYYY;
    if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0)
    {
        DD=DD;MM=MM;YYYY=YY;
    }
    else printf("salah input");

}
void TulisTANGGAL()
{
    printf("%d/%d/%d\n",DD,MM,YY);
}
int HariKe(int h, int b, int t)
{
    if(t%4==0){
        if(b==1){
            h=1;
        }
        else if(b==2){
            h=31+h;
        }
        else if(b==3){
            h=31+29+h;
        }
        else if(b==4){
            h=31+29+31+h;
        }
        else if(b==5){
            h=31+29+31+30+h;
        }
        else if(b==6){
            h=31+29+31+30+31+h;
        }
        else if(b==7){
            h=31+29+31+30+31+30+h;
        }
        else if(b==8){
            h=31+29+31+30+31+30+31+h;
        }
        else if(b==9){
            h=31+29+31+30+31+30+31+31+h;
        }
        else if(b==10){
            h=31+29+31+30+31+30+31+31+30+h;
        }
        else if(b==11){
            h=31+29+31+30+31+30+31+31+30+31+h;
        }
        else if(b==12){
            h=31+29+31+30+31+30+31+31+30+31+30+h;
        }
        else {printf("salah Input");
        }
    }
    else
        if(b==1){
            h=1;
        }
        else if(b==2){
            h=31+h;
        }
        else if(b==3){
            h=31+28+h;
        }
        else if(b==4){
            h=31+28+31+h;
        }
        else if(b==5){
            h=31+28+31+30+h;
        }
        else if(b==6){
            h=31+28+31+30+31+h;
        }
        else if(b==7){
            h=31+28+31+30+31+30+h;
        }
        else if(b==8){
            h=31+28+31+30+31+30+31+h;
        }
        else if(b==9){
            h=31+28+31+30+31+30+31+31+h;
        }
        else if(b==10){
            h=31+28+31+30+31+30+31+31+30+h;
        }
        else if(b==11){
            h=31+28+31+30+31+30+31+31+30+31+h;
        }
        else if(b==12){
            h=31+28+31+30+31+30+31+31+30+31+30+h;
        }
        else {printf("salah Input");
        }

    return h;
}

int DayofMonth(int m, int y)
{
    int h;

    if(m==1){
        h=31;
    }
    else if(m==2){
        if(y%4==0){
            h=29;
        }
        else {
            h=28;
        }
            }
    else if(m==3){
        h=31;
    }
    else if(m==4){
        h=30;
    }
    else if(m==5){
        h=31;
    }
    else if(m==6){
        h=30;
    }
    else if(m==7){
        h=31;
    }
    else if(m==8){
        h=31;
    }
    else if(m==9){
        h=30;
    }
    else if(m==10){
        h=31;
    }
    else if(m==11){
        h=30;
    }
    else if(m==12){
        h=31;
    }
    else {printf("salah Input");}


    return h;
}
void NextDay(int h, int b, int t)
{
    DD=h+1;MM=b;YY=t;
    if(YY%4==0){
        if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=MM+1;}
        }
        else if(MM==12){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=1,YY=YY+1;}
        }
        else if(MM==2){
            if(DD<=29&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=MM+1;}
        }
        else if(MM==4||MM==6||MM==9||MM==11){
            if(DD<=30&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=MM+1;}
        }
        else printf("salah input");

    }

    else {
        if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=MM+1;}
        }
        else if(MM==12){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=1,YY=YY+1;}
        }
        else if(MM==2){
            if(DD<=28&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=MM+1;}
        }
        else if(MM==4||MM==6||MM==9||MM==11){
            if(DD<=30&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=1,MM=MM+1;}
        }
    }
}
void PrevDay(int h, int b, int t)
{
    DD=h-1;MM=b;YY=t;
    if(YY%4==0){
        if(MM-1==1||MM-1==3||MM-1==5||MM-1==7||MM-1==8||MM-1==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31,MM=MM-1;}
        }
        else if(MM==1){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31,MM=12,YY=YY-1;}
        }
        else if(MM-1==2){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=29,MM=MM-1;}
        }
        else if(MM-1==4||MM-1==6||MM-1==9||MM-1==11){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=30,MM=MM-1;}
        }
        else printf("salah input");

    }

    else {
        if(MM-1==1||MM-1==3||MM-1==5||MM-1==7||MM-1==8||MM-1==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31,MM=MM-1;}
        }
        else if(MM==1){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31,MM=12,YY=YY-1;}
        }
        else if(MM-1==2){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=28,MM=MM-1;}
        }
        else if(MM-1==4||MM-1==6||MM-1==9||MM-1==11){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=30,MM=MM-1;}
        }
        else printf("salah input");

    }
}
void NextNDay(int h, int b, int t, int N)
{
    DD=h+N;MM=b;YY=t;
    if(YY%4==0){
        if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=MM+1;}
        }
        else if(MM==12){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=1,YY=YY+1;}
        }
        else if(MM==2){
            if(DD<=29&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=MM+1;}
        }
        else if(MM==4||MM==6||MM==9||MM==11){
            if(DD<=30&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=MM+1;}
        }
        else printf("salah input");

    }

    else {
        if(MM==1||MM==3||MM==5||MM==7||MM==8||MM==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=MM+1;}
        }
        else if(MM==12){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=1,YY=YY+1;}
        }
        else if(MM==2){
            if(DD<=28&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=MM+1;}
        }
        else if(MM==4||MM==6||MM==9||MM==11){
            if(DD<=30&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=N,MM=MM+1;}
        }
    }
}
void PrevNDay(int h, int b, int t, int N)
{
    DD=h-N;MM=b;YY=t;
    if(YY%4==0){
        if(MM-1==1||MM-1==3||MM-1==5||MM-1==7||MM-1==8||MM-1==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31+1-N,MM=MM-1;}
        }
        else if(MM==1){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31+1-N,MM=12,YY=YY-1;}
        }
        else if(MM-1==2){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=29+1-N,MM=MM-1;}
        }
        else if(MM-1==4||MM-1==6||MM-1==9||MM-1==11){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=30+1-N,MM=MM-1;}
        }
        else printf("salah input");

    }

    else {
        if(MM-1==1||MM-1==3||MM-1==5||MM-1==7||MM-1==-8||MM-1==10){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31+1-N,MM=MM-1;}
        }
        else if(MM==1){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=31+1-N,MM=12,YY=YY-1;}
        }
        else if(MM-1==2){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=28+1-N,MM=MM-1;}
        }
        else if(MM-1==4||MM-1==6||MM-1==9||MM-1==11){
            if(DD<=31&&DD>0&&MM>0&&MM<=12&&YY>0){
            DD=DD;MM=MM;YY=YY;
            }
            else {DD=30+1-N,MM=MM-1;}
        }
        else printf("salah input");

    }
}
boolean IsEqD(int h1, int b1, int t1, int h2, int b2, int t2)
{
    if(h1==h2&&b1==b2&&t1==t2){
        return true;
    }
    else return false;
}
boolean IsBefore(int h1, int b1, int t1, int h2, int b2, int t2)
{
    if(h1<=h2&&b1<=b2&&t1<=t2){
        return true;
    }
    else return false;
}
boolean IsAfter(int h1, int b1, int t1, int h2, int b2, int t2)
{
    if(h1<=h2&&b1<=b2&&t1<=t2){
        return true;
    }
    else return false;
}

