/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import library.
#include <iostream>
#include <string>

// Using standard namespace.
using namespace std;

// Membuat kelas Table
class Table
{
private:
    // banyaknya baris
    int baris;
    // banyaknya kolom
    int kolom;

public:
    Table() {} // konstruktor Table
    Table(int baris, int kolom)
    {
        // konstruktor langsung isi attribut
        this->baris = baris;
        this->kolom = kolom;
    }

    // Setter and Getter methods for private attributes
    // Set Baris
    void setBaris(int baris)
    {
        this->baris = baris;
    }

    // Get Baris
    int getBaris()
    {
        return baris;
    }

    // Set Kolom
    void setKolom(int kolom)
    {
        this->kolom = kolom;
    }

    // Get Kolom
    int getKolom()
    {
        return kolom;
    }

    // Membuat Metode untuk buat tabel
    void buatBaris(string isi[], int batas, int idx, int idProduct, int name, int brand, int price, int size, int material, int gender, int color, int sleeve_type)
    {
        int i = 0, j = 0;

        // Jika index = 0 (membuat kerangka tabel atas)
        if (idx == 0)
        {
            cout << "+";
            // Membuat perulangan sebanyak 9x (banyak jumlah elemen dalam 1 baris)
            for (i = 0; i < 10; i++)
            {
                // Jika i = 0
                if (i == 0)
                {
                    // Membuat perulangan untuk garis sebanyak 4x("No" + 2 spasi)
                    for (j = 0; j < 4; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 1
                if (i == 1)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2 spasi
                    for (j = 0; j < idProduct + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 1
                if (i == 2)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris name + 2 spasi
                    for (j = 0; j < name + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 3
                if (i == 3)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris brand + 2 spasi
                    for (j = 0; j < brand + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 4
                if (i == 4)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris price + 2 spasi
                    for (j = 0; j < price + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 5
                if (i == 5)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris size + 2 spasi
                    for (j = 0; j < size + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 6
                if (i == 6)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanajgn pada baris material + 2 spasi
                    for (j = 0; j < material + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 7
                if (i == 7)
                {
                    cout << "+";
                    // Membuat perulangan  untuk garis sebanyak kata terpanajgn pada gender + 2 spasi
                    for (j = 0; j < gender + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 8
                if (i == 8)
                {
                    cout << "+";
                    // Membuat perulangan  untuk garis sebanyak kata terpanajgn pada color + 2 spasi
                    for (j = 0; j < color + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 9
                if (i == 9)
                {
                    cout << "+";
                    // Membuat perulangan  untuk garis sebanyak kata terpanajgn pada sleeve_type + 2 spasi
                    for (j = 0; j < sleeve_type + 2; j++)
                    {
                        cout << "-";
                    }
                }
            }
            // ujung table
            cout << "+";
            cout << "" << endl;
        }

        // Membuat baris untuk judul
        if (idx == 0)
        {
            cout << "|No  ";
            cout << "|ID";
            for (j = 0; j < idProduct; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Name";
            for (j = 0; j < name - 2; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Brand";
            for (j = 0; j < brand - 3; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Price";
            for (j = 0; j < price - 3; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Size";
            for (j = 0; j < size - 2; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Material";
            for (j = 0; j < material - 6; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Gender";
            for (j = 0; j < gender - 4; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Color";
            for (j = 0; j < color - 3; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            cout << "|Sleeve Type";
            for (j = 0; j < sleeve_type - 9; j++)
            {
                // Meminta output berupa spasi
                cout << " ";
            }
            // Penutup pada tiap baris
            cout << "|";
            cout << "" << endl;
        }

        // Jika index = 0 (membuat kerangka tabel bawah judul)
        if (idx == 0)
        {
            // Ujung kiri table
            cout << "+";
            for (i = 0; i < 10; i++)
            {
                if (i == 0)
                {
                    // Membuat perulangan untuk garis sebanyak 4
                    for (j = 0; j < 4; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 1)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2 spasi
                    for (j = 0; j < idProduct + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 2)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris name + 2 spasi
                    for (j = 0; j < name + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 3)
                {
                    cout << "+";
                    for (j = 0; j < brand + 2; j++)
                    {
                        // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris brand + 2 spasi
                        cout << "-";
                    }
                }
                if (i == 4)
                {
                    cout << "+";
                    for (j = 0; j < price + 2; j++)
                    {
                        // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris price + 2 spasi
                        cout << "-";
                    }
                }
                if (i == 5)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris size + 2 spasi
                    for (j = 0; j < size + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 6)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris material + 2 spasi
                    for (j = 0; j < material + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 7)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris gender + 2 spasi
                    for (j = 0; j < gender + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 8)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris color + 2 spasi
                    for (j = 0; j < color + 2; j++)
                    {
                        cout << "-";
                    }
                }
                if (i == 9)
                {
                    cout << "+";
                    // Membuat perulangan untuk garis sebanyak kata terpanjang pada baris sleeve type + 2 spasi
                    for (j = 0; j < sleeve_type + 2; j++)
                    {
                        cout << "-";
                    }
                }
            }
            // penutup table (ujung kanan)
            cout << "+";
            cout << "" << endl;
        }

        // buat baris isi kolom atribut
        for (i = 0; i < 10; i++)
        {
            if (i == 0)
            {
                // Tampil nomor
                cout << "|" + isi[i] + "   ";
            }
            else if (i == 1)
            {
                // Tampil nama
                cout << "|" + isi[i];
                for (j = 0; j < idProduct - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 2)
            {
                // Tampil name
                cout << "|" + isi[i];
                for (j = 0; j < name - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 3)
            {
                // Tampil brand
                cout << "|" + isi[i];
                for (j = 0; j < brand - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 4)
            {
                // Tampil price
                cout << "|" + isi[i];
                for (j = 0; j < price - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 5)
            {
                // Tampil size
                cout << "|" + isi[i];
                for (j = 0; j < size - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 6)
            {
                // Tampil material
                cout << "|" + isi[i];
                for (j = 0; j < material - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 7)
            {
                // Tampil gender
                cout << "|" + isi[i];
                for (j = 0; j < gender - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 8)
            {
                // Tampil color
                cout << "|" + isi[i];
                for (j = 0; j < color - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            else if (i == 9)
            {
                // Tampil sleeve type
                cout << "|" + isi[i];
                for (j = 0; j < sleeve_type - isi[i].length() + 2; j++)
                {
                    cout << " ";
                }
            }
            // Membuat garis penutup table pada setiap atibut baris
            if (i == 9)
            {
                cout << "|";
                cout << "" << endl;
            }
        }

        // Membuat kerangka tabel pada baris terakhir
        if (idx == batas - 1)
        {
            cout << "+";
            for (i = 0; i < 10; i++)
            {
                // Jika i = 0
                if (i == 0)
                {
                    // Membuat perulangan sebanyak 4x("No" + 2 spasi)
                    for (j = 0; j < 4; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 1
                if (i == 1)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris nama + 2 spasi
                    for (j = 0; j < idProduct + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 1
                if (i == 2)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris name + 2 spasi
                    for (j = 0; j < name + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 3
                if (i == 3)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris brand + 2 spasi
                    for (j = 0; j < brand + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 4
                if (i == 4)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris price + 2 spasi
                    for (j = 0; j < price + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 5
                if (i == 5)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanjang pada baris size + 2 spasi
                    for (j = 0; j < size + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 6
                if (i == 6)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada baris material + 2 spasi
                    for (j = 0; j < material + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 7
                if (i == 7)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada gender + 2 spasi
                    for (j = 0; j < gender + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 8
                if (i == 8)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada color + 2 spasi
                    for (j = 0; j < color + 2; j++)
                    {
                        cout << "-";
                    }
                }
                // Jika i = 9
                if (i == 9)
                {
                    cout << "+";
                    // Membuat perulangan sebanyak kata terpanajgn pada sleeve type + 2 spasi
                    for (j = 0; j < sleeve_type + 2; j++)
                    {
                        cout << "-";
                    }
                }
            }
            // ujung kanan table
            cout << "+";
            cout << "" << endl;
        }
    }

    // Destruktor
    ~Table()
    {
    }
};