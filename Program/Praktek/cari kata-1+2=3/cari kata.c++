#include <iostream.h>
#include <conio.h>
#include <string.h> // fungsi strstr

void main()
{
char kalimat[25];
char cari [10];
clrscr();
cout<<"Masukan sebuah kalimat : ";
cin.getline(kalimat,25); //menginputkan 25 karakter saja
cout<<"Masukan kata yang dicari :";
cin.getline(cari,10); //kata tidak boleh lebih dari 10 karakter
if(strstr(kalimat==cari))//strstr bersifat case sensitif
cout<<"kata "<<cari<<" ditemukan didalam kalimat.";
else
cout<<"kata "<<cari<<" tdk ditemukan didalam kalimat.";
getch();
}
