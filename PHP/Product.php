<!-- 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin. 
-->

<!-- ----- Latihan PHP ----- -->

<?php
class Product
{
    // Membuat atribut Private dari kelas Product
    private $id = '';
    private $name = '';
    private $brand = '';
    private $price = '';
    private $image;

    # Constructor with default initialization
    public function __construct($id = '', $name = '', $brand = '', $price = '',  $image)
    {
        $this->id = $id;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
        $this->image = $image;
    }

    # Setter and Getter methods for private attributes

    # Set ID
    public function setID($idMahasiswa)
    {
        $this->id = $idMahasiswa;
    }

    # Get ID
    public function getID()
    {
        return $this->id;
    }

    # Set Name
    public function setName($name)
    {
        $this->name = $name;
    }

    # Get Name
    public function getName()
    {
        return $this->name;
    }

    # Set Brand
    public function setBrand($brand)
    {
        $this->brand = $brand;
    }

    # Get Brand
    public function getBrand()
    {
        return $this->brand;
    }

    # Set Price
    public function setPrice($price)
    {
        $this->price = $price;
    }

    # Get Price
    public function getPrice()
    {
        return $this->price;
    }

    # Set Image
    public function setImage($image)
    {
        $this->image = $image;
    }

    # Get Image
    public function getImage()
    {
        return $this->image;
    }
}