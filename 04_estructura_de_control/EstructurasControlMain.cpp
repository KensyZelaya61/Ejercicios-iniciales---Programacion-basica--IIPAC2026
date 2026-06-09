#include <iostream>

int main() {
    std::cout << "Estructuras de control en C++:\n";
    std::cout << " 1. if / else / else if\n";
    std::cout << " 2. switch\n";
    std::cout << " 3. for\n";
    std::cout << " 4. while\n";
    std::cout << " 5. do while\n";
    std::cout << " 6. break / continue\n";
    std::cout << " 7. operador ternario ?: \n\n";

    // Ejemplo 1: if / else / else if
    int numero = 2;
    if (numero > 0) {
        std::cout << "if: El numero es positivo\n";
    } else if (numero < 0) {
        std::cout << "if: El numero es negativo\n";
    } else {
        std::cout << "if: El numero es cero\n";
    }

    // Ejemplo 2: switch
    switch (numero) {
        case 1:
            std::cout << "switch: El numero es uno\n";
            break;
        case 2:
            std::cout << "switch: El numero es dos\n";
            break;
        default:
            std::cout << "switch: El numero no es ni uno ni dos\n";
            break;
    }

    // Ejemplo 3: for
    std::cout << "for: mostrar 1 a 5 ->";
    for (int i = 1; i <= 5; ++i) {
        std::cout << " " << i;
    }
    std::cout << "\n";

    // Ejemplo 4: while
    std::cout << "while: repetir hasta 3 ->";
    int contador = 1;
    while (contador <= 3) {
        std::cout << " " << contador;
        ++contador;
    }
    std::cout << "\n";

    // Ejemplo 5: do while
    std::cout << "do while: al menos una ejecucion ->";
    int valor = 0;
    do {
        std::cout << " " << valor;
        ++valor;
    } while (valor < 1);
    std::cout << "\n";

    // Ejemplo 6: break / continue
    std::cout << "break / continue: pares hasta 8 ->";
    for (int j = 1; j <= 10; ++j) {
        if (j % 2 != 0) {
            continue; // omite impares
        }
        if (j > 8) {
            break; // detiene el bucle cuando j es mayor que 8
        }
        std::cout << " " << j;
    }
    std::cout << "\n";

    // Ejemplo 7: operador ternario
    std::string resultado = (numero % 2 == 0) ? "par" : "impar";
    std::cout << "ternario: El numero " << numero << " es " << resultado << ".\n";

    return 0;
}
