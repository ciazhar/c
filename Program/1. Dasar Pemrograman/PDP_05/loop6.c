//judul:max min
//dibuat oleh nilanadia
//22 okt 2014

//kamus:
int i, n, maxy, miny;

//deskripsi:
main()
{
    scanf("%d", &n);
    maxy=n;
    miny=n;
    for (i=1;i++;i++)
    {
        scanf("%d",&i);
        if(i==(-99))
        {
            break;
        }
            else if(maxy>i)
                {
                    maxy=maxy;
                }
                 else
                    {
                        maxy=i;
                    }
                if(miny<i)
                    {
                        miny=miny;
                    }
                else
                    {
                        miny=i;
                    }
    }
    printf("max = %d \n", maxy);
    printf("min = %d", miny);

    return 0;
}
