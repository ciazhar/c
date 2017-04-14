#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c,d,e,f,g,h,i,j,k ;
    float l;
    printf("masukan nilai :  "); scanf("%d",&a);
    printf("masukan nilai :  "); scanf("%d",&b);
    printf("masukan nilai :  "); scanf("%d",&c);
    printf("masukan nilai :  "); scanf("%d",&d);
    printf("masukan nilai :  "); scanf("%d",&e);
    printf("masukan nilai :  "); scanf("%d",&f);
    printf("masukan nilai :  "); scanf("%d",&g);
    printf("masukan nilai :  "); scanf("%d",&h);
    printf("masukan nilai :  "); scanf("%d",&i);
    printf("masukan nilai :  "); scanf("%d",&j);
    printf("\n");

    k=a+b+c+d+e+f+g+h+i+j;
    l=k/10;


    if(a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j)
    {
        printf("nilai maximum=%d\n\n", a);
    }
    else if(b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j)
    {
        printf("nilai maximum=%d\n\n", b);
    }
    else if (c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j)
    {
        printf("nilai maximum=%d\n\n", c) ;
    }
    else if (d>a&&d>b&&d>c&&d>e&&d>f&&d>g&&d>h&&d>i&&d>j)
    {
        printf("nilai maximum=%d\n\n", d) ;
    }
    else if (e>a&&e>b&&e>c&&e>d&&e>f&&e>g&&e>h&&e>i&&e>j)
    {
        printf("nilai maximum=%d\n\n", e) ;
    }
    else if (f>a&&f>b&&f>c&&f>d&&f>e&&f>g&&f>h&&f>i&&f>j)
    {
        printf("nilai maximum=%d\n\n", f) ;
    }
    else if (g>a&&g>b&&g>c&&g>d&&g>e&&g>f&&g>h&&g>i&&g>j)
    {
        printf("nilai masimum=%d\n\n", g) ;
    }
    else if (h>a&&h>b&&h>c&&h>d&&h>e&&h>f&&h>g&&h>i&&h>j)
    {
        printf("nilai maximum=%d\n\n", h) ;
    }
    else if (i>a&&i>b&&i>c&&i>d&&i>e&&i>f&&i>g&&i>h&&i>j)
    {
        printf("nilai maximum=%d\n\n", i) ;
    }
    else
    {
        printf("nilai maximum=%d\n\n", j) ;
    }




    if (a<b&&a<c&&a<d&&a<e&&a<f&&a<g&&a<h&&a<i&&a<j)
    {
        printf("nilai minimum=%d\n\n", a);
    }
    else if (b<a&&b<c&&b<d&&b<e&&b<f&&b<g&&b<h&&b<i&&b<j)
    {
        printf("nilai minimum=%d\n\n", b);
    }
    else if (c<a&&c<b&&c<d&&c<e&&c<f&&c<g&&c<h&&c<i&&c<j)
    {
        printf("nilai minimum=%d\n\n", c);
    }
    else if (d<a&&d<b&&d<c&&d<e&&d<f&&d<g&&d<h&&d<i&&d<j)
    {
        printf("nilai minimum=%d\n\n", d);
    }
    else if (e<a&&e<b&&e<c&&e<d&&e<f&&e<g&&e<h&&e<i&&e<j)
    {
        printf("nilai minimum=%d\n\n", e);
    }
    else if (f<a&&f<b&&f<c&&f<d&&f<e&&f<g&&f<h&&f<i&&f<j)
    {
        printf("nilai minimum=%d\n\n", f);
    }
     else if (g<a&&g<b&&g<c&&g<d&&g<e&&g<f&&g<h&&g<i&&g<j)
    {
        printf("nilai minimum=%d\n\n", g);
    }
    else if (h<a&&h<b&&h<c&&h<d&&h<e&&h<f&&h<g&&h<i&&h<j)
    {
        printf("nilai minimum=%d\n\n", h);
    }
    else if (i<a&&i<b&&i<c&&i<d&&i<e&&i<f&&i<g&&i<h&&i<j)
    {
        printf("nilai mimimum=%d\n\n", i);
    }
    else
    {
        printf("nilai minimum=%d\n\n", j);
    }

    printf("Rata-ratanya adalah=%0.2f\n\n", l);

    return 0;

}


