#include <iostream>
using namespace std;

int calcularAreaRectangulo(int base, int altura) 
{
    // formula para calcular el area : base por altura
    int res = base * altura;
    return res;
}

int main() 
{
    int b, h; // b es base y h es altura
    
    cout << "Escriba la base del rectangulo: ";
    cin >> b;
    
    cout << "Escriba la altura del rectangulo: ";
    cin >> h;
    
    // calculo del area llamando la funcion con b y h
    int areaTotal = calcularAreaRectangulo(b, h);
    
    cout << "El area total es: " << areaTotal <<" centimetros cuadrados"<< endl;

    
    return 0;
}
