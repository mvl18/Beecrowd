#include <stdio.h>

int main() {
    
    char nome[50];
    double num1, num2, salario;
    scanf("%s %lf %lf", &nome, &num1, &num2);
    salario = num1 + num2*0.15;
    printf("TOTAL = R$ %.2lf\n", salario);
    return 0;
}