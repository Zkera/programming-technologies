#include <stdio.h>
#include <math.h>

int main()
{
    double m, n, f;
    scanf("%lf%lf", &m,&n);
    f = (n < 0 && m > 0) ? (m + pow(n,2)) : 
        (n < 0 && m <= 0) ? (n * 2 + m):
        (m + 1);
    printf("F(m,n) = %.2lf", f);
    return 0;
}
