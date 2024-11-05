#include <stdio.h>
#include <math.h>

int main()
{
    // Первый Слайд
    int a = 10;
    if (a < 5) {
        a++;
        a = a * 2;
    }
    a--;
    printf("%d", a);
    // Второй Слайд
    int m;
    scanf("%d", &m);
    switch (m) {
        case 1: printf("январь");
                break;
        case 2: printf("февраль");
                break;
        case 3: printf("март");
                break;
        case 4: printf("апрель");
                break;
        case 5: printf("май");
                break;
        case 6: printf("июнь");
                break;
        case 7: printf("июль");
                break;
        case 8: printf("август");
                break;
        case 9: printf("сентябрь");
                break;
        case 10: printf("октябрь");
                break;
        case 11: printf("ноябрь");
                break;
        case 12: printf("декабрь");
                break;
        default: printf("ошибка");
    }
    return 0;
}
