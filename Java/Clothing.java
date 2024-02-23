/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan Java ----- //

public class Clothing extends Product{
    // Size Clothing
    private String size;
    // Material Clothing
    private String material;
    // Gender Clothing
    private String gender;

    Clothing(){} // konstruktor Clothing

    Clothing(String idProduct, String name, String brand, String price, String size, String material, String gender){
        // konstruktor langsung isi attribut
        super(idProduct, name, brand, price);
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    // set Size
    public void setSize(String sizeClothing) {
        this.size = sizeClothing;
    }

    // get Size
    public String getSize() {
        return this.size;
    }

    // set Material
    public void setMaterial(String materialClothing) {
        this.material = materialClothing;
    }

    // get Material
    public String getMaterial() {
        return this.material;
    }

    // set Gender
    public void setGender(String genderClothing) {
        this.gender = genderClothing;
    }

    // get Gender
    public String getGender() {
        return this.gender;
    }

}