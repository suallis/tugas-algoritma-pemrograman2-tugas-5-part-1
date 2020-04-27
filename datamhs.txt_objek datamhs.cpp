#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

struct mahasiswa{
 char nim[9];
   char nama[30];
   char kelas[4];
   float nilai;
};

mahasiswa mhs[100];
int jmlMhs=1;

void menuUtama(){
 clrscr();
   cout<<"------------------\n";
   cout<<"    MENU UTAMA    \n";
 cout<<"------------------\n\n";
   cout<<"   [1] Input Data Mahasiswa\n";
 cout<<"   [2] Tampilkan Data Mahasiswa\n";
   cout<<"   [3] Keluar\n\n";
   cout<<"------------------\n";
 cout<<"Pilihan : ";
}

void inputData(){
   char pil;
 clrscr();
 cout<<"-------------------------------\n";
   cout<<" Input Data Mahasiswa ke ["<<jmlMhs<<"]    \n";
   cout<<"-------------------------------\n\n";
   cout<<" -> NIM   : ";
   gets(mhs[jmlMhs].nim);
   cout<<" -> Nama  : ";
   gets(mhs[jmlMhs].nama);
   cout<<" -> Kelas : ";
   gets(mhs[jmlMhs].kelas);
   cout<<" -> Nilai : ";
   cin>>mhs[jmlMhs].nilai;
   cout<<endl<<endl;
   jmlMhs++;
   cout<<"Input data lagi (Y/N)? :";
 cin>>pil;
   if (pil=='Y' || pil=='y')
    inputData();
   else
    menuUtama();
}

void tampilData(){
 clrscr();
 cout<<"-------------------------------\n";
   cout<<"     Tampil Data Mahasiswa     \n";
   cout<<"-------------------------------\n\n";
 cout<<"---------------------------------------------------------\n";
   gotoxy(1,6);
   cout<<"| NIM ";
   gotoxy(15,6);
   cout<<"| Nama ";
   gotoxy(40,6);
   cout<<"| Kelas ";
   gotoxy(49,6);
   cout<<"| Nilai ";
   gotoxy(57,6);
   cout<<"|";
   cout<<endl;
 cout<<"-----------------------------"
     <<"----------------------------\n";
   for (int i=1; i<jmlMhs; i++){
    gotoxy(1,i+7);
    cout<<"| "<<mhs[i].nim;
    gotoxy(15,i+7);
    cout<<"| "<<mhs[i].nama;
    gotoxy(40,i+7);
    cout<<"| "<<mhs[i].kelas;
    gotoxy(49,i+7);
    cout<<"| "<<mhs[i].nilai;
    gotoxy(57,i+7);
    cout<<"|";
    cout<<endl;
   }
 cout<<"------------------------------"
     <<"---------------------------\n\n";
   cout<<"Tekan sembarang tombol untuk "
       <<"kembali ke menu utama...";
   getch();
}

void main(){
 int pil;
 do {
  menuUtama();
      cin>>pil;
      switch (pil){
       case 1 :
          inputData();
            break;
         case 2 :
          tampilData();
            break;
         case 3 :
          break;
      }
   }while(pil!=3);
}
