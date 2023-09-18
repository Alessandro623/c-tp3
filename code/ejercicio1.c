#include <stdio.h>
int main()
{
    int dni, cbu;
    char tipo;
    float saldo = 55000.55;
    float resultado;
    printf("Ingrese su dni = ");
    scanf("%d", &dni);
    printf("Ingrese su cbu = ");
    scanf("%d", &cbu);
    printf("Ingresa las siguentes letras segun lo quieras hacer \n D: Depositar dinero \n R: Retirar dinero \n C: Consultar datos \n M: Mostrar datos de la cuenta \n E: Salir del programa= ");
    fflush(stdin);
    scanf("%c", &tipo);
    printf("lo que usted elegio es = %c\n", tipo);

    switch (tipo)
    {
    case 'D':
        printf("Cuanto dinero quiere depositar? = ");
        scanf("%f", &resultado);
        saldo = saldo - resultado;
        printf("Su nuevo Saldo es = %.2f", saldo);
        break;
    case 'R':
        printf("Cuanto dinero quiere retirar? =");
        scanf("%f",&resultado);
        if (resultado < saldo){
        saldo = saldo - resultado;
        printf("Su nuevo Saldo es = %.2f", saldo);
        } else {
            printf("No puede retirar mas dinero del que tiene");
        }
        break;
    case 'C':
        printf("Su Saldo es = %.2f", saldo);
        break;
    case 'M':
        printf("su dni es: %d \n su cbu es : %d ", dni, cbu);
        break;
    default:
        printf("Eligio una opcion incorrecta, saliendo del programa...");
        break;
    }
    return 0;
}