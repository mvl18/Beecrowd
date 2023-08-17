#include <stdio.h>
#include <math.h>
#define pi 3.14159

int main(void)
{
    double r, volume;
    scanf("%lf", &r);
    volume = (4/3.0)*pi*pow(r, 3);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
