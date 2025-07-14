#include <stdio.h>

int es_primo(int num, int divisor) {
    if (divisor == 1) 
        return 1;
    if (num % divisor == 0) 
        return 0;
    return es_primo(num, divisor - 1);
}

int suma_primos(int n, int num, int contador, int suma){
    if (contador == n) 
        return suma;
    if (es_primo(num, num - 1)){ 
        suma += num;
        contador++;
	}
    return suma_primos(n, num + 1, contador, suma);
}

int main(){
    int n;
    printf("Cantidad de numeros primos: ");
    scanf("%d", &n);
    
    printf("La suma de los primeros %d números primos es: %d\n", n, suma_primos(n, 2, 0, 0));
    
    return 0;
}
