#include <stdio.h>
 
int main() {
    
    int code_1, quant_1, code_2, quant_2;
    float price_1, price_2, valor;
    scanf("%d %d %f", &code_1, &quant_1, &price_1);
    scanf("%d %d %f", &code_2, &quant_2, &price_2);
    valor = price_1*quant_1 + price_2*quant_2;
    printf("VALOR A PAGAR: R$ %.2f\n", valor);
    
    return 0;
}
