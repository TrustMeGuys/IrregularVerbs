#include "all_task.h"
#include "task_one.h"
#include "task_three.h"
#include "task_two.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    open_all_task();
    printf("Выберете номер задания:\n");
    int i = choose_your_number();
    if (i == 1) {
        open_first_task();
    } else if (i == 2) {
        second_task();
    } else if (i == 3) {
        task_three();
    } else {
        printf("Вы ввели что-то другое...\n");
    }

    //  printf("\nWOW!\n");
    return 0;
}
