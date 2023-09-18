#include <stdio.h>
#define DESCUENTO1 10
#define DESCUENTO2 5
#define DESCUENTO3 12
#define DESCUENTO4 20
#define DESCUENTO5 8
int main(){
    int precio_carne = 500;
    int precio_pasta = 200;
    int precio_vyf = 250;
    int precio_forrajeria = 100;
    int precio_lacteos = 270;
    int precio_limpieza = 90;
    char pagaCon;
    printf("Ingrese su tipo de pago para la compra\n E: efectivo\n T: transferencia\n C: Credito\n=");
    scanf("%c", &pagaCon);
    int compra1,compra2,compra3,compra4,compra5,compra6;
    int c1,c2,c3,c4,c5,c6,rf;
    printf("Cuantas bolsa de carne desea comprar? = ");
    scanf("%d", &compra1);
    printf("Cuantos paquetes de pasta desea comprar? = ");
    scanf("%d", &compra2);
    printf("Cuantas bolsa de verdura o fruta desea comprar? = ");
    scanf("%d", &compra3);
    printf("Cuantas bolsa de articulos de forrajeria desea comprar? = ");
    scanf("%d", &compra4);
    printf("Cuantas bolsa de lacteos desea comprar? = ");
    scanf("%d", &compra5);
    printf("Cuantas bolsa de A. de limpieza desea comprar? = ");
    scanf("%d", &compra6);

    if(pagaCon = "E"){
        if(compra1 > 0){
            c1 = compra1 (compra1 * precio_carne);
        } else {
            c1 = 0;
        }
        if(compra2 > 0){
            c2 = compra2 * precio_pasta;
        } else {
            c2 = 0;
        }
        if(compra3 > 0){
            c3 = compra3 * precio_vyf;
        } else {
            c3 = 0;
        }
        if(compra4 > 0){
            c4 = compra4 * precio_forrajeria;
        } else {
            c4 = 0;
        }
        if(compra5 > 0){
            c5 = compra5 * precio_lacteos;
        } else {
            c5 = 0;
        }
        if(compra6 > 0){
            c6 = compra6 * precio_limpieza;
        } else {
            c6 = 0;
        }
        rf = c1+c2+c3+c4+c5+c6;
    }
    printf("El total de su compra es %d",rf );
    return 0;
}