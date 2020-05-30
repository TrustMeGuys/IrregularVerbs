#include "task_three.h"
#include "all_task.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int return_task_three(int num_sent)
{
    if (num_sent == 0)
        exit(EXIT_SUCCESS);
    else if (num_sent == 1)
        main();
    else if (num_sent == 2)
        task_three();
    else {
        printf("Вы ввели что-то другое...");
        return -1;
    }
    return 0;
}
