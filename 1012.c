#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void)
{
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo;
    scanf("%lf %lf %lf", &A, &B, &C);
    triangulo = A*C/2.0;
    circulo = pi*pow(C, 2);
    trapezio = (A+B)*C/2.0;
    quadrado = pow(B, 2.0);
    retangulo = A*B;
    printf("TRIANGULO: %.3lf\n", triangulo);
    printf("CIRCULO: %.3lf\n", circulo);
    printf("TRAPEZIO: %.3lf\n", trapezio);
    printf("QUADRADO: %.3lf\n", quadrado);
    printf("RETANGULO: %.3lf\n", retangulo);

    return 0;
}
