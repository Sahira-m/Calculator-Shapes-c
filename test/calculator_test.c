#include "unity.h"
#include "calculator.h"

void setUp(void)
{
    /* This is run before EACH TEST */
}

void tearDown(void)
{
}
// 1
void test_add_Function(void)
{
    addFunction(10, 20);
    TEST_ASSERT_EQUAL_FLOAT(30.00, addFunction(10, 20));
    addFunction(-10, -20);
    TEST_ASSERT_EQUAL_FLOAT(-30.00, addFunction(-10, -20));
    addFunction(-10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(10.00, addFunction(10.1, 20.1));
}
// 2
void test_multiply_Function(void)
{
    multiplyFunction(10, 20);
    TEST_ASSERT_EQUAL_FLOAT(200.00, multiplyFunction(10, 20));
    multiplyFunction(-10, -20);
    TEST_ASSERT_EQUAL_FLOAT(300.00, multiplyFunction(-10, -20));
    multiplyFunction(-10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(-203.01, multiplyFunction(-10.1, 20.1));
}

// 3
void test_substract_Function(void)
{
    substractFunction(10, 20);
    TEST_ASSERT_EQUAL_FLOAT(-10.00, substractFunction(10, 20));
    substractFunction(-10, -20);
    TEST_ASSERT_EQUAL_FLOAT(-30.00, substractFunction(-10, -20));
    substractFunction(-10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(10.00, substractFunction(-10.1, -20.1));
}
// 4
void test_divide_Function(void)
{
    divideFunction(100, 20);
    TEST_ASSERT_EQUAL_FLOAT(5.00, divideFunction(100, 20));
    divideFunction(-10, -20);
    TEST_ASSERT_EQUAL_FLOAT(0.5, divideFunction(-10, -20));
    divideFunction(-10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(-0.50, divideFunction(-10.1, 20.1));
}
// 5
void test_modular_Function(void)
{
    modularFunction(10, 20);
    TEST_ASSERT_EQUAL_FLOAT(-10.00, modularFunction(10, 20));
    modularFunction(-10, -20);
    TEST_ASSERT_EQUAL_FLOAT(-30.00, modularFunction(-10, -20));
    modularFunction(-10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(10.00, modularFunction(-10.1, -20.1));
}

int main(void)
{
    RUN_TEST(test_add_Function);
    RUN_TEST(test_substract_Function);
    RUN_TEST(test_divide_Function);
    RUN_TEST(test_modular_Function);
    RUN_TEST(test_multiply_Function);
    return UNITY_END();
}
