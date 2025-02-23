
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathematical_calculator.h"

void discriminant(float a, float b, float c, float* x1, float* x2, int* has_real_roots) {
    float d; // Дискриминант
    *has_real_roots = 0;

    if (a != 0) {
        d = b * b - 4 * a * c;
        if (d > 0) {
            *x1 = (float)((-b - sqrt(d)) / (2 * a));
            *x2 = (float)((-b + sqrt(d)) / (2 * a));
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
  
void viet(float a, float b, float c, float* x1, float* x2, int* found) {
    *found = 0;
    float product = c / a;
    float sum = -b / a;

    if (product >= 0) {
        for (*x2 = -sqrt(product); *x2 <= sqrt(product); *x2 += 0.1) {
            *x1 = product / (*x2);
            if (fabs(*x1 + *x2 - sum) < 1e-5) { // Проверка суммы корней
                *found = 1;
                return;
            }
        }
    } else {
        for (*x2 = sqrt(-product); *x2 >= -sqrt(-product); *x2 -= 0.1) {
            *x1 = product / (*x2);
            if (fabs(*x1 + *x2 - sum) < 1e-5) {
                *found = 1;
                return;
            }
        }
    }
}

int modify_value(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
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
