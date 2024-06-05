#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult


TEST(MatrixMultiplicationTest, TestMultiplyMatrices) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {58, 64},
        {139, 154}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}



TEST(MatrixMultiplicationTest, Test1x1) {
    std::vector<std::vector<int>> A = {
        {1}
    };
    std::vector<std::vector<int>> B = {
        {9}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {9}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test1x1liv2) {
    std::vector<std::vector<int>> A = {
        {1}
    };
    std::vector<std::vector<int>> B = {
        {-3}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {-3}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test1x1liv3) {
    std::vector<std::vector<int>> A = {
        {101}
    };
    std::vector<std::vector<int>> B = {
        {1230}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {124230}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test1x1liv4) {
    std::vector<std::vector<int>> A = {
        {12}
    };
    std::vector<std::vector<int>> B = {
        {12}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {144}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test1x2x1) {
    std::vector<std::vector<int>> A = {
        {1,2}
    };
    std::vector<std::vector<int>> B = {
        {3},
        {4}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 2, 1);

    std::vector<std::vector<int>> expected = {
        {11}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test1x2x1liv2) {
    std::vector<std::vector<int>> A = {
        {1,2}
    };
    std::vector<std::vector<int>> B = {
        {2},
        {1}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 2, 1);

    std::vector<std::vector<int>> expected = {
        {4}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test1x2x3) {
    std::vector<std::vector<int>> A = {
        {9,10}
    };
    std::vector<std::vector<int>> B = {
        {1,2,3},
        {4,5,6}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 1, 2, 1);

    std::vector<std::vector<int>> expected = {
        {4}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}


TEST(MatrixMultiplicationTest, Test2x2x2) {
    std::vector<std::vector<int>> A = {
        {1,2},
        {3,4}
    };
    std::vector<std::vector<int>> B = {
        {5,6},
        {7,8}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 1, 2, 1);

    std::vector<std::vector<int>> expected = {
        {19,22},
        {43,50}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test2x3x3) {
    std::vector<std::vector<int>> A = {
        {0,0},
        {9,11}
    };
    std::vector<std::vector<int>> B = {
        {0,0,17},
        {0,0,13}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 2, 2, 3);

    std::vector<std::vector<int>> expected = {
        {0,0,0},
        {0,0,296}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test2x3x3liv2) {
    std::vector<std::vector<int>> A = {
        {-2,0},
        {0,4}
    };
    std::vector<std::vector<int>> B = {
        {4,0,2},
        {0,0,0}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 2, 2, 3);

    std::vector<std::vector<int>> expected = {
        {-8,0,-8},
        {0,0,0}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test10x10x10) {
    std::vector<std::vector<int>> A(10, std::vector<int>(10, 0));
    std::vector<std::vector<int>> B(10, std::vector<int>(10, 0));
    for(int i=0; i<10;i++)
        for(int j=0; j<10;j++){
            A[i][j] = i+j;
            B[i][j] = i+j;
        }
    std::vector<std::vector<int>> C(10, std::vector<int>(10, 0));

    multiplyMatrices(A, B, C, 10,10,10);

    std::vector<std::vector<int>> expected(10, std::vector<int>(10, 0));


    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}


TEST(MatrixMultiplicationTest, Test100x100x100) {
    std::vector<std::vector<int>> A(100, std::vector<int>(100, 0));
    std::vector<std::vector<int>> B(100, std::vector<int>(100, 0));
    for(int i=0; i<10;i++)
        for(int j=0; j<10;j++){
            A[i][j] = i+j;
            if(i==j)
                B[i][j] = 1;
        }
    std::vector<std::vector<int>> C(100, std::vector<int>(100, 0));

    multiplyMatrices(A, B, C, 100,100,100);

    ASSERT_EQ(C, A) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test10x10x10liv2) {
    std::vector<std::vector<int>> A(10, std::vector<int>(10, 0));
    std::vector<std::vector<int>> B(10, std::vector<int>(10, 0));

    std::vector<std::vector<int>> C(10, std::vector<int>(10, 0));

    multiplyMatrices(A, B, C, 10,10,10);

    ASSERT_EQ(C, A) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, Test10x10x10liv3) {
    std::vector<std::vector<int>> A(10, std::vector<int>(10, 0));
    std::vector<std::vector<int>> B(10, std::vector<int>(10, 0));
    for(int i=0; i<10;i++)
        for(int j=0; j<10;j++){
            A[i][j] = -1;
            B[i][j] = -1;
        }
    std::vector<std::vector<int>> C(10, std::vector<int>(10, 0));

    multiplyMatrices(A, B, C, 10,10,10);

    std::vector<std::vector<int>> expected(10, std::vector<int>(10, 0));
    for(int i=0; i<10;i++)
        for(int j=0; j<10;j++){
            expected[i][j] = 10;
        }


    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}


TEST(MatrixMultiplicationTest, Test5x4x3) {
    std::vector<std::vector<int>> A = {
        {1001,0,0,3},
        {20,4,0,0},
        {2,23,4,13},
        {0,23,21,0},
        {2,3,4,2}
    };
    std::vector<std::vector<int>> B = {
        {4,0,4},
        {0,0,0},
        {0,0,0},
        {343,3,24}
    };

    
    std::vector<std::vector<int>> C(5, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 5,4,3);

    std::vector<std::vector<int>> expected = {
        {5033,9,4076},
        {80,0,80},
        {4467,39,320},
        {0,0,0},
        {694,6,56}
    };


    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

