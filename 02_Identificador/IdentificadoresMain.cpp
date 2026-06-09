#include<iostream>
 int main(){
    int entero = 5;
    float flotante = 3.14;
    double doble =2.71828;
    char caracter = 'M';
    bool booleano = false;
    long enteroLargo = 1234567890;
    short enteroCorto = 100;
    unsigned int enteroSinSigno = 20;
    wchar_t caracterAncho = L'Ñ';

std::cout << "Tipos de datos en C++ con  un ejemplo:\n";
std::cout << "int: " << entero << "\n";
std::cout << "float: " << flotante << "\n";
std::cout << "double: " << doble << "\n";
std::cout << "char: " << caracter << "\n";
std::cout << "bool: " << booleano << "\n";
std::cout << "long: " << enteroLargo << "\n";
std::cout << "short: " << enteroCorto << "\n";
std::cout << "unsigned int: " << enteroSinSigno << "\n";
std::cout << "wchar_t: " << static_cast<char>(caracterAncho) << "\n";



    return 0;
 }
