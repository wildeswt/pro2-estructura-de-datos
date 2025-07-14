#include <stdio.h>

int main() {
    int numero;
    int contador = 0;

    printf("Ingrese un número positivo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        contador = 1;
    } else {
        while (numero != 0) {
            numero = numero / 10;
            contador++;
        }
    }

    printf("La cantidad de dígitos del número ingresado es: %d\n", contador);

    return 0;
}
