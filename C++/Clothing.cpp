/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import library.
#include <bits/stdc++.h>
#include "Product.cpp"

// Using standard namespace.
using namespace std;

class Clothing : public Product // inheritance atau pewarisan atribut dari Product
{
private:
    // Membuat Private attributes.
    string size;
    string material;
    string gender;

public:
    Clothing() {} // konstruktor Clothing

    Clothing(string id, string name, string brand, string price, string size, string material, string gender)
        : Product(id, name, brand, price) // memanggil konstruktor dari kelas induk (superclass)
    {
        // konstruktor langsung isi attribut
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    // Setter and Getter methods for private attributes
    
    // Setter Size
    void setSize(string size)
    {
        this->size = size;
    }

    // Getter Size
    string getSize()
    {
        return this->size;
    }

    // Setter Material
    void setMaterial(string material)
    {
        this->material = material;
    }

    // Getter Material
    string getMaterial()
    {
        return this->material;
    }

    // Setter Gender
    void setGender(string gender)
    {
        this->gender = gender;
    }

    // Getter Gender
    string getGender()
    {
        return this->gender;
    }

    // Destruktor
    ~Clothing()
    {
    }
};