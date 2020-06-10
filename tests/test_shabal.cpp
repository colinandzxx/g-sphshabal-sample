#include <stdio.h>
#include <unistd.h>
#include <string>
#include <time.h>
#include "test_shabal.h"

#include <gtest/gtest.h>

// int main()
// {
//     printf("this is a test\n");

//     clock_t start = clock();
//     testCuda();
//     clock_t end = clock();
//     printf("tm: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);

//     return 0;
// }

TEST(shabal, 01)
{
    GPU_Count();
    printf("this is a test\n");
    clock_t start = clock();
    ASSERT_TRUE(testCuda() == 0);
    clock_t end = clock();
    printf("tm: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
}

TEST(shabal, plot_ctx)
{
    clock_t start = clock();
    testPlot();
    clock_t end = clock();
    printf("tm: %lf\n", (double)(end - start) / CLOCKS_PER_SEC);
}