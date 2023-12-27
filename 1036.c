#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B, C, R1, R2, delta;
    scanf("%lf %lf %lf", &A, &B, &C);
    delta = pow(B, 2) - 4*A*C;

    if (delta < 0 || A==0)
        printf("Impossivel calcular\n");
    else
    {
        R1 = (-B + sqrt(delta))/(2*A);
        R2 = (-B - sqrt(delta))/(2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }  
    
    return 0;
}