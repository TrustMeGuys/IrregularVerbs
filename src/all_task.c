#include "all_task.h"
#include "task_one.h"
#include "task_three.h"
#include "task_two.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_file_open_txt(FILE* some_file)
{
    if (some_file == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        return 1;
    }
    return 0;
}
int check_choose_number(int num_choice)
{
    if (num_choice <= 0) {
        printf(" Вы ввели что-то другое.\n");
        return 1;
    } else
        return 0;
}
int choose_your_number()
{
    int num_choice = 0;
    scanf("%d", &num_choice);
    check_choose_number(num_choice);
    return num_choice;
}

int open_all_task()
{
    FILE* task;
    task = fopen("../text_file/all_task.txt", "r");
    check_file_open_txt(task);
    char all_task[F] = {0};
    while (!feof(task)) {
        fgets(all_task, F, task);
        printf("%s", all_task);
    }
    fclose(task);
    return 0;
}

int check_continue(int val_for_return, int num_choice)
{
    if (val_for_return != 1 && val_for_return != 2 && val_for_return != 3) {
        printf("Вы ввели что-то другое.\n");
        exit(1);
    }
    if (num_choice != 1 && num_choice != 2 && num_choice != 0) {
        printf(" Вы ввели что-то другое.\n");
        exit(1);
    }
    return 0;
}
int continue_task(int val_for_return)
{
    printf("Для возврата в меню введите 1. Для продолжения выбранного ранее "
           "задания введите 2. Для выхода из программы введите 0.\n");
    int num_choice;
    scanf("%d", &num_choice);
    check_continue(val_for_return, num_choice);
    if (val_for_return == 1)
        return_task_one(num_choice);
    else if (val_for_return == 2)
        return_task_two(num_choice);
    else if (val_for_return == 3)
        return_task_three(num_choice);
    return 0;
}
