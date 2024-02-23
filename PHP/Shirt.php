<!-- 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin. 
-->

<!-- ----- Latihan PHP ----- -->

<?php
require('Clothing.php');

// membuat kelas Shirt dengan pewarisan dari kelas Clothing
class Shirt extends Clothing
{
    // Membuat atribut Private dari kelas Clothing
    private $color = '';
    private $sleeve_type = '';

    # Constructor with default initialization
    public function __construct($id = '', $name = '', $brand = '', $price = '', $size = '', $material = '', $gender = '', $color = '', $sleeve_type = '', $image)
    {
        # memanggil konstruktor dari kelas induk(superclass)
        parent::__construct($id, $name, $brand, $price, $image, $size, $material, $gender);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    # Setter and Getter methods for private attributes
    # Set Color
    public function setColor($color)
    {
        $this->color = $color;
    }

    # Get Color
    public function getColor()
    {
        return $this->color;
    }

    # Set Sleeve Type
    public function setSleeve_type($sleeve_type)
    {
        $this->sleeve_type = $sleeve_type;
    }

    # Get Sleeve Type
    public function getSleeve_type()
    {
        return $this->sleeve_type;
    }
}