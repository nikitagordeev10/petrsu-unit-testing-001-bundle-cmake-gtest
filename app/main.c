#include <stdio.h>

#include "mathematical_calculator.h"

int main()
{
    printf("Hello World!\n");
    return modify_value(2);

    float x1, x2, vx1, vx2; int flag, vflag;

    discriminant(5, 6, 1, &x1, &x2, &flag);
    printf("x1 = %f, x2 = %f, ошибка = %d\n", x1, x2, flag);

    viet(5, 6, 1, &vx1, &vx2, &vflag);
    printf("vx1 = %f, vx2 = %f, ошибка = %d\n", vx1, vx2, vflag);
}
