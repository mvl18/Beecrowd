#include <stdio.h>

int main(void)
{
    int N, resto, notas, v[7] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &N);
    printf("%d\n", N);

    for (int i = 0; i < 7 ; i++)
    {
        resto = N%v[i];
        notas = (N - resto)/v[i];
        N = resto;
        printf("%d nota(s) de R$ %d,00\n", notas, v[i]);
    }
    
    return 0;
}