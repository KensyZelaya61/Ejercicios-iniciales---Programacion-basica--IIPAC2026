#include <iostream>
using namespace std;

bool esPar(int numero) 
{
    // se divide el numero entre 2, si sobra 0 es par
    if (numero % 2 == 0) 
    {
        return true;
    }
    else 
    {
        return false; // si no es par, es false
    }
}

int main() 
{
    int num;
    
    cout << "ingrese un numero entero: ";
    cin >> num;
    
    // llamado a la funcion esPar con num
    if (esPar(num)) 
    {
        cout << "El numero " << num << " es par." << endl;
    } 
    else 
    {
        cout << "El numero " << num << " es impar." << endl;
    }
    
    return 0;
}
