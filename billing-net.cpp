#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<windows.h>
using namespace std;

int main()
{
char cust[50],tipe[10],bonus[15],lagi,kode,makan,masih;
int j,k,l,i,n,lama,hrg,sewa,cash,total,kembali,adm,atas,kode1,harga,jumlah,total1,total3,bayar,kembali1;
n=2;

atas:
cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
    cout<<"                                                                              "<<endl;
    cout<<"                                 SLEEP NET                                    "<<endl;
    cout<<"                        Selamat Datang Di SLEEP NET                           "<<endl;
    cout<<"                        contact:yogasaputra@zoho.com                          "<<endl;
    cout<<"                                                                              "<<endl;
    cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl<<endl;
cout<<" Nama Penyewa\t\t: ";gets(cust);
cout<<" Kode Layanan [I/P/G]\t: ";cin>>kode;
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
    cout<<" Kode Yang Anda Masukan Salah"<<endl;
          }
cout<<" Waktu Bermain\t\t: ";cin>>lama;
if(lama>=1)

system ("cls");
adm=1000;
sewa=lama*hrg;
total=adm+sewa+makan;
cout<<" SLEEP NET"<<endl<<endl;
cout<<" Nama Penyewa\t\t: "<<cust<<endl;
cout<<" Kode Layanan [I/P/G]\t: "<<kode<<endl;
cout<<" Waktu Bermain\t\t: "<<lama<<endl<<endl;
cout<<" **************************************"<<endl<<endl;
cout<<" Tipe \t\t: "<<tipe<<endl;
cout<<" Waktu Bermain\t\t: "<<lama; cout<<" Jam"<<endl;
cout<<" Biaya Sewa\t\t: "<<sewa<<endl;
cout<<" Biaya Parkir\t: "<<adm<<endl;
cout<<" Total Biaya Sewa\t: "<<total<<endl<<endl;
cout<<" FASILITAS LAIN SCAN/PRINT?[Y/N] :";cin>>makan;

if(makan=='n'||makan=='N')
goto tdkmakan;
else
system ("cls");

makan:
cout<<" SLEEP NET"<<endl<<endl;
cout<<" Nama Penyewa\t\t: "<<cust<<endl;
cout<<" Kode  [I/P/G]\t: "<<kode<<endl;
cout<<" Waktu Bermain\t\t: "<<lama<<endl<<endl;
cout<<" **************************************"<<endl<<endl;
cout<<" Tipe \t\t     : "<<tipe<<endl;
cout<<" Waktu Bermain\t\t: "<<lama; cout<<" hari"<<endl;
cout<<" Biaya Sewa\t\t: "<<sewa<<endl;
cout<<" Biaya Parkir\t: "<<adm<<endl;
cout<<" Total Biaya Sewa\t: "<<total<<endl<<endl;


{
 cout<<"============================"<<endl;
 cout<<"SCAN/PRINT DOKUMEN"<<endl;
 cout<<"============================"<<endl;
 cout<<""<<endl;
 cout<<"Daftar Harga"<<endl;
 cout<<"1. SCAN              Rp. 1.000"<<endl;
 cout<<"2. Print Warna       Rp. 500"<<endl;
 cout<<"3. Print Hitam-Putih Rp. 300"<<endl;
 cout<<"============================"<<endl;
 
cout<<'\n'<<"Masukan No Menu Pilihan : ";
 cin>>kode1;
 switch (kode1){
 	
 case 1:
  cout<<'\n'<<"SCAN"<<endl;
        harga=1000;
  cout<<"Masukan Jumlah : ";
  cin>>jumlah;
  total1=harga*jumlah;
   cout<<"Total Harga  : Rp. "<<total1<<endl;

  cout<<"Masih ada Y/N  : "; cin>>masih;
     if(masih=='y'||masih=='Y')
   goto makan;
   else
  break;
  
 case 2:
  cout<<'\n'<<"Print Warna"<<endl;
   harga=500;
  cout<<"Masukan Jumlah : ";
  cin>>jumlah;
   total1=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total1<<endl;
  
  cout<<"Masih ada Y/N  : "; cin>>masih;
     if(masih=='y'||masih=='Y')
     goto makan;
     else
     break;
     
 case 3:
  cout<<'\n'<<"Print Hitam-Putih"<<endl;
   harga=300;
  cout<<"Masukan Jumlah : ";
  cin>>jumlah;
   total1=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total1<<endl;
 
  cout<<"Masih ada Y/N  : "; cin>>masih;
     if(masih=='y'||masih=='Y')
   goto makan;
   else
  break;
  
 default:
 	
 cout<<"Kode yang anda masukkan tidak ada\n";
 system("pause");
 system("cls");
 goto makan;
 }

tdkmakan:
system("cls");


cout<<" SLEEP NET"<<endl<<endl;
cout<<" Nama Penyewa\t\t: "<<cust<<endl;
cout<<" Kode  [I/P/G]\t: "<<kode<<endl;
cout<<" Waktu Bermain\t\t: "<<lama<<endl<<endl;
cout<<" **************************************"<<endl<<endl;
cout<<" Tipe \t\t: "<<tipe<<endl;
cout<<" Waktu Bermain\t\t: "<<lama; cout<<" hari"<<endl;
cout<<" Biaya Sewa\t\t: "<<sewa<<endl;
cout<<" Biaya Parkir\t: "<<adm<<endl;
cout<<" Total Biaya Sewa\t: "<<total<<endl<<endl;



cout<<" *****************************************"<<endl<<endl;
cout<<" Uang Bayar\t\t: ";cin>>cash;
if (total1>=1)
{kembali=cash-total-total1;
}
else
kembali=cash-total;
cout<<" Uang Kembali\t\t: "<<kembali<<endl;
bawah:
cout<<endl;
system ("pause");
system("cls");

for (i=1;i<=n;i++)
{
if ((i==1)||(i==n))
{
for (j=1;j<=n;j++)
cout<<"**************************";
cout<<endl;
}
else
{
for (j=1;j<=n;j++)
{
if ((j==1)||(j==n))
cout<<"*";
else
cout<<"*";
}
cout<<endl;
}
}

cout<<" TERIMA KASIH " <<cust<<" SUDAH BERMAIN DI SLEEP NET"<<endl<<endl;

for (i=1;i<=n;i++)
{
if ((i==1)||(i==n))
{
for (j=1;j<=n;j++)
cout<<"**************************";
cout<<endl;
}
else
{
for (j=1;j<=n;j++)
{
if ((j==1)||(j==n))
cout<<"*";
else
cout<<"*";
}

}
}

system ("pause");
return 0;}
}
