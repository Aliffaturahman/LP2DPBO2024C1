# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Import file.
from Clothing import Clothing

# membuat kelas Shirt dengan pewarisan dari kelas Clothing
class Shirt (Clothing):
    # Membuat beberapa atribut private
    __color = ""
    __sleeve_type = ""

    # Constructor with default initialization
    def __init__(self, id="", name="", brand="", price="", size="", material="", gender="", color="", sleeve_type=""):
        # memanggil konstruktor dari kelas induk (superclass)
        super().__init__(id, name, brand, price, size, material, gender)
        self.__color = color
        self.__sleeve_type = sleeve_type

    # Setter and Getter methods for private attributes
    # Set Color
    def setColor(self, color):
        self.__color = color

    # Get Color
    def getColor(self):
        return self.__color

    # Set Sleeve Type
    def setSleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type

    # Get Sleeve Type
    def getSleeve_type(self):
        return self.__sleeve_type