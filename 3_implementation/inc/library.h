#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct book_data {
    int book_id;
    char book_title[20];
    char status[10];
    char member_first_name[10];
    char member_last_name[10];
    int member_id;
    char date_of_issue[10];
    char due_date[10];
}book_data;


typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;


test_values view_a_record(int id);


test_values enter_new_record(int id, char title[]);


test_values update_record(int id, char new_status[], char new_date_of_issue[], char new_due_date[], char new_member_first_name[],char new_member_last_name[], int new_member_id);


test_values delete_record(int id);


test_values view_all_records();

#endif
