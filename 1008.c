#include <stdio.h>

int main() {
    
    int num, horas;
    float valor, salario;
    scanf("%d %d %f", &num, &horas, &valor);
    salario = horas*valor;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, salario);  
    return 0;
}