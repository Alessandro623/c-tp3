#include <stdio.h>

int main(){
    int lado1,lado2,lado3,lado4,perimetro,flag;
    printf("Ingrese el tamanio del lado 1 = ");
    scanf("%d", &lado1);
    printf("Ingrese el tamanio del lado 2 = ");
    scanf("%d", &lado2);
    printf("Ingrese el tamanio del lado 3 = ");
    scanf("%d", &lado3);
    printf("Ingrese el tamanio del lado 4 = ");
    scanf("%d", &lado4);
    if(lado1 == lado3 && lado2 == lado4 && lado1 == lado4){
        flag = 1;
    } else if(lado1 == lado3 && lado2 == lado4){
        flag = 2;
    } else {
        if (lado1 == lado2 && lado1 == lado3 && lado1 != lado4)
        {
            flag = 3;
        } else if(lado1 == lado2 && lado1 != lado3 && lado3 != lado4){
            flag = 4;
        } else {
            flag = 5;
        }
    }
    switch (flag)
    {
    case 1:
        perimetro = 4 * lado1;
        printf("El perimetro de su cuadrado es= %d", perimetro);
        break;
    case 2:
        perimetro = 2 * lado1 + 2 * lado2;
        printf("El perimetro de su rectangulo es= %d", perimetro);
        break;
    case 3:
        perimetro = 3 * lado1;
        printf("El perimetro de su triangulo equilatero es= %d", perimetro);
        break;
    case 4: 
        perimetro = 2 * lado1 + lado3;
        printf("El perimetro de su triangulo isoceles es= %d", perimetro);
        break;
    case 5:
        perimetro = lado1 + lado2 + lado3;
        printf("El perimetro de su triangulo escaleno es= %d", perimetro);
        break;
    default:
        break;
    }
    return 0;
}