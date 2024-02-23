# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Import library and file.
from Shirt import Shirt
from Table import Table

# ------------ Membuat Variabel ----------------
# - nomor = variabel untuk mengatur menu
# - idProduct, color, name, brand, price, size, material, gender, color, sleeve type = String untuk menyimpan nilai sementara dari masing2 nilai
# - display = variable utk mengatur jalannya program
# - idx = sebagai index nilai (indek update / delete)
# - max = sebagai batas inputan menu tambah
# - LShirt = list yang berisi objek dari kelas Shirt

nomor = 0
idProduct = ""
name = ""
brand = ""
price = ""
size = ""
material = ""
gender = ""
color = ""
sleeve_type = ""
display = 0
idx = 0
max = 0
LShirt = []

# Tampilan untuk pilihan menu
print("+--------------------------------------------+")
print("|                                            |")
print("+   Selamat Datang Di Program Bolip's CRUD   +")
print("+    ( Create, Read, Update, and Delete )    +")
print("|                                            |")
print("+--------------------------------------------+")
print("|           ~~~ Python Version ~~~           |")
print("+--------------------------------------------+\n")


# Program akan terus berjalan sampai display != 0
while display == 0:
    # Tampilan untuk pilihan menu
    print("Silahkan Pilih Salah Satu Menu :")
    print("[1] Untuk Menambah Data Pakaian")
    print("[2] Untuk Mengubah Data Pakaian")
    print("[3] Untuk Menghapus Data Pakaian")
    print("[4] Untuk Menampilkan Seluruh Data Pakaian")
    print("[5] Untuk Keluar\n")

    # Scan nomor pada menu
    print("Menu yang dipilih : ", end='')
    nomor = int(input())

    # jika pilih menu nomor 1
    if nomor == 1:
        # Scan banyak Shirt yang ingin di input
        print("\nJumlah pakaian yang Ingin Ditambahkan : ", end='')
        max = int(input())

        # Looping sebanyak max
        for i in range(max):
            # Mendata per-Shirt
            print("-----------------------------------------")
            print("Data Pakaian ke-", i+1)

            # Meminta scan ID
            print("Input ID           : ", end='')
            idProduct = str(input())

            # Meminta scan Name
            print("Input Name         : ", end='')
            name = str(input())

            # Meminta scan Brand
            print("Input Brand        : ", end='')
            brand = str(input())

            # Meminta scan Price
            print("Input Price        : ", end='')
            price = str(input())

            # Meminta scan Size
            print("Input Size         : ", end='')
            size = str(input())

            # Meminta scan Material
            print("Input Material     : ", end='')
            material = str(input())

            # Meminta scan Gender
            print("Input Gender       : ", end='')
            gender = str(input())

            # Meminta scan Color
            print("Input Color        : ", end='')
            color = str(input())

            # Meminta scan Sleeve Type
            print("Input Sleeve Type  : ", end='')
            sleeve_type = str(input())

            # Masukkan inputan ke dalam list untuk kelas Shirt
            LShirt.append(Shirt(idProduct, name, brand, price, size, material, gender, color, sleeve_type))
        
        # print ketika berhasil menambah data
        print("\n", max, "Data Berhasil Ditambahkan!\n")
        
    # jika pilih menu nomor 2
    elif nomor == 2:
        # Ketika terdapat elemen dalam list
        if len(LShirt) > 0:
            print(
                # Scan idx untuk Shirt yang ingin diubah datanya
                "\nMasukkan nomor pakaian yang ingin diubah : ",  end='')
            idx = int(input())

            # Jika idx yang diberikan merupakan bagian dari daftar list
            if idx <= len(LShirt):

                # Meminta scan ID
                print("Input ID           : ", end='')
                idProduct = str(input())

                # Meminta scan Name
                print("Input Name         : ", end='')
                name = str(input())

                # Meminta scan Brand
                print("Input Brand        : ", end='')
                brand = str(input())

                # Meminta scan Price
                print("Input Price        : ", end='')
                price = str(input())

                # Meminta scan Size
                print("Input Size         : ", end='')
                size = str(input())

                # Meminta scan Material
                print("Input Material     : ", end='')
                material = str(input())

                # Meminta scan Gender
                print("Input Gender       : ", end='')
                gender = str(input())

                # Meminta scan Color
                print("Input Color        : ", end='')
                color = str(input())

                # Meminta scan Sleeve Type
                print("Input Sleeve Type  : ", end='')
                sleeve_type = str(input())

                # Print ketika berhasil mengubah data
                print("\nData pakaian nomor {} berhasil diubah\n".format(idx))

                # Ubah isi nilai untuk masing2 nilai
                LShirt[idx-1].setID(idProduct)
                LShirt[idx-1].setName(name)
                LShirt[idx-1].setBrand(brand)
                LShirt[idx-1].setPrice(price)
                LShirt[idx-1].setSize(size)
                LShirt[idx-1].setMaterial(material)
                LShirt[idx-1].setGender(gender)
                LShirt[idx-1].setColor(color)
                LShirt[idx-1].setSleeve_type(sleeve_type)
            else:
                # Jika idx yang diberikan merupakan bukan bagian dari daftar list
                print("\nMohon maaf, data pakaian dengan nomor {} tidak dapat ditemukan.\n".format(idx))
        # JIka tidak ada elemn dalam list
        else:
            print("\nTidak ada list data pakaian yang tersedia, dimohon untuk mengisi data terlebih dahulu!\n")

    # jika pilih menu nomor 3
    elif nomor == 3:
        # Ketika terdapat elemen dalam list
        if len(LShirt) > 0:
            # Scan idx untuk Shirt yang ingin dihapus datanya
            print(
                "Silahkan isi nomor data pakaian yang ingin dihapus : ", end='')
            idx = int(input())

            # Jika idx yang diberikan merupakan bagian dari daftar list
            if idx <= len(LShirt):
                # Hapus data sesuai index
                LShirt.pop(idx-1)
                # print ketika berhasil megnhapus data
                print("\nData Berhasil Dihapus!\n")
            else:
                # Jika idx yang diberikan bukan bagian dari daftar list
                print(
                    "\nNomor yang anda masukkan tidak ada!\n")
        else:
            # JIka tidak ada elemn dalam list
            print(
                "\nPakaian nomor ", idx, " berhasil dihapus!\n")
            
    # Jika pilih menu nomor 4
    elif nomor == 4:
        # Ketika terdapat elemen dalam list
        if len(LShirt) > 0:
            # Membuat objek tab dari kelas Table dengan panjang
            # baris sesuai dengan jumlah elemen dalam list dan kolom sebesar 5
            tab = Table(len(LShirt), 10)
            maxID = 2;          # "ID" = 2
            maxName = 4;        # "Name" = 4
            maxBrand = 5;       # "Brand" = 5
            maxPrice = 5;       # "Price" = 5
            maxSize = 4;        # "Size" = 4
            maxMaterial = 8;    # "Material" = 8
            maxGender = 6;      # "Gender" = 6
            maxColor = 5;       # "Color" = 5
            maxSleeveType = 10; # "SleeveType" = 10

            # Perulangan untuk mencaari yang terpanjang pada baris nama
            for shirtt in LShirt:
                if maxID < len(shirtt.getID()):
                    maxID = len(shirtt.getID())
                # Perulangan untuk mencaari yang terpanjang pada baris nim
                if maxName < len(shirtt.getName()):
                    maxName = len(shirtt.getName())
                # Perulangan untuk mencaari yang terpanjang pada baris prodi
                if maxBrand < len(shirtt.getBrand()):
                    maxBrand = len(shirtt.getBrand())
                # Perulangan untuk mencaari yang terpanjang pada baris fakultas
                if maxPrice < len(shirtt.getPrice()):
                    maxPrice = len(shirtt.getPrice())
                # Perulangan untuk mencaari yang terpanjang pada baris fakultas
                if maxSize < len(shirtt.getSize()):
                    maxSize = len(shirtt.getSize())
                # Perulangan untuk mencaari yang terpanjang pada baris size
                if maxMaterial < len(shirtt.getMaterial()):
                    maxMaterial = len(shirtt.getMaterial())
                # Perulangan untuk mencaari yang terpanjang pada baris gender
                if maxGender < len(shirtt.getGender()):
                    maxGender = len(shirtt.getGender())
                # Perulangan untuk mencaari yang terpanjang pada baris materialersitas
                if maxColor < len(shirtt.getGender()):
                    maxColor = len(shirtt.getGender())
                # Perulangan untuk mencaari yang terpanjang pada baris materialersitas
                if maxSleeveType < len(shirtt.getColor()):
                    maxSleeveType = len(shirtt.getColor())

            i = 0  # inisialisasi nilai i
            
            # Membuat perulangan untuk menampilkan output beserta tabel
            for shirtt in LShirt:
                # Membuat list untuk elemen yang mau di print
                llist = []
                # Memasukan setiap elemen ke dalam list
                llist.insert(0, str(i+1))
                llist.insert(1, shirtt.getID())
                llist.insert(2, shirtt.getName())
                llist.insert(3, shirtt.getBrand())
                llist.insert(4, shirtt.getPrice())
                llist.insert(5, shirtt.getSize())
                llist.insert(6, shirtt.getMaterial())
                llist.insert(7, shirtt.getGender())
                llist.insert(8, shirtt.getColor())
                llist.insert(9, shirtt.getSleeve_type())

                # Memanggil metode buat baris
                tab.buatBaris(llist, len(LShirt), i, maxID, maxName, maxBrand, maxPrice, maxSize, maxMaterial, maxGender, maxColor, maxSleeveType)
                i += 1  # iterasi i
        else:
            print("\nTidak ada list baju yang tersedia, dimohon untuk mengisi data terlebih dahulu!\n")
    
    # jika pilih menu nomor 5
    elif nomor == 5:
        print("\n+-------------------------------------------------+")
        print("+      Thanks for Using Bolip's CRUD Program      +")
        print("+-------------------------------------------------+")
        print("+                                                 +")
        print("+               kalo kamu fans emyu               +")
        print("+        <3 semoga harimu menyenangkan <3         +")
        print("+                                                 +")
        print("+-------------------------------------------------+\n")
        
        display = 1

    # jika pilih nomor yang tidak ada di menu
    else:
        print("\nMenu ", nomor, " tidak tersedia, mohon memasukkan angka sesuai dengan menu yang tersedia!\n")