/* #include <stdio.h>
#include <conio.h>

int main()
{
    int dni, cbu;
    float saldo = 55000.55;
    float resultado;
    char tipo;
    printf("Ingrese su dni = ");
    scanf("%d", &dni);
    printf("Ingrese su cbu = ");
    scanf("%d", &cbu);
    printf("Ingresa las siguentes letras segun lo quieras hacer\n D: Depositar dinero \n R: Retirar dinero \n C: Consultar datos \n M: Mostrar datos de la cuenta \n E: Salir del programa = ");
    scanf(" %c", &tipo);
    
    switch (tipo)
    {
    case 'D':
        printf("Cuanto dinero quiere depositar? = ");
        scanf("%f", &resultado);
        saldo = saldo - resultado;
        printf("Su nuevo Saldo es = %f", saldo);
        break;
    case 'R':
        printf("Cuanto dinero quiere retirar? =");
        scanf("%f",&resultado);
        saldo = saldo - resultado;
        printf("Su nuevo Saldo es = %f", saldo);
        break;
    case 'C':
        printf("Su Saldo es = %f", saldo);
        break;
    case 'M':
        printf("su dni es: %d \n su cbu es : %d ", dni, cbu);
        break;
    default:
        break;
    }

    getchar();

    return 0;
} */



#include <stdio.h>
int main()
{
    int dni, cbu;
    float saldo = 55000.55;
    float resultado;
    char tipo;
    printf("Ingrese su dni = ");
    scanf("%d", &dni);
    printf("Ingrese su cbu = ");
    scanf("%d", &cbu);
    printf("Ingresa las siguentes letras segun lo quieras hacer \n D: Depositar dinero \n R: Retirar dinero \n C: Consultar datos \n M: Mostrar datos de la cuenta \n E: Salir del programa =");
    scanf(" %c", &tipo);
    printf("lo que usted elegio es = %c ", tipo);

    switch (tipo)
    {
    case 'D':
        printf("Cuanto dinero quiere depositar? = ");
        scanf("%f", &resultado);
        saldo = saldo - resultado;
        printf("Su nuevo Saldo es = %f", saldo);
        break;
    case 'R':
        printf("Cuanto dinero quiere retirar? =");
        scanf("%f",&resultado);
        saldo = saldo - resultado;
        printf("Su nuevo Saldo es = %f", saldo);
        break;
    case 'C':
        printf("Su Saldo es = %f", saldo);
        break;
    case 'M':
        printf("su dni es: %d \n su cbu es : %d ", dni, cbu);
        break;
    default:
        break;
    }
    return 0;
}