#include <stdio.h>

int main(void)
{
    int N, resto, horas, minutos;
    scanf("%d", &N);
    
    resto = N%3600;
    horas = (N - resto)/3600;
    N = resto;
    resto = N%60;
    minutos = (N - resto)/60;

    printf("%d:%d:%d\n", horas, minutos, resto);
    
    
    return 0;
}