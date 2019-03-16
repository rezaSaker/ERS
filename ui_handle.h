#include "file_handle.h"

#ifndef UI_HANDLE_H
#define UI_HANDLE_H

//function prototypes
char on_main_menu();
void view_employee_list();
void add_new_employee();
void edit_existing_employee();
void delete_existing_employee();
int user_confirmed_decision(char confirmFor[]);
int show_employee_data(struct employeeData employee, int employeeNum);
void show_success_message(char message[]);
void show_error_message(char message[]);

#endif