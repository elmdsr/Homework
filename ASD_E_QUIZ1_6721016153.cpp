#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
int main()
{
    int A[20];
    int a, b, nilai, data, Y, N;
    char pilih;
   cout << "Masukkan Jumlah Data : ";cin >> data;
    for(a=0;a<data;a++)
    {
        cout<<"Masukkan Data ke - ["<<a<<"]= ";cin>>A[a];
    }
    cout<<"Masukkan data yang akan dicari= ";
    cin>>nilai;
    for(b=0;b<data;b++)
    {
    if(A[b]==nilai)
    {
    cout<<"Data yang dicari terdapat pada data ke  ["<<b<<"] \n";
    }
    else(A[b]==0);{
        cout<<"Data Tidak Ditemukan\n";
    }
   }
    menu:
     cout << "Mau Coba Lagi ??? (Y = Iya ; N = Tidak) "; cin >> pilih;
     if(pilih == 'Y') {
       cout << "\nMasukkan Jumlah Data : ";cin >> data;
   cout << endl;
    for(a=0;a<data;a++)
    {
        cout<<"\nMasukkan Data ke - ["<<a<<"]= ";cin>>A[a];
    }
    cout<<endl;
    cout<<"\nMasukkan data yang akan dicari= ";
    cin>>nilai;
    for(b=0;b<data;b++)
    {
    if(A[b]==nilai)
    {
    cout<<"\nData yang dicari terdapat pada data ke  ["<<b<<"]";
    }};}
    else (pilih == 'N');{
      exit (0);
     }
getch();
return(0);
}
