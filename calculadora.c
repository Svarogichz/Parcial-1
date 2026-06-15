#include <stdio.h>

void suma();
float resta(float, float);
void multiplicacion();
float division(float, float);

int main() {
    printf("Calculadora sencilla\n");
    return 0;
}

void suma() {
    float a, b;
    printf("Ingrese dos números para sumar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a + b);
}

float resta(float a, float b) {
    return a - b;
}

void multiplicacion() {
    float a, b;
    printf("Ingrese dos números para multiplicar: ");
    scanf("%f %f", &a, &b);
    printf("Resultado: %.2f\n", a * b);
}

float division(float a, float b) {
    return a / b;
}