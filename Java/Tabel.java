
/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan Java ----- //

public class Tabel {
    private int baris;
    // Banyaknya baris
    private int kolom;
    // Banyaknya kolom

    Tabel() {} // konstruktor Tabel
    Tabel(int baris, int kolom) {
        // konstruktor langsung isi attribut
        this.baris = baris;
        this.kolom = kolom;
    }

    // Metode Setter and Getter untuk atribut private
    // Setter ID
    public void set_baris(int baris) {
        this.baris = baris;
    }

    // Get Baris
    public int get_baris() {
        return baris;
    }

    // Set Kolom
    public void set_kolom(int kolom) {
        this.kolom = kolom;
    }

    // Get Kolom
    public int get_kolom() {
        return kolom;
    }

    // Membuat Metode untuk buat tabel
    public void buatBaris(String[] isi, int batas, int idx, int idProduct, int name, int brand, int price, int size, int material, int gender, int color, int sleeve_type) {
        int i = 0, j = 0;

        // Jika index = 0 (membuat kerangka tabel atas)
        if(idx == 0){
            System.out.print("\n+");
            // Membuat perulangan sebanyak 5x (banyak jumlah elemen dalam 1 baris)
            for(i = 0; i < isi.length; i++) {
                // Jika i = 0
                if(i == 0){
                    // Membuat perulangan sebanyak 4x("No" + 2 spasi)
                    for(j = 0; j < 4; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 1){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada baris ID + 2 spasi
                    for(j = 0; j < idProduct + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 2){
                System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada baris name + 2 spasi
                    for(j = 0; j < name + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 3){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada baris brand + 2 spasi
                    for(j = 0; j < brand + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 4){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada price + 2 spasi
                    for(j = 0; j < price + 2; j++) {
                        System.out.print("-");
                    }
                }
                // Jika i = 4
                if(i == 5){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada size + 2 spasi
                    for(j = 0; j < size + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 6){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada material + 2 spasi
                    for(j = 0; j < material + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 7){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada gender + 2 spasi
                    for(j = 0; j < gender + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 8){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada color + 2 spasi
                    for(j = 0; j < color + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 9){
                    System.out.print("+");
                    // Membuat perulangan sebanyak kata terpanjang pada sleeve_type + 2 spasi
                    for(j = 0; j < sleeve_type + 2; j++) {
                        System.out.print("-");
                    }
                }
            }
            System.out.print("+");
            System.out.println("");
        }

        // Membuat baris untuk jdul
        if (idx == 0){
            System.out.print("|No  ");
            System.out.print("|ID");
            for (j = 0 ; j < idProduct ; j++){          
                System.out.print(" ");
            }
            System.out.print("|Name");
            for (j = 0 ; j < name - 2; j++){     
                System.out.print(" ");
            }
            System.out.print("|Brand");
            for (j = 0 ; j < brand - 3; j++){   
                System.out.print(" ");
            }
            System.out.print("|Price");
            for (j = 0 ; j < price - 3; j++){   
                System.out.print(" ");
            }
            System.out.print("|Size");
            for (j = 0 ; j < size - 2; j++){   
                System.out.print(" ");
            }
            System.out.print("|Material");
            for (j = 0 ; j < material - 6; j++){   
                System.out.print(" ");
            }
            System.out.print("|Gender");
            for (j = 0 ; j < gender - 4; j++){   
                System.out.print(" ");
            }
            System.out.print("|Color");
            for (j = 0 ; j < color - 3; j++){   
                System.out.print(" ");
            }
            System.out.print("|Sleeve Type");
            for (j = 0 ; j < sleeve_type - 9; j++){   
                System.out.print(" ");
            }
            System.out.print("|");     
            System.out.println("");
        }

        // Jika index = 0 (membuat kerangka tabel bawah judul)
        if(idx == 0){
            System.out.print("+");
            for(i = 0; i < isi.length; i++) {
                if(i == 0){
                    for(j = 0; j < 4; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 1){
                    System.out.print("+");
                    for(j = 0; j < idProduct + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 2){
                System.out.print("+");
                    for(j = 0; j < name + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 3){
                    System.out.print("+");
                    for(j = 0; j < brand + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 4){
                    System.out.print("+");
                    for(j = 0; j < price + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 5){
                    System.out.print("+");
                    for(j = 0; j < size + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 6){
                    System.out.print("+");
                    for(j = 0; j < material + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 7){
                    System.out.print("+");
                    for(j = 0; j < gender + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 8){
                    System.out.print("+");
                    for(j = 0; j < color + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 9){
                    System.out.print("+");
                    for(j = 0; j < sleeve_type + 2; j++) {
                        System.out.print("-");
                    }
                }
            }
            System.out.print("+");
            System.out.println("");
        }

        // Buat baris isi
        for(i = 0; i < isi.length; i++) {
            if(i == 0){
                System.out.print("|" + isi[i] + "   ");
            }
            else if(i == 1){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < idProduct - isi[i].length() + 2 ; j++){      
                    System.out.print(" ");                  
                }
            }
            else if(i == 2){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < name - isi[i].length() + 2 ; j++){    
                    System.out.print(" ");                  
                }
            }
            else if(i == 3){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < brand - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            else if(i == 4){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < price - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            else if(i == 5){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < size - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            else if(i == 6){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < material - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            else if(i == 7){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < gender - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            else if(i == 8){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < color - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            else if(i == 9){
                System.out.print("|" + isi[i]);
                for (j = 0 ; j < sleeve_type - isi[i].length() + 2 ; j++){  
                    System.out.print(" ");                  
                }
            }
            if(i == isi.length - 1){
                System.out.print("|");
            }
        }
        System.out.println("");

        // Membuat kerangka tabel pada baris terakhir
        if(idx == batas - 1) {
            System.out.print("+");
            for(i = 0; i < isi.length; i++) {
                if(i == 0){
                    for(j = 0; j < 4; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 1){
                    System.out.print("+");
                    for(j = 0; j < idProduct + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 2){
                    System.out.print("+");
                    for(j = 0; j < name + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 3){
                    System.out.print("+");
                    for(j = 0; j < brand + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 4){
                    System.out.print("+");
                    for(j = 0; j < price + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 5){
                    System.out.print("+");
                    for(j = 0; j < size + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 6){
                    System.out.print("+");
                    for(j = 0; j < material + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 7){
                    System.out.print("+");
                    for(j = 0; j < gender + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 8){
                    System.out.print("+");
                    for(j = 0; j < color + 2; j++) {
                        System.out.print("-");
                    }
                }
                if(i == 9){
                    System.out.print("+");
                    for(j = 0; j < sleeve_type + 2; j++) {
                        System.out.print("-");
                    }
                }
            }
            System.out.print("+");
            System.out.println("\n");
        }
    }
}