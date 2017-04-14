#include"tanggal.h"
#include"boolean.h"


/* definisi struktur data Tanggal*/
/* Variabel Global*/
int DD;//1-31 hari
int MM;//1-12 bln
int YY;//>0 thn

int main()
{
   ResetTanggal();
   printf("Reset Tanggal :%d:%d:%d\n",DD,MM,YY);
   printf("IsTanggalValid 0/13/1989 : %d\n",IsTanggalValid(0,13,1989));
   printf("IsKabisat 1971 : %d\n",IsKabisat(1971));
   MakeTANGGAL(28,2,1989);
   printf("MakeTanggal : %d/%d/%d\n",DD,MM,YY);
   BacaTANGGAL();
   TulisTANGGAL();
   NextNDay(28,2,2010,5);
   printf("NextNDay :28/2/2010 : %d/%d/%d \n",DD,MM,YY);
   printf("%d/%d/%d   hari   ke-%d\n",31,12,2010,HariKe(31,12,2010));
   NextDay (31,12,2010);
   printf("NextDay 31/12/2010 adalah %d/%d/%d\n",DD,MM,YY);
   PrevDay (31,12,2010);
   printf("PrevDay 31/12/2010 adalah %d/%d/%d\n",DD,MM,YY);
   NextNDay (31,12,2010,12);
   printf("Next   %d   Day   31/12/2010   adalah   %d/%d/%d\n",12,DD,MM,YY);
   PrevNDay (31,12,2010,12);
   printf("Prev   %d   Day   31/12/2010   adalah   %d/%d/%d\n",12,DD,MM,YY);
   printf("IsEqual 31/12/2010 dan 31/12/2009 :%d\n",
   IsEqD(31,12,2010,31,12,2009));
   printf("Is After 30/10/2010 dan 31/10/2010 : %d\n",
   IsAfter(30,10,2010,31,10,2010));
   printf("Is Before 31/10/2010 dan 31/12/2010 : %d\n",
   IsBefore(31,10,2010,31,12,2010));
   return 0;
}

