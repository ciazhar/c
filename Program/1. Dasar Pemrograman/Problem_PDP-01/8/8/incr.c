/*File : incr.c*/
/*Effek dari operator ++*/
int main ()
{
    /*Kamus*/
    int i, j;
    /*Program*/
    i = 3;
    j = i++;
    printf ("Nilai i :%d\nNilai j : %d\n", ++i, j);
    return 0;
}
