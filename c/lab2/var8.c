#include <stdio.h>
#include <math.h>

int main()
{
    // вариант 8
    float b, z;
    scanf("%f", &z);
    b = pow(cos(atan(1/2 * z)), 2);
    printf("b = %f", b);
    return 0;
}
