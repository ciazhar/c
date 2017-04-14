#include<stdio.h>
#include<stdlib.h>
#define CTRL_Z 26

main ()
{
    FILE *pf;
    char kar;

        if ( (pf = fopen("COBA.TXT", "w")) == NULL)
            {
                cputs("File tidak dapat diciptakan ! \r\n");
                exit(1);
            }

        while ((kar=getche())!=CTRL_Z)
               putc(kar, pf);

        fclose(pf);
}
