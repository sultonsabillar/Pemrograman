/* SULTON SABILLA ROSAD
   17.11.1568
   S1 INFORMATIKA 10
   PEMROGRAMAN 
   ARIF AKBARUL HUDA S.SI., M.ENG*/
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
class kasir{
    int a,b;
    public: 
        void angka (int,int);
        int total (void) {return (a*b);
        }
        int kembalian (void) {return (a-b);
        }
};
void kasir::angka (int x, int y){
    a=x;
    b=y;
}
struct barang {
    int kode,pri,jml,byr;
}; 

int main(int argc, char** argv) {
   
    kasir ksr;
    barang brg1;

    char lagi,nama[20];
    cout<<"========================================="<<endl;
    cout<<"     Selamat Datang di RESTO SULTON"<<endl;
    cout<<"        Anda Kenyang Kami Senang       "<<endl;
  
  
    cout<<"========================================="<<endl<<endl<<endl;
    
    cout<<""<<endl;
    cout<<"   Menu Makanan          Harga"<<endl;
    cout<<"----------------      ----------"<<endl;
    cout<<"1. AYAM GORENG        Rp. 10.000"<<endl;
    cout<<"2. NASI GORENG        Rp. 8.000"<<endl;
    cout<<"3. MIE DOK DOK        Rp. 10.000"<<endl;
    cout<<"4. MAGELANGAN         Rp. 12.000"<<endl;
    cout<<"5. NASI OMELET        Rp. 8.000"<<endl;
    cout<<"6. ES JERUK           Rp. 6.000"<<endl;
    cout<<"7. ES TEH             Rp. 1500"<<endl;
    cout<<endl;
    cout<<"MASUKKAN NAMA ANDA : ";
    cin>>nama;
     do
    {
    cout<<'\n'<<"MASUKKAN PILIHAN ANDA : ";
    cin>>brg1.kode;   
   
    switch (brg1.kode){
       
    case 1:
        system("cls");
        cout<<'\n'<<"AYAM GORENG"<<endl;
        brg1.pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
            ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
            ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
    case 2:
        system("cls");
        cout<<'\n'<<"NASI GORENG"<<endl;
            brg1.pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
             ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
           ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
    case 3:
        system("cls");
        cout<<'\n'<<"MIE DOK DOK"<<endl;
            brg1.pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
            ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
            ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
    case 4:
        system("cls");
        cout<<'\n'<<"MAGELANGAN"<<endl;
            brg1.pri=12000;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
            ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
            ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
    case 5:
        system("cls");
        cout<<'\n'<<"NASI OMELET"<<endl;
            brg1.pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
            ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
         ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
    case 6:
        system("cls");
        cout<<'\n'<<"ES JERUK"<<endl;
            brg1.pri=2000;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
            ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
            ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
    case 7:
        system("cls");
        cout<<'\n'<<"ES TEH"<<endl;
            brg1.pri=1500;
        cout<<"Masukkan Jumlah :";
        cin>>brg1.jml;
          ksr.angka(brg1.pri,brg1.jml);
        cout<<"Total harganya yaitu : Rp. "<<ksr.total()<<endl;
        cout<<"DIBAYAR : Rp. ";
        cin>>brg1.byr;
            ksr.angka(brg1.byr,ksr.total());
        cout<<"KEMBALI : Rp. "<<ksr.kembalian()<<endl;
        cout<<"Masih ada Y/T :";
        cin>>lagi;
        break;
 default:
    cout<<"Kode yang anda masukkan tidak ada"<<endl;
    }
  
    }
   
    while (lagi=='Y' || lagi=='y');
    system("cls");
    cout<<"================================================================="<<endl;
    cout<<"    Terimah Kasih "<<nama<<" Atas Kunjungan Anda di RESTO SULTON"<<endl;
    cout<<"================================================================="<<endl;
    getch ();
}

