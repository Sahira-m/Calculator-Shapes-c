#include "unity.h"
#include "shapes.h"

extern float side1, side2, side3, areaTriangle, perimeterTriangle, base, height;

void setUp(void)
{
    /* This is run before EACH TEST */
    side1 = 0.00;
    side2 = 0.00;
    side3 = 0.00;
    areaTriangle = 0.00;
    perimeterTriangle = 0.00;
    base = 0.00;
    height = 0.00;
}

void tearDown(void)
{
}

void test_perimeter_triangle(void)
{
    perimeterTriangles(1.1, 2.1, 4.0);
    TEST_ASSERT_EQUAL_FLOAT(7.30, perimeterTriangles(1.1, 2.1, 4.0));
    perimeterTriangles(1.0, 2.0, 3.0);
    TEST_ASSERT_EQUAL_FLOAT(6.00, perimeterTriangles(1.0, 2.0, 3.0));
    perimeterTriangles(10.1, 20.1, 10.0);
    TEST_ASSERT_EQUAL_FLOAT(40.20, perimeterTriangles(10.1, 20.1, 10.0));
}

void test_area_triangle(void)
{
    areaTriangles(1.1, 2.1);
    TEST_ASSERT_EQUAL_FLOAT(7.30, areaTriangles(1.1, 2.1));
    areaTriangles(1.1, 2.1);
    TEST_ASSERT_EQUAL_FLOAT(6.00, areaTriangles(1.1, 2.1));
    areaTriangles(1.1, 2.1);
    TEST_ASSERT_EQUAL_FLOAT(40.20, areaTriangles(1.1, 2.1));
}
void test_area_shapes(void)
{
    areaRectangles(1.1, 2.1);
    TEST_ASSERT_EQUAL_FLOAT(2.31, areaRectangles(1.1, 2.1));
    areaRectangles(10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(203.1, areaRectangles(10.1, 20.1));
    areaRectangles(4.5, 5.1);
    TEST_ASSERT_EQUAL_FLOAT(22.95, areaRectangles(4.5, 5.1));
}
void test_perimeter_shapes(void)
{
    perimeterRectagles(1.1, 2.1);
    TEST_ASSERT_EQUAL_FLOAT(4.62, perimeterRectagles(1.1, 2.1));
    perimeterRectagles(10.1, 20.1);
    TEST_ASSERT_EQUAL_FLOAT(406.2, perimeterRectagles(10.1, 20.1));
    perimeterRectagles(4.1, 9.1);
    TEST_ASSERT_EQUAL_FLOAT(74.62, perimeterRectagles(4.1, 9.1));
}

void test_area_circle(void)
{
    areaCircle(1.1);
    TEST_ASSERT_EQUAL_FLOAT(3.79, areaCircle(1.1));
    areaCircle(10.1);
    TEST_ASSERT_EQUAL_FLOAT(320.31, areaCircle(10.1));
    areaCircle(4.1);
    TEST_ASSERT_EQUAL_FLOAT(52.78, areaCircle(4.1));
}
void test_perimeter_circle(void)
{
    perimeterCircle(1.0);
    TEST_ASSERT_EQUAL_FLOAT(6.28, perimeterCircle(1.0));
    perimeterCircle(10.0);
    TEST_ASSERT_EQUAL_FLOAT(62.8, perimeterCircle(10.0));
    perimeterCircle(89.0);
    TEST_ASSERT_EQUAL_FLOAT(558.92, perimeterCircle(89.0));
}
int main(void)
{
    RUN_TEST(test_area_triangle);
    RUN_TEST(test_perimeter_triangle);
    RUN_TEST(test_area_circle);
    RUN_TEST(test_perimeter_circle);
    RUN_TEST(test_area_shapes);
    RUN_TEST(test_perimeter_shapes);
    return UNITY_END();
}
