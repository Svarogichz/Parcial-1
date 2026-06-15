#include <stdio.h>

void suma();
float resta(float, float);
void multiplicacion();
float division(float, float);

int main() {
    float a, b;

    printf("Calculadora sencilla\n\n");

    suma();

    printf("\nIngrese dos numeros para restar: ");
    scanf("%f %f", &a, &b);

    printf("Resultado resta: %.2f\n", resta(a, b));

    return 0;
}

void suma() {
    float a, b;

    printf("Ingrese dos numeros para sumar: ");
    scanf("%f %f", &a, &b);

    printf("Resultado suma: %.2f\n", a + b);
}

float resta(float a, float b) {
    return a - b;
}
