/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan Java ----- //

public class Product {
    // ID Product Product
    private String idProduct;
    // Name Product
    private String name;
    // Brand Product
    private String brand;
    // Price Product
    private String price;


    Product(){} // konstruktor Product

    Product(String idProduct, String name, String brand, String price) {
        // konstruktor langsung isi attribut
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }
    
    // set idProduct
    public void setIdProduct(String idProduct) {
        this.idProduct = idProduct;
    }

    // get idProduct
    public String getIdProduct() {
        return idProduct;
    }

    // set name
    public void setName(String nameProduct) {
        this.name = nameProduct;
    }

    // get name
    public String getName() {
        return name;
    }

    // set Brand
    public void setBrand(String brand) {
        this.brand = brand;
    }

    // get Brand
    public String getBrand() {
        return this.brand;
    }

    // set Price
    public void setPrice(String price) {
        this.price = price;
    }

    // get Price
    public String getPrice() {
        return this.price;
    }

}