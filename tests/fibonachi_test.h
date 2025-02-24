#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "mathematical_calculator.h"
}

TEST(fibonachiTest, num0) {
    ASSERT_EQ(fibonachi(0), 0);
    ASSERT_EQ(fibonachi(1), 1);
    ASSERT_EQ(fibonachi(2), 2);
}

TEST(fibonachiTest, greather2) {
    ASSERT_EQ(fibonachi(5), 5);
    ASSERT_EQ(fibonachi(10), 55);
}

TEST(fibonachiTest, negative) {
    ASSERT_EQ(fibonachi(-1), 0);
}

TEST(fibonachiTest, inputFile) {
    val = 2;
    char *filename = (char *)malloc(sizeof(char) * 1024);
    sprintf(filename, "%s/input321.txt", INPUTDIR);

    int fd = open(filename, O_RDONLY);
    free(filename);
    if (fd < 0) {
        ASSERT_EQ(errno, 0);
    }

    char *buf = (char *)malloc(sizeof(char) * 512);
    int readcount = read(fd, buf, 512);
    ASSERT_TRUE(readcount > 0);
    close(fd);

    int input = 0;
    int output =0;
    int ret = sscanf(buf, "%d %d", &input, &output);
    free(buf);
    ASSERT_EQ(ret, 2);

    ret = fibonachi(input);
    ASSERT_EQ(ret, output);
}

/* ------------------- Фибоначчи: большие числа ------------------- */

// Проверка с большим числом для проверки вычислений
TEST(fibonachiTest, large_number) {
    int result = fibonachi(100);
    ASSERT_EQ(result, 354224848179261915075);  // 100-й элемент последовательности Фибоначчи
}

// Проверка для переполнения int
TEST(fibonachiTest, overflow_check) {
    int result = fibonachi(47); // Следующий элемент будет превышать размер int (2^31-1)
    ASSERT_GT(result, 0);  // 47-й элемент Фибоначчи больше 0
    ASSERT_LT(result, 2147483647); // Должен быть меньше максимального значения для int
}



#endif // FIBONACHI_H
