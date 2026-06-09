#include<iostream>

using namespace std;

//REAILIZAR UN PROGRAMA QUE MUESTRE LOS VALOS DEL 0 AL  10
int main(){
    int contador = 0; 

    while(contador <= 10)
    {
        cout << "contador: " << contador << endl;
        contador=contador + 1;// Incrementamos el contador en 1
    }

    return 0;
}