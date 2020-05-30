#include "task_three.h"
#include "all_task.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_answer(int num_sent)
{
    int f;
    if (num_sent % 2 == 0) {
        f = 5;
    } else if (num_sent % 3 == 0 && num_sent % 2 != 0) {
        f = 8;
    } else if (num_sent % 2 != 0 && num_sent % 3 != 0) {
        f = 10;
    }
    int* answer_user = (int*)malloc(f * sizeof(int));
    printf("Введите через enter цифры в правильном порядке:\n");
    for (int i = 0; i < f; i++) {
        scanf("%d", &answer_user[i]);
    }
    if (num_sent % 2 == 0) {
        int z = check_user_answer(num_sent, answer_user);
        if (z == 5) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Number of matched numbers:%d\n", z);
            continue_task(3);
        }
    } else if (num_sent % 3 == 0 && num_sent % 2 != 0) {
        int z = check_user_answer(num_sent, answer_user);
        if (z == 8) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Number of matched numbers:%d\n", z);
            continue_task(3);
        }
    } else if (num_sent % 2 != 0 && num_sent % 3 != 0) {
        int z = check_user_answer(num_sent, answer_user);
        if (z == 10) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Number of matched numbers:%d\n", z);
            continue_task(3);
        }
    }
    free(answer_user);
    return 0;
}

int variant_answer(int num_sent)
{
    FILE* answer_third;
    answer_third
            = fopen("../text_file/"
                    "variant_answer_third.txt",
                    "r");
    if (answer_third == NULL) {
        printf("Кажется произошла ошибка открытия файла...");
        return 1;
    }
    char ch[B] = {0}, ch1[B] = {0};
    for (int i = 1; i < num_sent + 1; i++) {
        if (i == num_sent) {
            fgets(ch1, B, answer_third);
            printf("%s\n", ch1);
        }
        fgets(ch, B, answer_third);
    }
    fclose(answer_third);
    check_answer(num_sent);
    return 0;
}

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
