#ifndef MATHEMATICAL_CALCULATOR_H
#define MATHEMATICAL_CALCULATOR_H

void discriminant(float a, float b, float c, float* x1, float* x2, int* has_real_roots);

void viet(float a, float b, float c, float* x1, float* x2, int* found);

int modify_value(int b);

int fibonachi(int num);

void printStdoutMessages();

extern int val;

#endif // MATHEMATICAL_CALCULATOR_H
