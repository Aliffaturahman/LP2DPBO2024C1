/* 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin.
*/

// ----- Latihan C++ ----- //

// Import library.
#include <bits/stdc++.h>
#include "Clothing.cpp"

// Using standard namespace.
using namespace std;

// membuat kelas Shirt
class Shirt : public Clothing
{
private:
    // Membuat Private attributes.
    string color;
    string sleeve_type;

public:
    Shirt() {} // Konstruktor Shirt
    Shirt(string id, string name, string brand, string price, string size, string material, string gender, string color, string sleeve_type)
        : Clothing(id, name, brand, price, size, material, gender) // memanggil konstruktor dari kelas induk (superclass)
    {

        // Konstruktor langsung isi attribut
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    // Setter and Getter methods for private attributes

    // Setter Color
    void setColor(string color)
    {
        this->color = color;
    }

    // Getter Color
    string getColor()
    {
        return color;
    }

    // Setter Sleeve Type
    void setSleeve_type(string sleeve_type)
    {
        this->sleeve_type = sleeve_type;
    }

    // Getter Sleeve Type
    string getSleeve_type()
    {
        return sleeve_type;
    }

    // Destruktor
    ~Shirt()
    {
    }
};