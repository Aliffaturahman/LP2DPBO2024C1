# Saya Alif Faturahman Firdaus (2107377) mengerjakan Latihan Praktikum 2 dalam mata 
# kuliah DPBO untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang 
# telah dispesifikasikan. Aamiin.

# ----- Latihan Python ----- #

# Membuat kelas Product
class Product:
    # Membuat beberapa atirbut private
    # id Product
    __id = ""
    # name Product
    __name = ""
    # brand Product
    __brand = ""
    # price Product
    __price = ""

    # Constructor with default initialization
    def __init__(self, id="", name="", brand="", price=""):
        self.__id = id
        self.__name = name
        self.__brand = brand
        self.__price = price

    # Setter and Getter methods for private attributes
    # set ID
    def setID(self, id):
        self.__id = id

    # Get ID
    def getID(self):
        return self.__id

    # Set Name
    def setName(self, name):
        self.__name = name

    # Get Name
    def getName(self):
        return self.__name

    # Set Gender
    def setBrand(self, brand):
        self.__brand = brand

    # Get Gender
    def getBrand(self):
        return self.__brand

    # Set Sleeve Type
    def setPrice(self, price):
        self.__price = price

    # Get Sleeve Type
    def getPrice(self):
        return self.__price