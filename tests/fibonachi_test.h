#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string>
#include <vector>

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
    int val = 2;
    std::string filename = std::string(INPUTDIR) + "/input321.txt";

    int fd = open(filename.c_str(), O_RDONLY);
    ASSERT_NE(fd, -1); // check that the file was opened successfully

    std::vector<char> buf(512);
    ssize_t readcount = read(fd, buf.data(), buf.size());  // using std::vector
    ASSERT_GT(readcount, 0);
    close(fd);

    int input = 0;
    int output = 0;
    int ret = sscanf(buf.data(), "%d %d", &input, &output);  // using std::vector
    ASSERT_EQ(ret, 2);

    ret = fibonachi(input);
    ASSERT_EQ(ret, output);
}


#endif // FIBONACHI_H
