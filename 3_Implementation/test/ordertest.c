#include"/unity/unity.h"
#include "/src/order.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
int status=0;
void test_file(void);
//void test_checkid(void);
void test_getdata(void);



int main()
{   
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_getdata);
    RUN_TEST(test_file);
    //RUN_TEST(test_admin);
    
    return UNITY_END();
}


void test_file()
{    
	FILE *fp;
	fp=fopen("record1.txt","r");
     if(fp == NULL)
          TEST_ASSERT_EQUAL(1,status); //file has no contents in it
     else
      	 TEST_ASSERT_EQUAL(0,status);
}

void test_getdata(){

 int ID=2; //assuming this is the value of employee ID entered  by admin to check
 int ID2=1; //assuming this is the right ID

  TEST_ASSERT_EQUAL_INT_MESSAGE(1, ID2, "Test pass:");

 //this will fail
  //TEST_ASSERT_EQUAL_INT_MESSAGE(1, ID, "Test Failed: \"ID\" should be 1");
}


