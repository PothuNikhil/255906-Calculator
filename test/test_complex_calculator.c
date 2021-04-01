#include "header.h"
#include "unity.h"

static complex c1 = {0, 0};
static complex c2 = {0, 0};
static complex result = {0, 0};
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void cadd(void)
{
    c1.real = 0;
    c1.img = 0;
    
    c2.real = 0;
    c2.img = 0;
    
    TEST_ASSERT_EQUAL(Success, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);


    c1.real = 30;
    c1.img = 40;
    
    c2.real = 20;
    c2.img = 80;
    
    TEST_ASSERT_EQUAL(Success, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(50, result.real);
    TEST_ASSERT_EQUAL(120, result.img);

    c1.real = -50;
    c1.img = -25;
    
    c2.real = 80;
    c2.img = 85;
    
    TEST_ASSERT_EQUAL(Success, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(30, result.real);
    TEST_ASSERT_EQUAL(60, result.img);

    c1.real = -25;
    c1.img = -15;
    
    c2.real = -75;
    c2.img = -95;
    
    TEST_ASSERT_EQUAL(Success, complex_sum(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-100, result.real);
    TEST_ASSERT_EQUAL(-110, result.img);

    
}


void cdiff(void)
{
    c1.real = 0;
    c1.img = 0;
    
    c2.real = 0;
    c2.img = 0;
    
    TEST_ASSERT_EQUAL(Success, complex_sub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);


    c1.real = 30;
    c1.img = 40;
    
    c2.real = 20;
    c2.img = 80;
    
    TEST_ASSERT_EQUAL(Success, complex_sub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(10, result.real);
    TEST_ASSERT_EQUAL(-40, result.img);

    c1.real = -50;
    c1.img = -25;
    
    c2.real = 80;
    c2.img = 85;
    
    TEST_ASSERT_EQUAL(Success, complex_sub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-130, result.real);
    TEST_ASSERT_EQUAL(-110, result.img);

    c1.real = -25;
    c1.img = -15;
    
    c2.real = -75;
    c2.img = -95;
    
    TEST_ASSERT_EQUAL(Success, complex_sub(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(50, result.real);
    TEST_ASSERT_EQUAL(80, result.img);

}


void cmul(void)
{
    c1.real = 0;
    c1.img = 0;
    
    c2.real = 0;
    c2.img = 0;
    
    TEST_ASSERT_EQUAL(Success, complex_mul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);


    c1.real = 30;
    c1.img = 40;
    
    c2.real = 20;
    c2.img = 80;
    
    TEST_ASSERT_EQUAL(Success, complex_mul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-2600, result.real);
    TEST_ASSERT_EQUAL(3200, result.img);

    c1.real = -50;
    c1.img = -25;
    
    c2.real = 80;
    c2.img = 85;
    
    TEST_ASSERT_EQUAL(Success, complex_mul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(-1875, result.real);
    TEST_ASSERT_EQUAL(-6250, result.img);

    c1.real = -25;
    c1.img = -15;
    
    c2.real = -75;
    c2.img = -95;
    
    TEST_ASSERT_EQUAL(Success, complex_mul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(450, result.real);
    TEST_ASSERT_EQUAL(3500, result.img);

    c1.real = 0;
    c1.img = -15;
    
    c2.real = -75;
    c2.img = 0;
    
    TEST_ASSERT_EQUAL(Success, complex_mul(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(1125, result.img);
}


void cdiv(void)
{
    c1.real = 0;
    c1.img = 0;
    
    c2.real = 0;
    c2.img = 0;
    
    TEST_ASSERT_EQUAL(ErrorDivByZero, complex_div(&c1, &c2, &result));
    
    c1.real = 30;
    c1.img = 40;
    
    c2.real = 20;
    c2.img = 80;
    
    TEST_ASSERT_EQUAL(Success, complex_div(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);


    c1.real = 55;
    c1.img = -3;
    
    c2.real = 10;
    c2.img = 10;
    
    TEST_ASSERT_EQUAL(Success, complex_div(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(2, result.real);
    TEST_ASSERT_EQUAL(-2, result.img);


    c1.real = -50;
    c1.img = -25;
    
    c2.real = 80;
    c2.img = 85;
    
    TEST_ASSERT_EQUAL(Success, complex_div(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);

    c1.real = -25;
    c1.img = -15;
    
    c2.real = -75;
    c2.img = -95;
    
    TEST_ASSERT_EQUAL(Success, complex_div(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);

    c1.real = 0;
    c1.img = -15;
    
    c2.real = -75;
    c2.img = 0;
    
    TEST_ASSERT_EQUAL(Success, complex_div(&c1, &c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.img);

}



int test_main(void)

{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(cadd);
    RUN_TEST(cdiff);
    RUN_TEST(cmul);
    RUN_TEST(cdiv);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
