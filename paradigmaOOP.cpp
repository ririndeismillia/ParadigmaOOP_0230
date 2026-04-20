#include <iostream>
using namespace std;

class Barang{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanData(){
        cout << " Nama  : " << nama << endl;
        cout << " Jumlah  : " << jumlah << endl; 
        cout << " Kategori : " << kategori << endl;
        cout << " Tanggal Produksi : " << tanggalProduksi << endl;
        
    }

};

int main(){
    Barang elektronik;
    elektronik.nama = "TV";
    elektronik.jumlah = 5;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "2025-07-07";

    Barang nonElektronik;
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = "2025-07-07";


    elektronik.tampilkanData();
    nonElektronik.tampilkanData();




}

