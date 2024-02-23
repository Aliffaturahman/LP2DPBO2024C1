/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan Java ----- //

public class Shirt extends Clothing {
    //Atribut Private:
    // NIM Shirt
    private String color;
    // Program Studi Shirt
    private String sleeve_type;

    Shirt(){} // konstruktor Shirt

    Shirt(String idProduct, String name, String brand, String price, String size, String material, String gender, String color, String sleeve_type) {
        super(idProduct, name, brand, price, size, material, gender);
        // konstruktor langsung isi attribut
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    // Set NIM
    public void setColor(String colorShirt) {
        this.color = colorShirt;
    }

    // Get NIM
    public String getColor() {
        return color;
    }

    // Set Prodi
    public void setSleeveType(String programStudi) {
        this.sleeve_type = programStudi;
    }

    // Get NIM
    public String getSleeveType() {
        return sleeve_type;
    }

    public void commandOptions() {
    }
}