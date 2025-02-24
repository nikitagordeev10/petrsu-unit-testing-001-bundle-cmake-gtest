#ifndef TST_STDOUT_H
#define TST_STDOUT_H

#include <gtest/gtest.h>

#include<fstream>

// dup, dup2
#include <unistd.h>

#include <fcntl.h>

#include <memory>
#include <string>

extern "C" {
#include "mathematical_calculator.h"
}


#define MAXLINE 1024

TEST(TestStdOut, TestStdOut) {
    // тест проверки вывода на экран нужных фраз с помощью перехвата потока (dup/dup2) и побайтового сравнения результатов

    // запоминаем старый поток вывода
    int oldOutput = dup(STDOUT_FILENO);

    // открываем файл для записи результата
    std::ofstream outFile("TestStdOut_TestStdOut.out", std::ios::binary);

    // проверяем что файл открылся
    ASSERT_TRUE(outFile.is_open());

    // закрываем выходной поток и заменяем его на файл
    close(STDOUT_FILENO);
    dup2(fileno(outFile), STDOUT_FILENO);

    // запускаем функцию
    printStdoutMessages();

    // очищаем выходной поток
    fflush(stdout);

    // закрываем файл
    outFile.close();

    // возвращаем вывод на место
    dup2(oldOutput, STDOUT_FILENO);

    // открываем оригинал и результат
    std::string filename = std::string(INPUTDIR) + "/TestSTDOut_output.txt";
    int testFd = open("TestStdOut_TestStdOut.out", O_RDONLY);
    int originFd = open(filename.c_str(), O_RDONLY);

    ASSERT_NE(testFd, -1);
    ASSERT_NE(originFd, -1);

    // подготовка к чтению данных
    int outputCount;
    int originCount;
    char outBuffer[MAXLINE];
    char originBuffer[MAXLINE];

    do {
        // блоковое чтение данных
         outputCount = read(testFd, outBuffer, MAXLINE - 1);
        originCount = read(originFd, originBuffer, MAXLINE - 1);
        ASSERT_EQ(outputCount, originCount);
        for (int i = 0; i < outputCount; i++) {
            ASSERT_EQ(outBuffer[i], originBuffer[i]);
        }
    } while (outputCount > 0);

    // все отлично, закрываем
    close(testFd);
    close(originFd);
}

TEST(TestStdOut, usingCapture) {
    // тест проверки вывода на экран нужных фраз с помощью библиотеки STD и gtest Capture

    // подключаем захват вывода
    testing::internal::CaptureStdout();

    // зпускаем функцию
    printStdoutMessages();

    //получаем результат
    std::string output = testing::internal::GetCapturedStdout();

    // читаем ожидаемую строку из файла
    std::string filename = std::string(INPUTDIR) + "/TestSTDOut_output.txt";
    std::ifstream f(filename);
    ASSERT_TRUE(f.is_open());

    std::string content((std::istreambuf_iterator<char>(f)), std::istreambuf_iterator<char>());
    ASSERT_EQ(output, content);
}

// Проверка вывода сообщений в stdout с использованием перехвата потока
TEST(TestStdOut, printStdoutMessages) {
    testing::internal::CaptureStdout();  // Перехватываем вывод
    printStdoutMessages();               // Вызываем функцию с выводом
    std::string output = testing::internal::GetCapturedStdout(); // Получаем результат

    std::string expected_output = "This is a test message from mathematical_calculator.c\nDo not disturb\n";
    ASSERT_EQ(output, expected_output); // Проверяем, что вывод совпадает с ожидаемым
}

#endif // TST_STDOUT_H
