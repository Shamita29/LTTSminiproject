#include"unity.h"
#include "order.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

struct employee
{

	char name[30];
	int id;
	int dd; int mm; int yy;
	int YOJ;
	char place[20];
	float salary;
	char department[20];
	
	int quantity;
}emp;


void testDetails(void)
{
strcpy(emp.name,"Shamita");
strcpy(emp.id,"01");
strcpy(emp.dd,"31");
strcpy(emp.mm,"02");
strcpy(emp.yy,"2021");

strcpy(emp.YOJ,"2021");
strcpy(emp.place,"Hubli");
strcpy(emp.department,"Food");


TEST_ASSERT_EQUAL_STRING("shamiita",emp.name);
TEST_ASSERT_EQUAL_STRING("01",emp.id);
TEST_ASSERT_EQUAL_STRING("2021",emp.YOJ);
TEST_ASSERT_EQUAL_STRING("dharwad",emp.place);
TEST_ASSERT_EQUAL_STRING("Food",emp.department);

}

int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}