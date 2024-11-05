#include <math.h>
#include <stdio.h>
int main()
{
    double s, x;
    scanf("%lf", &x);
    s = pow(fabs(pow(log(tan(x)),2) - 123),0.5) 
        / (exp(-3*x) + atan(x));
    printf("S = %f", s);
    return 0;
}
