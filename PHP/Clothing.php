<!-- 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin. 
-->

<!-- ----- Latihan PHP ----- -->

<?php
// import file
require('Product.php');

// Membuat kelas Clothing dengan pewarisan dari Product
class Clothing extends Product
{
    // Membuat atribut Private dari kelas Clothing
    private $size = '';
    private $material = '';
    private $gender = '';


    # Constructor with default initialization
    public function __construct($id = '', $name = '', $brand = '', $price = '', $image, $size = '', $material = '', $gender = '')
    {
        # memanggil konstruktor dari kelas induk(superclass)
        parent::__construct($id, $name, $brand, $price, $image);
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    # Setter and Getter methods for private attributes

    # Set Size
    public function setSize($size)
    {
        $this->size = $size;
    }

    # Get Size
    public function getSize()
    {
        return $this->size;
    }

    # Set Material
    public function setMaterial($material)
    {
        $this->material = $material;
    }

    # Get Material
    public function getMaterial()
    {
        return $this->material;
    }

    # Set Gender
    public function setGender($gender)
    {
        $this->gender = $gender;
    }

    # Get Gender
    public function getGender()
    {
        return $this->gender;
    }
}