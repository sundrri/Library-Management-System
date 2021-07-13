#include"library.h"
#include"unity_internals.h"
#include"unity.h"

/* Required by the unity test framework */
void setUp(){}

/* Required by the unity test framework */
void tearDown(){}


void test_enter_new_record(void){
    TEST_ASSERT_EQUAL(pass,enter_new_record(200, "Harry Potter"));
}

void test_view_all_records(void){
    TEST_ASSERT_EQUAL(pass,view_all_records());
}

void test_view_a_record(void){
    TEST_ASSERT_EQUAL(fail,view_a_record(-2));
    TEST_ASSERT_EQUAL(pass,view_a_record(200));
}

void test_update_record(void){
    TEST_ASSERT_EQUAL(pass,update_record(200, "issued", "12/03/21", "23/03/21", "Ram","Kumar", 123));
}

void test_delete_record(void){
    TEST_ASSERT_EQUAL(pass,delete_record(200));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_enter_new_record);
    RUN_TEST(test_view_a_record);
    RUN_TEST(test_update_record);
    RUN_TEST(test_delete_record);
    RUN_TEST(test_view_all_records);
    
    return UNITY_END();
}
