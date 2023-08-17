#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1, y1, x2, y2, dist;
    scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
    dist = sqrt(pow(x2-x1, 2.0)+pow(y2-y1, 2.0));
    printf("%.4f\n", dist);

    return 0;
}