#include <stdio.h>

int main(void)
{
    float N;
    int dinheiro, notas, moedas, resto, quantidade, n[6] = {100, 50, 20, 10, 5, 2}, m[6]= {100, 50, 25, 10, 5, 1};
    scanf("%f", &N);
    dinheiro = N*100;
    notas = (dinheiro - dinheiro%100)/100;
    

    printf("NOTAS:\n");
    for (int i = 0; i < 6 ; i++)
    {
        resto = notas%n[i];
        quantidade = (notas - resto)/n[i];
        notas = resto;
        printf("%d nota(s) de R$ %d.00\n", quantidade, n[i]);
    }

    moedas = (dinheiro%100 + notas*100);

    printf("MOEDAS:\n");
    for (int i = 0; i < 6 ; i++)
    {
        resto = moedas%m[i];
        quantidade = (moedas - resto)/m[i];
        moedas = resto;
        printf("%d moeda(s) de R$ %.2f\n", quantidade, m[i]/100.00);
    }
    
    return 0;
}