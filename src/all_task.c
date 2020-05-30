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
    int x = 0;
    scanf("%d", &x);
    return x;
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

int continue_task(int z)
{
    printf("Хотите выбрать другое упражнение? Или попробовать еще раз? (1/2)(0 "
           "выйти из "
           "программы)\n");
    int x;
    scanf("%d", &x);
    if (z != 1 && z != 2 && z != 3)
        printf("Вы ввели что-то другое...\n");
    else if (z == 2)
        return_task_one(x);
    else if (z == 3)
        return_task_two(x);
    else
        return_task_three(x);
    return 0;
}
