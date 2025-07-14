#include <stdio.h>

int sumar(int n){
	if (n==0)
		return 0;
	return n+sumar(n-1);
}

int main(){
	int num;
	
	printf("Cantidad de numeros: ");
	scanf("%d",&num);
	printf("La suma de los primeros %i numeros es: %i\n",num,sumar(num));
}
