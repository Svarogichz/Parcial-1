#include <stdio.h>

void suma();
float resta(float, float);
void multiplicacion();
float division(float, float);

int main() {

    float a, b;

    printf("Calculadora sencilla\n\n");

    suma();

    printf("\nIngresa dos numeros para las siguientes operaciones: ");
    scanf("%f %f", &a, &b);

    printf("Resultado resta: %.2f\n", resta(a, b));

    multiplicacion();

    printf("Resultado division: %.2f\n", division(a, b));

    return 0;
}

void suma() {

    float a, b;

    printf("Ingresa dos numeros para sumar: ");
    scanf("%f %f", &a, &b);

    printf("Resultado suma: %.2f\n", a + b);
}

float resta(float a, float b) {

    return a - b;
}

void multiplicacion() {

    float a, b;

    printf("\nIngresa dos numeros para multiplicar: ");
    scanf("%f %f", &a, &b);

    printf("Resultado multiplicacion: %.2f\n", a * b);
}

float division(float a, float b) {

    if (b == 0) {
        printf("Error: no se puede dividir entre cero.\n");
        return 0;
    }

    return a / b;
}