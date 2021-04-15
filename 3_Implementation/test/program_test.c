#include "unity.h"
#include "header.h"

#define PROJECT_NAME    "Contact_Management_System"

/* Prototypes for all the test functions */
void test_add_bike(void);
void test_add_bus(void);
void test_add_car(void);
void test_delete_vehicle(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add_car);
  RUN_TEST(test_add_bike);
  RUN_TEST(test_add_bus);
  RUN_TEST(test_delete_vehicle);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add_bike(void) 
{

  TEST_ASSERT_EQUAL(1, add_bike());
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, add_bike());

}

void test_add_bus(void) 
{

  TEST_ASSERT_EQUAL(1, add_bus());
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, add_bus());

}

void test_add_car(void) 
{

  TEST_ASSERT_EQUAL(1, add_car());
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, add_car());

}

void test_delete_vehicle(void)
{
    
  TEST_ASSERT_EQUAL(1, Reduce_Count());
  
  /* Dummy fail*/
  //TEST_ASSERT_EQUAL(0, Reduce_Count());

}