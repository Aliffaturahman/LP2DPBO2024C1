/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import library.
#include <bits/stdc++.h>

// Using standard namespace.
using namespace std;

class Product
{
    // Membuat atribut privte
private:
    // id Product
    string id;
    // name Product
    string name;
    // brand Product
    string brand;
    // jenis kelamin Product
    string price;

public:
    Product() {} // Konstruktor Product

    Product(string id, string brand, string name, string price)
    {
        // Konstruktor langsung isi attribut
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    // Setter and Getter methods for private attributes

    // Setter ID
    void setID(string id)
    {
        this->id = id;
    }

    // Getter ID
    string getID()
    {
        return id;
    }
    
    // Setter Name
    void setName(string name)
    {
        this->name = name;
    }

    // Getter Name
    string getName()
    {
        return name;
    }

    // Setter Brand
    void setBrand(string brandProduct)
    {
        this->brand = brandProduct;
    }

    // Getter Brand
    string getBrand()
    {
        return brand;
    }

    // Setter Price
    void setPrice(string price)
    {
        this->price = price;
    }

    // Getter Price
    string getPrice()
    {
        return this->price;
    }

    // Destruktor
    ~Product()
    {
    }
};