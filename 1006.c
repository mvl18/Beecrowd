#include <stdio.h>

int main() {
    
    double num1, num2, num3, media;
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    media = (num1*2 + num2*3 + num3*5)/10;
    printf("MEDIA = %.1lf\n", media);  
    return 0;
}