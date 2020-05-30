#include "task_three.h"
#include "all_task.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int task_three()
{
    printf("Выберите номер предложения, которое хотите перевести (1-7):\n");
    int num_sent = choose_your_number();
    if ((num_sent > 7) || (num_sent < 1)) {
        printf("Мы же попросили, от 1 до 7!!!\n");
        return -1;
    }
    FILE* three_task;
    three_task = fopen("../text_file/three_task.txt", "r");
    if (three_task == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        return -1;
    }
    char ch[B] = {0}, ch1[B] = {0};
    for (int i = 1; i < num_sent + 1; i++) {
        if (i == num_sent) {
            fgets(ch1, B, three_task);
            printf("%s\n", ch1);
        }
        fgets(ch, B, three_task);
    }
    variant_answer(num_sent);
    fclose(three_task);
    return 0;
}

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
