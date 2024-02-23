# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Membuat kelas table
class Table:
    # Membuat atribut Private
    # banyaknya baris dan kolom
    __baris = 0
    __kolom = 0

    # Constructor with default initialization
    def __init__(self, baris=0, kolom=0):
        self.__baris = baris
        self.__kolom = kolom

    # Setter and Getter methods for private attributes
    # Set Baris
    def setBaris(self, baris):
        self.__baris = baris

    # Get Baris
    def getBaris(self):
        return self.__baris

    # Set KOlom
    def setKolom(self, kolom):
        self.__kolom = kolom

    # Get KOlom
    def getKolom(self):
        return self.__kolom

    # Membuat Metode untuk buat tabel
    def buatBaris(self, isi, batas, idx, idProduct, name, brand, price, size, material, gender, color, sleeve_type):
        i = 0
        j = 0

        # jika index = 0 (membuat kerangka tabel atas)
        if idx == 0:
            print("+", end="")
            # Membuat perulangan sebanyak 10x(banyak jumlah elemen dalam 1 baris)
            for i in range(10):
                # jika i = 0
                if i == 0:
                    # Membuat perulangan untuk garis sebanyak 4x("No" + 2spasi)
                    for j in range(4):
                        print("-", end="")
                # jika i = 1
                if i == 1:
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2spasi
                    print("+", end="")
                    for j in range(idProduct + 2):
                        print("-", end="")
                # jika i = 2
                if i == 2:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris name + 2spasi
                    for j in range(name + 2):
                        print("-", end="")
                # jika i = 3
                if i == 3:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris brand + 2spasi
                    for j in range(brand + 2):
                        print("-", end="")
                # jika i = 4
                if i == 4:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris price + 2spasi
                    for j in range(price + 2):
                        print("-", end="")
                # jika i = 5
                if i == 5:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris size + 2spasi
                    for j in range(size + 2):
                        print("-", end="")
                # jika i = 6
                if i == 6:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanajgn pada baris material + 2spasi
                    for j in range(material + 2):
                        print("-", end="")
                # jika i = 7
                if i == 7:
                    print("+", end="")
                    # Membuat perulangan  untuk garis sebanyak kata terpanajgn pada gender + 2spasi
                    for j in range(gender + 2):
                        print("-", end="")
                # jika i = 8
                if i == 8:
                    print("+", end="")
                    # Membuat perulangan  untuk garis sebanyak kata terpanajgn pada color + 2spasi
                    for j in range(color + 2):
                        print("-", end="")
                # jika i = 9
                if i == 9:
                    print("+", end="")
                    # Membuat perulangan  untuk garis sebanyak kata terpanajgn pada sleeve_type + 2spasi
                    for j in range(sleeve_type + 2):
                        print("-", end="")
            print("+")

        # buat baris untuk judul
        if idx == 0:
            print("|No  ", end="")
            print("|ID", end="")
            for j in range(idProduct):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Name", end="")
            for j in range(name - 2):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Brand", end="")
            for j in range(brand - 3):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Price", end="")
            for j in range(price - 3):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Size", end="")
            for j in range(size - 2):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Material", end="")
            for j in range(material - 6):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Gender", end="")
            for j in range(gender - 4):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Color", end="")
            for j in range(color - 3):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|Sleeve Type", end="")
            for j in range(sleeve_type - 9):
                # meminta uoutputan berupa spasi
                print(" ", end="")
            print("|")

        # jika index = 0 (membuat kerangka tabel bawah judul)
        if idx == 0:
            #  Ujung kiri tabel
            print("+", end="")
            for i in range(10):
                if i == 0:
                    # Membuat perulangan untuk garis sebanyak 4
                    for j in range(4):
                        print("-", end="")
                if i == 1:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris nama + 2spasi
                    for j in range(idProduct + 2):
                        print("-", end="")
                if i == 2:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris name + 2spasi
                    for j in range(name + 2):
                        print("-", end="")
                if i == 3:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris brand + 2spasi
                    for j in range(brand + 2):
                        print("-", end="")
                if i == 4:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris price + 2spasi
                    for j in range(price + 2):
                        print("-", end="")
                if i == 5:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris size + 2spasi
                    for j in range(size + 2):
                        print("-", end="")
                if i == 6:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris material + 2spasi
                    for j in range(material + 2):
                        print("-", end="")
                if i == 7:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris gender + 2spasi
                    for j in range(gender + 2):
                        print("-", end="")
                if i == 8:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris color + 2spasi
                    for j in range(color + 2):
                        print("-", end="")
                if i == 9:
                    print("+", end="")
                    # Membuat perulangan untuk garis sebanyak kata terpanjang pada baris sleeve_type + 2spasi
                    for j in range(sleeve_type + 2):
                        print("-", end="")
            # penutup table(ujung kanan)
            print("+")

        # buat baris isi kolom atribut
        for i in range(10):
            if i == 0:
                # tampil nomor
                print("|" + isi[i] + "   ", end="")
            elif i == 1:
                # tampil nama
                print("|" + isi[i], end="")
                for j in range(idProduct - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 2:
                # tampil name
                print("|" + isi[i], end="")
                for j in range(name - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 3:
                # tampil brand
                print("|" + isi[i], end="")
                for j in range(brand - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 4:
                # tampil price
                print("|" + isi[i], end="")
                for j in range(price - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 5:
                # tampil size
                print("|" + isi[i], end="")
                for j in range(size - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 6:
                # tampil material
                print("|" + isi[i], end="")
                for j in range(material - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 7:
                # tampil gender
                print("|" + isi[i], end="")
                for j in range(gender - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 8:
                # tampil color
                print("|" + isi[i], end="")
                for j in range(color - len(isi[i]) + 2):
                    print(" ", end="")
            elif i == 9:
                # tampil sleeve_type
                print("|" + isi[i], end="")
                for j in range(sleeve_type - len(isi[i]) + 2):
                    print(" ", end="")
            # Membuat garis penutup table pada setiap atibut baris
            if i == (9):
                print("|")
        # print("")

        # Membuat kerangka tabel pada baris tearkhir
        if idx == batas - 1:
            print("+", end="")
            for i in range(10):
                if i == 0:
                    # Membuat perulangan sebanyak 4x("No" + 2spasi)
                    for j in range(4):
                        print("-", end="")
                if i == 1:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris idProduct + 2spasi
                    for j in range(idProduct + 2):
                        print("-", end="")
                if i == 2:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris name + 2spasi
                    for j in range(name + 2):
                        print("-", end="")
                if i == 3:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris brand + 2spasi
                    for j in range(brand + 2):
                        print("-", end="")
                if i == 4:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris price + 2spasi
                    for j in range(price + 2):
                        print("-", end="")
                if i == 5:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanjang pada baris size + 2spasi
                    for j in range(size + 2):
                        print("-", end="")
                if i == 6:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada baris material + 2spasi
                    for j in range(material + 2):
                        print("-", end="")
                if i == 7:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada gender + 2spasi
                    for j in range(gender + 2):
                        print("-", end="")
                if i == 8:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada color + 2spasi
                    for j in range(color + 2):
                        print("-", end="")
                if i == 9:
                    print("+", end="")
                    # Membuat perulangan sebanyak kata terpanajgn pada sleeve_type + 2spasi
                    for j in range(sleeve_type + 2):
                        print("-", end="")
            # ujung kanan table
            print("+")