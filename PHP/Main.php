<!-- 
    Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
    kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
    telah dispesifikasikan. Aamiin. 
-->

<!-- ----- Latihan PHP ----- -->

<?php
// Impor class shirt
require('Shirt.php');

// Read Data array
$shirt = array(
	//Menambahkan beberapa data
	// Untuk Gambar Dapat diambil melalui gambar di internet
	new Shirt(241, 'Sweater', 'Zara', "Rp. 1.400.000", 'L', 'Cotton', 'Woman', 'Pink', 'Dropped Shoulder', "https://i.pinimg.com/736x/cf/1a/11/cf1a113ca12b979d708b8a9a44058de5.jpg"),
	new Shirt(371, 'Hoodie', 'Uniqlo', "Rp. 1.700.000", 'XL', 'Polyster', 'Man', 'Black', 'Dolman', "https://th.bing.com/th/id/OIP.YxL985puUHC0Aa0konxtzQHaHa?w=600&h=600&rs=1&pid=ImgDetMain"),
	new Shirt(271, 'Sweater', 'Uniqlo', "Rp. 1.100.000", 'S', 'Max Mara', 'Man', 'Grey', 'Dolman', "https://cdnb.lystit.com/photos/2012/07/06/topshop-grey-curve-hem-sweater-product-1-4102576-207548523.jpeg"),
	new Shirt(741, 'Leather Jacket', 'Zara', "Rp. 3.200.000", 'M', 'Dragon Skin', 'Unisex', 'Dark Brown', 'Epaulet', "https://images-na.ssl-images-amazon.com/images/I/7155p8b%2BnBL._AC_UL1280_.jpg"),
	new Shirt(561, 'Shirt', 'Ralph Lauren', "Rp. 1.800.000", 'M', 'Flannel', 'Man', 'Dark Blue', 'Long Sleeve', "https://www.mousoulis.com/images/products/1645453084-71246900.jpg"),
	new Shirt(261, 'Waistcoat', 'Ralph Lauren', "Rp. 2.700.000", 'L', 'Iron', 'Man', 'Black', 'Sleeveless', "https://www.businessshirtsplus.com.au/imresize.php?w=389&h=610&image=images/1565162542.jpg"),
	new Shirt(361, 'Coat', 'Ralph Lauren', "Rp. 2.400.000", 'S', 'Iron', 'Woman', 'Light Brown', 'Epaulet', "https://i.pinimg.com/originals/ce/72/24/ce72244637e559482085966339cca129.jpg"),
);

// membuat array dari objek shirt
foreach ($shirt as $key => $value) {
	$data[] = array($key + 1, $value->getID(), $value->getName(), $value->getBrand(), $value->getPrice(), $value->getSize(), $value->getMaterial(), $value->getGender(), $value->getColor(), $value->getSleeve_type(), '<img src="' . $value->getImage() . '" width="100" height="80">', '<a href="?delete=' . $key . '">Delete</a>');
}

// Hapus baris yang sesuai dari array jika parameter delete diberikan
if (isset($_GET['delete'])) {
    $index = $_GET['delete'];
    $deletedMember = $shirt[$index]->getName();
    $deletedMemberID = $shirt[$index]->getID();
    if (isset($shirt[$index])) {
        unset($shirt[$index]);
        foreach ($shirt as $key => $value) {
            $data_deleted[] = array($key + 1, $value->getID(), $value->getName(), $value->getBrand(),  $value->getPrice(), $value->getSize(), $value->getMaterial(), $value->getGender(), $value->getColor(), $value->getSleeve_type(), '<img src="' . $value->getImage() . '" width="100" height="80">', '<a href="?delete=' . $key . '">Delete</a>');
        }
    }
}

echo "<center><h1>Selamat Datang di Pusat Daftar Pakaian Dunia</h1></center>";

//Membuat Tabel sebelum dihapus
echo "<h2>Daftar Pakaian</h2>";
echo "<table border='1' width='70%'>";

//Judul tabel 
echo "<tr>";
echo "<th> No </td>";
echo "<th> ID </td>";
echo "<th> Name </td>";
echo "<th> Brand </td>";
echo "<th> Price </td>";
echo "<th> Size </td>";
echo "<th> Material </td>";
echo "<th> Gender </td>";
echo "<th> Color </td>";
echo "<th> Sleeve Type </td>";
echo "<th> Foto Pakaian </td>";
echo "<th> Aksi </td>";
echo "</tr>";

// Loop untuk menampilkan data array dalam bentuk tabel
foreach ($data as $row) {
	echo "<tr align=center>";
	foreach ($row as $cell) {
		echo "<td >" . $cell . "</td>";
	}
	echo "</tr>";
}
echo "</table>";

// Menampilkan tabel data shirt yang sudah dihapus barisnya
if (isset($data_deleted)) {
	echo "<br>";
	echo "<h2>Daftar Pakaian Setelah Dihapus</h2>";
    echo "<p>$deletedMember dengan nomor ID pakaian $deletedMemberID telah dihapus dari daftar</p>";
	echo "<table border='1' width='70%'>";

	//Judul tabel 
	echo "<tr>";
    echo "<th> No </td>";
    echo "<th> ID </td>";
    echo "<th> Name </td>";
    echo "<th> Brand </td>";
    echo "<th> Price </td>";
    echo "<th> Size </td>";
    echo "<th> Material </td>";
    echo "<th> Gender </td>";
    echo "<th> Color </td>";
    echo "<th> Sleeve Type </td>";
    echo "<th> Foto Pakaian </td>";
    echo "<th> Aksi </td>";
    echo "</tr>";

	// Loop untuk menampilkan data array yang sudah dihapus dalam bentuk tabel
	foreach ($data_deleted as $row) {
		echo "<tr>";
		foreach ($row as $cell) {
			echo "<td align='center'>" . $cell . "</td>";
		}
		echo "</tr>";
	}
	echo "</table>";
}