#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Palindromo(char *cad) {
    int i, j;
    int longitud = strlen(cad);
    
    for (i = 0, j = longitud - 1; i < j; i++, j--) {
        while (!isalnum(cad[i])) {
            i++;
        }
        while (!isalnum(cad[j])) {
            j--;
        }
        if (tolower(cad[i]) != tolower(cad[j])) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char cad[100];
    printf("Inserte una cadena: ");
    fgets(cad, sizeof(cad), stdin);
    cad[strcspn(cad, "\n")] = '\0';
    
    if (Palindromo(cad)) {
        printf("Es palíndrome");
    } else {
        printf("Es palíndrome");
    }
    
    return 0;
}
