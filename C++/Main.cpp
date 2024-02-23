/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import library and file.
#include <iostream>
#include <bits/stdc++.h>
#include "Shirt.cpp"
#include "Table.cpp"
#include <cmath>
#include <string>

// Using standard namespace.
using namespace std;
int main()
{
    /*
        ------------ Membuat Variabel ----------------
        - nomor = variabel untuk mengatur menu
        - name,size, brand, price = String untuk menyimpan nilai sementara dari masing2 nilai
        - display = variable utk mengatur jalannya program
        - idx = sebagai index nilai (indek update / delete)
        - max = sebagai batas inputan menu tambah
        - llist = list yang berisi objek dari kelas Shirt
    */
    int nomor = 0;
    string idProduct, name, brand, price, size, material, gender, color, sleeve_type;
    int display = 0;
    int idx = 0;
    int max = 0;
    list<Shirt> llist;

    // Tampilan untuk pilihan menu
    cout << "+--------------------------------------------+" << endl;
    cout << "|                                            |" << endl;
    cout << "+      Welcome to Bolip's CRUD Program       +" << endl;
    cout << "+    ( Create, Read, Update, and Delete )    +" << endl;
    cout << "|                                            |" << endl;
    cout << "+--------------------------------------------+" << endl;
    cout << "|            ~~~ C++ Version ~~~             |" << endl;
    cout << "+--------------------------------------------+" << endl;

    // Program akan terus berjalan sampai display != 0
    while (display == 0)
    {
        // Tampilan untuk pilihan menu
        cout << "Silahkan Pilih Salah Satu Menu :" << endl;
        cout << "[1] Untuk Menambah Data Shirt" << endl;
        cout << "[2] Untuk Mengubah Data Shirt" << endl;
        cout << "[3] Untuk Menghapus Data Shirt" << endl;
        cout << "[4] Untuk Menampilkan Seluruh Data Shirt" << endl;
        cout << "[5] Untuk Keluar\n" << endl;

        cout << "Menu yang dipilih : ";
        cin >> nomor;

        // jika pilih menu nomor 1
        if (nomor == 1)
        {
            // Scan banyak Shirt yang ingin di input
            cout << "\nJumlah pakaian yang Ingin Ditambahkan : ";
            cin >> max;

            // Looping sebanyak max
            for (int i = 0; i < max; i++)
            {
                // Mendata per-Shirt
                cout << "-----------------------------------------" << endl;
                cout << "Data Pakaian ke-" << i + 1 << endl;

                // Meminta scan idProduct
                cout << "Input ID           : ";
                getline(cin >> ws, idProduct);   // "cin >> ws" digunakan untuk membuang whitespace yang tersisa dalam buffer input sebelum memanggil getline()

                // Meminta scan name
                cout << "Input Name         : ";
                getline(cin >> ws, name);

                // Meminta scan brand
                cout << "Input Brand        : ";
                getline(cin >> ws, brand);

                // Meminta scan price
                cout << "Input Price        : ";
                getline(cin >> ws, price);

                // Meminta scan size
                cout << "Input Size         : ";
                getline(cin >> ws, size);

                // Meminta scan material
                cout << "Input Material     : ";
                getline(cin >> ws, material);

                // Meminta scan gender
                cout << "Input Gender       : ";
                getline(cin >> ws, gender);

                // Meminta scan color
                cout << "Input Color        : ";
                getline(cin >> ws, color);

                // Meminta scan sleeve type
                cout << "Input Sleeve Type  : ";
                getline(cin >> ws, sleeve_type);

                // Membuat objek sementara
                Shirt temp;

                // Masukkan input ke objek sementara
                temp.setID(idProduct);
                temp.setName(name);
                temp.setBrand(brand);
                temp.setPrice(price);
                temp.setSize(size);
                temp.setMaterial(material);
                temp.setGender(gender);
                temp.setColor(color);
                temp.setSleeve_type(sleeve_type);

                // Masukkan objek sementara ke daftar list
                llist.push_back(temp);
            }
            // print ketika berhasil menambah data
            cout << "\n" << max << " Data Berhasil Ditambahkan!\n" << endl;
        }
        // jika pilih menu nomor 1
        else if (nomor == 2)
        {
            // Ketika terdapat elemen dalam list
            if (llist.size() > 0)
            {
                // Scan idx untuk Shirt yang ingin diubah datanya
                cout << "Silahkan isi nomor data Shirt yang ingin diubah : ";
                cin >> idx;

                // Jika idx yang diberikan merupakan bagian dari daftar list
                if (idx <= llist.size())
                {
                    // Meminta scan idProduct
                    cout << "Input ID           : ";
                    getline(cin >> ws, idProduct);   // "cin >> ws" digunakan untuk membuang whitespace yang tersisa dalam buffer input sebelum memanggil getline()

                    // Meminta scan name
                    cout << "Input Name         : ";
                    getline(cin >> ws, name);

                    // Meminta scan brand
                    cout << "Input Brand        : ";
                    getline(cin >> ws, brand);

                    // Meminta scan price
                    cout << "Input Price        : ";
                    getline(cin >> ws, price);

                    // Meminta scan size
                    cout << "Input Size         : ";
                    getline(cin >> ws, size);

                    // Meminta scan material
                    cout << "Input Material     : ";
                    getline(cin >> ws, material);

                    // Meminta scan gender
                    cout << "Input Gender       : ";
                    getline(cin >> ws, gender);

                    // Meminta scan color
                    cout << "Input Color        : ";
                    getline(cin >> ws, color);

                    // Meminta scan sleeve type
                    cout << "Input Sleeve_type  : ";
                    getline(cin >> ws, sleeve_type);

                    // print ketika berhasil mengubah data
                    cout << "\nData Berhasil Diperbarui!\n" << endl;

                    auto iter = llist.begin(); // Inisialisasi iterator pada awal list
                    advance(iter, idx - 1);    // memindahkan iterator ke posisi ke-(idx-1)

                    // ubah isi nilai untuk masing2 nilai
                    iter->setID(idProduct);
                    iter->setName(name);
                    iter->setBrand(brand);
                    iter->setPrice(price);
                    iter->setSize(size);
                    iter->setMaterial(material);
                    iter->setGender(gender);
                    iter->setColor(color);
                    iter->setSleeve_type(sleeve_type);
                }
                // Jika idx yang diberikan merupakan bukan bagian dari daftar list
                else
                    cout << "\nNomor yang anda masukkan tidak ada!\n" << endl;
            }
            // JIka tidak ada elemn dalam list
            else
                cout << "\nPakaian dengan nomor " << idx << " tidak ditemukan\n" << endl;
        }

        // jika pilih menu nomor 3 (Delete)
        else if (nomor == 3)
        {
            // Ketika terdapat elemen dalam list
            if (llist.size() > 0)
            {
                // Scan idx untuk Shirt yang ingin dihapus datanya
                cout << "Silahkan isi nomor data pakaian yang ingin dihapus : ";
                cin >> idx;

                // Jika idx yang diberikan merupakan bagian dari daftar list
                if (idx <= llist.size())
                {
                    auto iter = llist.begin(); // Inisialisasi iterator pada awal list
                    advance(iter, idx - 1);    // memindahkan iterator ke posisi ke-(idx-1)
                    // Hapus data
                    llist.erase(iter);

                    // print ketika berhasil megnhapus data
                    cout << "\nData Berhasil Dihapus!\n" << endl;
                }
                // Jika idx yang diberikan bukan bagian dari daftar list
                else
                    cout << "\nNomor yang anda masukkan tidak ada!\n" << endl;
            }
            // JIka tidak ada elemn dalam list
            else
                cout << "\nPakaian nomor " << idx << " berhasil dihapus!\n" << endl;
        }

        // jika pilih menu nomor 4 (Tampil)
        else if (nomor == 4)
        {
            // Ketika terdapat elemen dalam list
            if (llist.size() > 0)
            {
                /*
                    Membuat objek tab dari kelas Table dengan panjang
                    baris sesuai dengan jumlah elemen dalam list dan kolom sebesar 10
                */
                Table tab = Table(llist.size(), 10);
                int maxID = 2;          // "id" = 2
                int maxName = 4;        // "nama" = 4
                int maxBrand = 5;       // "Brand" = 5
                int maxPrice = 5;       // "Price" = 5
                int maxSize = 4;        // "Size" = 4
                int maxMaterial = 8;    // "Material" = 8
                int maxGender = 6;      // "Gender" = 6
                int maxColor = 5;       // "Color" = 5
                int maxSleeveType = 10; // "SleeveType" = 10
                int i = 0;

                // Perulangan untuk mencaari yang terpanjang pada baris nama
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxID < it->getID().length())
                    {
                        maxID = it->getID().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris nim
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxName < it->getName().length())
                    {
                        maxName = it->getName().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris prodi
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxBrand < it->getBrand().length())
                    {
                        maxBrand = it->getBrand().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris nama
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxPrice < it->getPrice().length())
                    {
                        maxPrice = it->getPrice().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris nim
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxSize < it->getSize().length())
                    {
                        maxSize = it->getSize().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris prodi
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxMaterial < it->getMaterial().length())
                    {
                        maxMaterial = it->getMaterial().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris prodi
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxGender < it->getGender().length())
                    {
                        maxGender = it->getGender().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris fakultas
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxColor < it->getColor().length())
                    {
                        maxColor = it->getColor().length();
                    }
                }

                // Perulangan untuk mencaari yang terpanjang pada baris fakultas
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if (maxSleeveType < it->getSleeve_type().length())
                    {
                        maxSleeveType = it->getSleeve_type().length();
                    }
                }

                i = 0; // Inisialisasi nilai i

                // Membuat perulangan untuk menampilkan output beserta tabel
                for (list<Shirt>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    // Membuat array untuk elemen yang mau di print
                    string arrstr[10];

                    // Memasukan setiap elemen ke dalam array
                    arrstr[0] = to_string(i + 1); // mengubah i+1 menjadi string
                    arrstr[1] = it->getID();
                    arrstr[2] = it->getName();
                    arrstr[3] = it->getBrand();
                    arrstr[4] = it->getPrice();
                    arrstr[5] = it->getSize();
                    arrstr[6] = it->getMaterial();
                    arrstr[7] = it->getGender();
                    arrstr[8] = it->getColor();
                    arrstr[9] = it->getSleeve_type();

                    // Memanggil metode buat baris
                    tab.buatBaris(arrstr, llist.size(), i, maxID, maxName, maxBrand, maxPrice, maxSize, maxMaterial, maxGender, maxColor, maxSleeveType);
                    i++; // Iterasi i
                }
            }
            // jika tidak ada elemen dalam list
            else{
                cout << "\nTidak ada list baju yang tersedia, dimohon untuk mengisi data terlebih dahulu!\n" << endl;
            }
        }

        // jika pilih menu nomor 5 (keluar) -> dispay =1
        else if (nomor == 5)
        {
            cout << "\n+-------------------------------------------------+" << endl;
            cout << "+      Thanks for Using Bolip's CRUD Program      +" << endl;
            cout << "+-------------------------------------------------+" << endl;
            cout << "+                                                 +" << endl;
            cout << "+               kalo kamu fans emyu               +" << endl;
            cout << "+        <3 semoga harimu menyenangkan <3         +" << endl;
            cout << "+                                                 +" << endl;
            cout << "+-------------------------------------------------+" << endl;
            display = 1;
        }

        // Jika nomor yang dipilih tidak ada dalam menu
        else{
            cout << "\nMenu " << nomor << " tidak tersedia, mohon memasukkan angka sesuai dengan menu yang tersedia!\n" << endl;
        }
    }
}