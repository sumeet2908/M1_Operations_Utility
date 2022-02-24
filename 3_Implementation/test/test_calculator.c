#include "unity.h"
#include "calculator.h"

void setUp()
{

}

void tearDown()
{

}

void test_addition(void)
{
    int n1;
    int n2;
    int actual_result=n1+n2;
     
    TEST_ASSERT_EQUAL(addition(n1,n2),actual_result); 
}
int test_main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    RUN_TEST(test_addition);

      return UNITY_END();
}
