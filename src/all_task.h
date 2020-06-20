#ifndef ALL_TASK_H
#define ALL_TASK_H
#include <stdio.h>
#define F 40

int choose_your_number();
int open_all_task();
int continue_task(int val_for_return);
int check_choose_number(int num_choice);
int check_continue(int val_for_return, int num_choice);
int check_file_open_txt(FILE* some_file);
#endif
