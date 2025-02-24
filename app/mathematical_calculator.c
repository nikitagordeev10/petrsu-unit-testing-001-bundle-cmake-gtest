
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathematical_calculator.h"

void discriminant(double a, double b, double c, double* x1, double* x2, int* has_real_roots) {
    double d; // Дискриминант
    *has_real_roots = 0;

    if (a != 0) {
        d = b * b - 4 * a * c;
        if (d > 0) {
            *x1 = (double)((-b - sqrt(d)) / (2 * a));
            *x2 = (double)((-b + sqrt(d)) / (2 * a));
        } else if (d == 0) {
            *x1 = *x2 = -b / (2 * a);
        } else {
            *has_real_roots = 1; // Комплексные корни
        }
    } else if (b != 0) {
        *x1 = *x2 = -c / b; // Линейное уравнение bx + c = 0
    } else {
        *has_real_roots = 1; // Невозможно решить
    }
}


int modify_value(int b) {
    return b + 4;
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from mathematical_calculator.c\n");
    printf("Do not disturb\n");
}