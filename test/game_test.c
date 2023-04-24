#include "unity.h"
#include "calculator.h"

void test_game_condition()
{
    TEST_ASSERT_TRUE_MESSAGE(true, game('r', 'p'))
    TEST_ASSERT_TRUE_MESSAGE(true, game('p', 's'))
    TEST_ASSERT_TRUE_MESSAGE(true, game('s', 'r'))
    TEST_ASSERT_TRUE_MESSAGE(true, game('p', 'r'))
    TEST_ASSERT_TRUE_MESSAGE(true, game('r', 's'))
    TEST_ASSERT_TRUE_MESSAGE(true, game('s', 'p'))
}
int main(void)
{
    RUN_TEST(test_game_condition);

    return UNITY_END();
}
