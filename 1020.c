#include <stdio.h>

int main(void)
{
    int N, resto, anos, meses;
    scanf("%d", &N);
    
    resto = N%365;
    anos = (N - resto)/365;
    N = resto;
    resto = N%30;
    meses = (N - resto)/30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, resto);
    
    
    return 0;
}