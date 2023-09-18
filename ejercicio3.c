#include <stdio.h>
int main(){
    char caracter;
    printf("Ingrese un numero de 2 cifras = ");
    scanf("%d", &caracter);
    if (caracter >= 48 && caracter <= 57){
        printf("Usted ingreso el Numero = %c", caracter);
    } else if(caracter >= 65 && caracter <= 90){
        printf("Usted ingreso un Caracter en Mayuscula = %c", caracter);
    } else if(caracter >= 97 && caracter <= 122){
        printf("Usted ingreso un Caracter en minuscula = %c", caracter);
    } else {
        printf("el valor de su caracter es %c", caracter);
    }
    return 0;
}