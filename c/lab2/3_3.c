#include <stdio.h>

int main()
{
    int d1, m1, y1;
    printf("Вася родился:\n");
    scanf("%d%d%d", &d1, &m1, &y1);
    int d2, m2, y2;
    printf("Рома родился:\n");
    scanf("%d%d%d", &d2, &m2, &y2);
    
    if (y1 < y2) {
        printf("Вася старше!\n");
    } else if ( y2 > y1) {
        printf("Рома старше!\n");
    } else {
        if (m1 < m2) {
            printf("Вася старше!\n");
        } else if (m1 > m2) {
            printf("Рома старше!\n");
        } else {
            if (d1 < d2) {
                printf("Вася старше!\n");
            } else if (d1 > d2) {
                printf("Рома старше!\n");
            } else {
                printf("Они родились в один день!!!\n");
            }
        }
    }
    return 0;
}
