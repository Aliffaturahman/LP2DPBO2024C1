# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Import File
from Product import Product

# Membuat kelas Clothing dengan pewarisan dari Product
class Clothing(Product):
    # Membuat beberapa atribut private
    # size Clothing
    __size = ""
    # material Clothing
    __material = ""
    # gender Clothing
    __gender = ""

    # Constructor with default initialization
    def __init__(self, id="", name="", brand="", price="", size="", material="", gender=""):
        # memanggil konstruktor dari kelas induk(superclass)
        super().__init__(id, name, brand, price)
        self.__size = size
        self.__material = material
        self.__gender = gender

    # Setter and Getter methods for private attributes
    # Setter Size
    def setSize(self, size):
        self.__size = size

    # Getter Size
    def getSize(self):
        return self.__size

    # Setter Material
    def setMaterial(self, material):
        self.__material = material

    # Getter Material
    def getMaterial(self):
        return self.__material
    
    # Setter Gender
    def setGender(self, gender):
        self.__gender = gender

    # Getter Gender
    def getGender(self):
        return self.__gender