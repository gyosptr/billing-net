#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

int main()
{
char cust[50],tipe[10],bonus[15],lagi,kode,milih,masih;
int j,k,l,i,n,lama,hrg,sewa,cash,total,kembali,adm,atas,kode1,harga,jumlah,total1,total3,bayar,kembali1;
n=2;

atas:
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
cout<<" |                                                                             |"<<endl;
cout<<" |                                SLEEP NET                                    |"<<endl;
cout<<" |                       Selamat Datang Di SLEEP NET                           |"<<endl;
cout<<" |                       contact:yogasaputra@sleep.net                         |"<<endl;
cout<<" |                                                                             |"<<endl;
cout<<" |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|"<<endl<<endl;
cout<<"Nama Penyewa          : ";gets(cust);
cout<<"Kode Layanan [I/P/G]  : ";cin>>kode;
switch(kode)
{
    case'i':
    case'I':
    strcpy(tipe,"Internet");
      hrg=4000;
    break;
    case'p':
    case'P':
      strcpy(tipe,"Pengetikan");
      hrg=2000;
    break;
    case'g':
    case'G':
      strcpy(tipe,"Game Online");
      hrg=5000;
    break;
    default:
    cout<<endl;
    cout<<"Kode Yang Anda Masukan Salah"<<endl;
          }
cout<<"Waktu Bermain         : ";cin>>lama;
if(lama>=1)

system ("cls");
adm=1000;
sewa=lama*hrg;
total=adm+sewa+milih;
cout<<"------------------------------------"<<endl;
cout<<"              SLEEP NET             "<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Nama Penyewa           : "<<cust<<endl;
cout<<"Kode Layanan [I/P/G]   : "<<kode<<endl;
cout<<"Waktu Bermain          : "<<lama<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Tipe Layanan           : "<<tipe<<endl;
cout<<"Waktu Bermain          : "<<lama; cout<<" Jam"<<endl;
cout<<"Biaya Sewa             : "<<sewa<<endl;
cout<<"Biaya Parkir           : "<<adm<<endl;
cout<<"Total Biaya Sewa       : "<<total<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Fasilitas Lain SCAN/PRINT? [Y/N] : ";cin>>milih;


if(milih=='n'||milih=='N')
goto tdkmilih;
else
system ("cls");

milih:
cout<<"------------------------------------"<<endl;
cout<<"              SLEEP NET             "<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Nama Penyewa           : "<<cust<<endl;
cout<<"Kode Layanan [I/P/G]   : "<<kode<<endl;
cout<<"Waktu Bermain          : "<<lama<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Tipe Layanan           : "<<tipe<<endl;
cout<<"Waktu Bermain          : "<<lama; cout<<" Jam"<<endl;
cout<<"Biaya Sewa             : "<<sewa<<endl;
cout<<"Biaya Parkir           : "<<adm<<endl;
cout<<"Total Biaya Sewa       : "<<total<<endl;
cout<<""<<endl;

{
cout<<"------------------------------------"<<endl;
cout<<"          SCAN/PRINT DOKUMEN        "<<endl;
cout<<"------------------------------------"<<endl;
cout<<"1. SCAN               Rp.1.000"<<endl;
cout<<"2. Print Warna        Rp.500"<<endl;
cout<<"3. Print Hitam-Putih  Rp.300"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Masukan Pilihan [1/2/3]: ";cin>>kode1;

switch (kode1){	
case 1:
cout<<""<<endl;
cout<<"------------------------------------"<<endl;
cout<<"                SCAN                "<<endl;
cout<<"------------------------------------"<<endl;
        harga=1000;
cout<<"Fasilitas              : "<<kode1<<endl;
cout<<"Masukan Jumlah         : ";cin>>jumlah;
  total1=harga*jumlah;
cout<<"Total Harga            : Rp. "<<total1<<endl;
cout<<"------------------------------------"<<endl;
system ("pause");
  break;
  
 case 2:
cout<<""<<endl;	
cout<<"------------------------------------"<<endl;
cout<<"             PRINT WARNA            "<<endl;
cout<<"------------------------------------"<<endl;
   harga=500;
cout<<"Fasilitas              : "<<kode1<<endl;
cout<<"Masukan Jumlah         : ";cin>>jumlah;
   total1=harga*jumlah;
cout<<"Total Harga            : Rp. "<<total1<<endl;
cout<<"------------------------------------"<<endl;
system ("pause");
     break;
     
 case 3:
cout<<""<<endl;
cout<<"------------------------------------"<<endl;
cout<<"          PRINT HITAM PUTIH         "<<endl;
cout<<"------------------------------------"<<endl;
   harga=300;
cout<<"Fasilitas              : "<<kode1<<endl;   
cout<<"Masukan Jumlah         : ";cin>>jumlah;
   total1=harga*jumlah;
cout<<"Total Harga                   : Rp. "<<total1<<endl;
cout<<"------------------------------------"<<endl;
   
  break;
  
 default:
 	
 cout<<"Kode yang anda masukkan tidak ada\n";
 system("pause");
 system("cls");
 goto milih;
 }

tdkmilih:
system("cls");
total1=total+total1;
cout<<"------------------------------------"<<endl;
cout<<"              SLEEP NET             "<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Nama Penyewa           : "<<cust<<endl;
cout<<"Kode Layanan [I/P/G]   : "<<kode<<endl;
cout<<"Waktu Bermain          : "<<lama<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Tipe Layanan           : "<<tipe<<endl;
cout<<"Waktu Bermain          : "<<lama; cout<<" Jam"<<endl;
cout<<"Biaya Sewa             : "<<sewa<<endl;
cout<<"Biaya Parkir           : "<<adm<<endl;
cout<<"Total Biaya Sewa       : "<<total<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Jumlah Fasilitas DiSewa: "<<jumlah;cout<<" Kali"<<endl;
cout<<"Harga Satuan Fasilitas : "<<harga<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Total Sewa+Fasilitas   : "<<total1<<endl;
cout<<"------------------------------------"<<endl;
cout<<"Uang Bayar             : ";cin>>cash;
if (total1>=1)
{kembali=cash-total1;}
else
kembali=cash-total;
cout<<"Uang Kembali           : "<<kembali<<endl;
bawah:
cout<<endl;
system ("pause");
return 0;
}
}
