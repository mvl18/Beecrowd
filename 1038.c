#include <stdio.h>

int main(void)
{
    int cod, quant;
    float v[5] = {4.0, 4.5, 5.0, 2.0, 1.5};
    scanf("%d %d", &cod, &quant);

    printf("Total: R$ %.2f\n", v[cod-1]*quant);
    
    return 0;
}