#include "all_task.h"
#include "task_one.h"
#include "task_three.h"
#include "task_two.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choose_your_number()
{
    int num_choice = 0;
    scanf("%d", &num_choice);
    return num_choice;
}

int open_all_task()
{
    FILE* task;
    task = fopen("../text_file/all_task.txt", "r");
    if (task == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        exit(EXIT_FAILURE);
    }
    char all_task[F] = {0};
    while (!feof(task)) {
        fgets(all_task, F, task);
        printf("%s", all_task);
    }
    fclose(task);
    return 0;
}

int continue_task(int val_for_return)
{
    printf("Для возврата в меню введите 1. Для продолжения выбранного ранее "
           "задания введите 2. Для выхода из программы введите 0.\n");
    int num_choice;
    scanf("%d", &num_choice);
    if (val_for_return != 1 && val_for_return != 2 && val_for_return != 3)
        printf("Вы ввели что-то другое...\n");
    else if (val_for_return == 1)
        return_task_one(num_choice);
    else if (val_for_return == 2)
        return_task_two(num_choice);
    else if (val_for_return == 3)
        return_task_three(num_choice);
    return 0;
}
