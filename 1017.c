#include <stdio.h>

int main(void)
{
    int tempo, velo;
    float litros;
    scanf("%d\n%d", &tempo, &velo);
    litros = velo*tempo/12.0;
    printf("%.3f\n", litros);

    return 0;
}