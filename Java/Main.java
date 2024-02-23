/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan Java ----- //

// Import library
import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        int nomor = 0;
        String name, brand, price, size, material, gender, color, sleeve_type;
        int display = 0;
        int idProduct = 0;
        int max = 0;
        ArrayList<Shirt> list = new ArrayList<>();      

        // Membuat scan
        Scanner scan = new Scanner(System.in);

        System.out.println("+--------------------------------------------+");
        System.out.println("|                                            |");
        System.out.println("+   Selamat Datang Di Program Bolip's CRUD   +");
        System.out.println("+    ( Create, Read, Update, and Delete )    +");
        System.out.println("|                                            |");
        System.out.println("+--------------------------------------------+");
        System.out.println("|            ~~~ Java Version ~~~            |");
        System.out.println("+--------------------------------------------+");

        // Program akan terus berjalan sampai display != 0
        while(display == 0){    
            try {
                // Tampilan untuk pilihan menu
                System.out.println("Silahkan Pilih Salah Satu Menu :");
                System.out.println("[1] Untuk Menambah Data Shirt");
                // System.out.println("[2] Untuk Mengubah Data Shirt");
                // System.out.println("[3] Untuk Menghapus Data Shirt");
                System.out.println("[2] Untuk Menampilkan Seluruh Data Shirt");
                System.out.println("[5] Untuk Keluar\n");

                // Scan nomor pada menu
                System.out.print("Menu yang dipilih : ");
                nomor = scan.nextInt();

            } catch (Exception e) {
                // Jika input bukan integer
                System.out.println( "\nInput yang diberikan bukan integer!\n");
                continue;
            }
            // Buat longkap baris / biar sejajar
            scan.nextLine();

            // Jika pilih menu nomor 1           
            if (nomor == 1){
                try {
                    // Scan banyak anggota yang ingin di input
                    System.out.print("\nJumlah Shirt yang Ingin Ditambahkan : ");
                    max = scan.nextInt();
                    scan.nextLine();

                    // Looping sebanyak max
                    for(int i = 0; i < max; i++){
                        // Mendata per-Shirt
                        System.out.println("-----------------------------------------");
                        System.out.println("Data Shirt ke - " + Integer.toString(i+1));

                        // Meminta scan id
                        System.out.print("Masukkan ID           : ");
                        idProduct = scan.nextInt();
                        scan.nextLine();

                        // Meminta scan nama
                        System.out.print("Masukkan name         : ");
                        name = scan.nextLine();

                        // Meminta scan brand
                        System.out.print("Masukkan brand        : ");
                        brand = scan.nextLine();

                        // Meminta scan price
                        System.out.print("Masukkan price        : ");
                        price = scan.nextLine();

                        // Meminta scan size
                        System.out.print("Masukkan size         : ");
                        size = scan.nextLine(); 

                        // Meminta scan material
                        System.out.print("Masukkan material     : ");
                        material = scan.nextLine(); 

                        // Meminta scan gender
                        System.out.print("Masukkan gender       : ");
                        gender = scan.nextLine(); 

                        // Meminta scan color
                        System.out.print("Masukkan color        : ");
                        color = scan.nextLine(); 

                        // Meminta scan sleeve_type
                        System.out.print("Masukkan sleeve_type  : ");
                        sleeve_type = scan.nextLine(); 

                        // Membuat objek sementara
                        Shirt temp = new Shirt();

                        // Masukkan input ke objek sementara
                        temp.setIdProduct(String.valueOf(idProduct)); temp.setName(name); temp.setBrand(brand); temp.setPrice(price); temp.setSize(size); temp.setMaterial(material); temp.setGender(gender); temp.setColor(color); temp.setSleeveType(sleeve_type);  
                        // Masukkan objek sementara ke daftar list
                        list.add(temp);
                    }
                } catch (Exception e) {
                    // Jika bukan integer
                    System.out.println( "\nTerjadi kesalahan dalam membaca input!\n");
                    return;
                }
                // print ketika berhasil menambah data
                System.out.println("\n" + max + " Data Berhasil Ditambahkan!\n");
            }

            // Jika pilih nomor 2      
            else if(nomor == 2){
                // Ketika terdapat elemen dalam list
                if(list.size() > 0){
                    /*
                        Membuat objek tab dari kelas Tabel dengan panjang baris
                        sesuai dengan jumlah elemen dalam list dan kolom sebesar 5
                    */
                    Tabel tab = new Tabel(list.size(), 9);
                    int maxID = 2;          // "id" = 2
                    int maxName = 4;        // "nama" = 4
                    int maxBrand = 5;       // "Brand" = 5
                    int maxPrice = 5;       // "Price" = 5
                    int maxSize = 4;        // "Size" = 4
                    int maxMaterial = 8;    // "Material" = 8
                    int maxGender = 6;      // "Gender" = 6
                    int maxColor = 5;       // "Color" = 5
                    int maxSleeveType = 10; // "SleeveType" = 10

                    // Perulangan untuk mencaari yang terpanjang pada baris id
                    for(int i=0; i<list.size() ; i++){
                        String idString = String.valueOf(list.get(i).getIdProduct());
                        int panjangidString = idString.length();
                        if (maxID < panjangidString){ 
                            maxID = panjangidString; 
                        }
                    }
                    
                    // Perulangan untuk mencaari yang terpanjang pada baris name
                    for(int i=0; i < list.size(); i++){
                        if (maxName < list.get(i).getName().length()){ 
                            maxName = list.get(i).getName().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris brand
                    for(int i=0; i<list.size() ; i++){
                        if (maxBrand < list.get(i).getBrand().length()){ 
                            maxBrand = list.get(i).getBrand().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris price
                    for(int i=0; i<list.size() ; i++){
                        if (maxPrice < list.get(i).getPrice().length()){ 
                            maxPrice = list.get(i).getPrice().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris size
                    for(int i=0; i<list.size() ; i++){
                        if (maxSize < list.get(i).getSize().length()){ 
                            maxSize = list.get(i).getSize().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris material
                    for(int i=0; i<list.size() ; i++){
                        if (maxMaterial < list.get(i).getMaterial().length()){ 
                            maxMaterial = list.get(i).getMaterial().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris gender
                    for(int i=0; i<list.size() ; i++){
                        if (maxGender < list.get(i).getGender().length()){ 
                            maxGender = list.get(i).getGender().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris color
                    for(int i=0; i<list.size() ; i++){
                        if (maxColor < list.get(i).getColor().length()){ 
                            maxColor = list.get(i).getColor().length(); 
                        }
                    }

                    // Perulangan untuk mencaari yang terpanjang pada baris sleeve type
                    for(int i=0; i<list.size() ; i++){
                        if (maxSleeveType < list.get(i).getSleeveType().length()){ 
                            maxSleeveType = list.get(i).getSleeveType().length(); 
                        }
                    }

                    // Membuat perulangan untuk menampilkan output beserta tabel
                    for(int i=0; i < list.size(); i++) {
                        // Membuat array untuk menampung elemen yang mau di print
                        String[] arrstr = new String[10];
                        arrstr[0] = "" + Integer.toString(i+1);
                        arrstr[1] = "" + list.get(i).getIdProduct();
                        arrstr[2] = "" + list.get(i).getName();
                        arrstr[3] = "" + list.get(i).getBrand();
                        arrstr[4] = "" + list.get(i).getPrice();
                        arrstr[5] = "" + list.get(i).getSize();
                        arrstr[6] = "" + list.get(i).getMaterial();
                        arrstr[7] = "" + list.get(i).getGender();
                        arrstr[8] = "" + list.get(i).getColor();
                        arrstr[9] = "" + list.get(i).getSleeveType();

                        // Memanggil metode buat baris
                        tab.buatBaris(arrstr, list.size(), i, maxID, maxName, maxBrand, maxPrice, maxSize, maxMaterial, maxGender, maxColor, maxSleeveType);
                    }
                }
                // Jika tidak ada elemen dalam list
                else System.out.println("\nTidak ada list baju yang tersedia yang tersedia, dimohon untuk mengisi data terlebih dahulu!\n");
            }

            // Jika pilih menu nomor 5           
            else if(nomor == 5){
                System.out.println("\n+-------------------------------------------------+");
                System.out.println("+  Makasih Udah Menggunakan Program Bolip's CRUD  +");
                System.out.println("+-------------------------------------------------+");
                System.out.println("+                                                 +");
                System.out.println("+               kalo kamu fans emyu               +");
                System.out.println("+        <3 semoga harimu menyenangkan <3         +");
                System.out.println("+                                                 +");
                System.out.println("+-------------------------------------------------+\n");

                display = 1;
            }
            // Jika pilih noomr yang tidak ada di menu           
            else System.out.println("\nMenu " + nomor + " tidak tersedia, mohon memasukkan angka sesuai dengan menu yang tersedia!\n");            
        }        


    }
}
