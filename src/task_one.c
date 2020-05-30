#include "task_one.h"
#include "all_task.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int open_first_task()
{
    FILE* first_task;
    first_task
            = fopen("../text_file/"
                    "first_task_verb.txt",
                    "r");
    if (first_task == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        return 1;
    }
    printf("Выберете номер глагола(1-100):");
    int x = choose_your_number();
    int i = 1;
    char ch[A] = {0};
    while (i <= x) {
        fgets(ch, A, first_task);
        if (i == x) {
            printf("%s\n", ch);
        }
        i++;
    }
    fclose(first_task);
    check_answer_first(x);
    return 0;
}
