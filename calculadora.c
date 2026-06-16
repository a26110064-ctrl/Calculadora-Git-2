#include <stdio.h>

int main() {
    printf("Calculadora en desarrollo\n");
    return 0;
}

#include <stdio.h>

int main()
{
    int opcion;
    float num1, num2, resultado;

    printf("===== CALCULADORA =====\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");

    printf("Seleccione una opcion: ");
    scanf("%d",&opcion);

    printf("Ingrese primer numero: ");
    scanf("%f",&num1);

    printf("Ingrese segundo numero: ");
    scanf("%f",&num2);


    return 0;
}
