#include "task_three.h"
#include "all_task.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_user_answer(int num_sent, int* answer_user)
{
    int num_correct_answer = 0;
    if (num_sent % 2 == 0) {
        int variant1_1[5] = {2, 3, 1, 4, 5}, variant1_2[5] = {1, 5, 4, 3, 2},
            variant1_3[5] = {3, 4, 5, 2, 1};
        for (int i = 0; i < 5; i++) {
            if ((num_sent == 4) || (num_sent == 6) || (num_sent == 8)) {
                if (variant1_1[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            } else if (num_sent == 10) {
                if (variant1_2[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            } else if (num_sent == 2) {
                if (variant1_3[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            }
        }
    } else if (num_sent % 3 == 0 && num_sent % 2 != 0) {
        int variant2_1[8] = {6, 7, 1, 2, 3, 5, 4, 8},
            variant2_2[8] = {3, 8, 6, 1, 2, 4, 5, 7};
        for (int i = 0; i < 8; i++) {
            if (num_sent == 3) {
                if (variant2_1[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            } else if (num_sent == 9) {
                if (variant2_2[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            }
        }
    } else if (num_sent % 2 != 0 && num_sent % 3 != 0) {
        int variant3_1[10] = {10, 2, 3, 5, 4, 9, 8, 7, 6, 1},
            variant3_2[10] = {1, 9, 8, 7, 10, 6, 4, 5, 3, 2},
            variant3_3[10] = {2, 10, 9, 6, 5, 8, 7, 3, 1, 4};
        for (int i = 0; i < 10; i++) {
            if (num_sent == 1) {
                if (variant3_1[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            } else if (num_sent == 7) {
                if (variant3_2[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            } else if (num_sent == 5) {
                if (variant3_3[i] == answer_user[i]) {
                    num_correct_answer++;
                }
            }
        }
    }
    return num_correct_answer;
}

int check_answer(int num_sent)
{
    int size_answer;
    if (num_sent % 2 == 0) {
        size_answer = 5;
    } else if (num_sent % 3 == 0 && num_sent % 2 != 0) {
        size_answer = 8;
    } else if (num_sent % 2 != 0 && num_sent % 3 != 0) {
        size_answer = 10;
    }
    int* answer_user = (int*)malloc(size_answer * sizeof(int));
    printf("Введите через enter или пробел цифры в правильном порядке:\n");
    for (int i = 0; i < size_answer; i++) {
        scanf("%d", &answer_user[i]);
    }
    if (num_sent % 2 == 0) {
        int num_correct_answer = check_user_answer(num_sent, answer_user);
        if (num_correct_answer == 5) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Количество совпавших номеров: %d\n", num_correct_answer);
            continue_task(3);
        }
    } else if (num_sent % 3 == 0 && num_sent % 2 != 0) {
        int num_correct_answer = check_user_answer(num_sent, answer_user);
        if (num_correct_answer == 8) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Количество совпавших номеров: %d\n", num_correct_answer);
            continue_task(3);
        }
    } else if (num_sent % 2 != 0 && num_sent % 3 != 0) {
        int num_correct_answer = check_user_answer(num_sent, answer_user);
        if (num_correct_answer == 10) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Количество совпавших номеров: %d\n", num_correct_answer);
            continue_task(3);
        }
    }
    free(answer_user);
    return 0;
}

int work_in_variant_answer_third_file(int num_sent)
{
    FILE* answer_third;
    answer_third
            = fopen("../text_file/"
                    "variant_answer_third.txt",
                    "r");
    int flag = check_file_open_txt(answer_third);
    if (flag)
        return flag;
    char ch[B] = {0}, ch1[B] = {0};
    for (int i = 1; i < num_sent + 1; i++) {
        if (i == num_sent) {
            fgets(ch1, B, answer_third);
            printf("%s\n", ch1);
        }
        fgets(ch, B, answer_third);
    }
    fclose(answer_third);
    return flag;
}

int variant_answer(int num_sent)
{
    work_in_variant_answer_third_file(num_sent);
    check_answer(num_sent);
    return 0;
}

int work_in_three_task_file(int num_sent)
{
    FILE* three_task;
    three_task = fopen("../text_file/three_task.txt", "r");
    int flag = check_file_open_txt(three_task);
    if (flag)
        return flag;
    char ch[B] = {0}, ch1[B] = {0};
    for (int i = 1; i < num_sent + 1; i++) {
        if (i == num_sent) {
            fgets(ch1, B, three_task);
            printf("%s\n", ch1);
        }
        fgets(ch, B, three_task);
    }
    fclose(three_task);
    return flag;
}

int task_three()
{
    printf("Выберите номер предложения, которое хотите перевести (1-10):\n");
    int num_sent = choose_your_number();
    if ((num_sent > 10) || (num_sent < 1)) {
        printf("Вы ввели что-то другое...\n");
        return -1;
    }
    work_in_three_task_file(num_sent);
    variant_answer(num_sent);
    return 0;
}

int return_task_three(int num_choice)
{
    if (num_choice == 0)
        exit(EXIT_SUCCESS);
    else if (num_choice == 1)
        main();
    else if (num_choice == 2)
        task_three();
    else {
        printf("Вы ввели что-то другое...");
        return -1;
    }
    return 0;
}
