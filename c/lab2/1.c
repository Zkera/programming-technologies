#include <stdio.h>
#include <math.h>

int main()
{
    int A = 466;
    char symbol1 = '!';
    double mu = 1.25e-6;
    printf("Так работает вывод текста\n");
    printf("Вывод нескоьких чисел: %8d %8d %8d\n", -145, 0xFFF, 016);
    printf("Вывод  переменной в десятичной системе: %d\n", A);
    printf("Вывод  переменной в восьмеричной системе: %o\n", A);
    printf("Вывод  переменной в шестнадцатеричной системе: %X\n", A);
    printf("Вывод  символа %c и его кода: %d\n", symbol1, symbol1);
    printf("Вывод  вещественного числа: %10.8f\n", mu);
    printf("Вывод  вещественного числа в экспон. форме: %5.2e\n", mu);

    return 0;
}
