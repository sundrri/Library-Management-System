#include"library.h"


int main(){
    int task, success, ID, new_member_id;
    char new_status[10], new_date_of_issue[10], new_due_date[10], new_member_first_name[10],new_member_last_name[10], new_title[20];
    
    test_values (*function_pointer_enter_new_record)(int , char []) = enter_new_record;
    test_values (*function_pointer_delete_record)(int) = delete_record;
    test_values (*function_pointer_view_a_record)(int) = view_a_record;
    test_values (*function_pointer_update_record)(int, char [], char [], char [], char [],char [], int) = update_record;
    test_values (*function_pointer_view_all_records)() = view_all_records;
    
    printf("1. View all books\n2. Add a new book\n3. Find a book\n4. Update the status of a book\n5. Delete records of a book\n");
    printf("Enter the task number to perform one of the tasks\n");
    scanf("%d",&task);
    
    if(task == 1){
        success = function_pointer_view_all_records();
    }else if(task == 2){
        printf("Enter the ID and title of new book\n");
        scanf("%d\n",&ID);    
        fgets(new_title, 20, stdin);
        success = function_pointer_enter_new_record(ID, new_title);
    }else if(task == 3){
        printf("Enter the ID of the book to search\n");
        scanf("%d",&ID);
        success = function_pointer_view_a_record(ID);
    }else if(task == 4){
        printf("Enter the ID of the book to update\n");
        scanf("%d",&ID);
        success = function_pointer_view_a_record(ID);
        if(success == 1){
            printf("Enter new status\n");
            scanf("%s", new_status);
            
            printf("Enter new date of issue\n");
            scanf("%s", new_date_of_issue);
            
            printf("Enter new due date\n");
            scanf("%s", new_due_date);
            
            printf("Enter first name of member\n");
            scanf("%s", new_member_first_name);
            
            printf("Enter last name of member\n");
            scanf("%s", new_member_last_name);
            
            printf("Enter member ID\n");
            scanf("%d", &new_member_id);
            
            success = function_pointer_update_record(ID, new_status, new_date_of_issue, new_due_date, new_member_first_name,new_member_last_name, new_member_id);
        }
    }else if (task==5){
        printf("Enter the ID of the book to delete\n");
        scanf("%d",&ID);
        success=function_pointer_delete_record(ID);
    }else{
        printf("Wrong input\n");
    }
    if(success == pass){
        printf("Operation successful\n");
    }else if(success == fail){
        printf("Operation unseccessful\n");
    }else{
        printf("Error condition\n");
    }
    return 0;
}
