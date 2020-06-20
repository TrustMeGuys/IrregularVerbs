#include "task_one.h"
#include "all_task.h"
#include <assert.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int return_task_one(int x)
{
    if (x == 0)
        exit(EXIT_SUCCESS);
    else if (x == 1)
        main();
    else if (x == 2)
        open_first_task();
    return 0;
}
int check_see_answer(char* answer, char* no, char* yes)
{
    if (strcmp(answer, no) != 0 && strcmp(answer, yes) != 0) {
        printf("Вы ввели что-то другое.");
        return (1);
    } else
        return 0;
}
int see_answer(
        int z,
        char ch1[A],
        char ch2[A],
        char second_verb[A],
        char third_verb[A])
{
    char answer[3] = {0}, yes[3] = "y", no[3] = "n";
    scanf("%s", answer);
    if (strcmp(answer, yes) == 0) {
        if (z == 1) {
            printf("Вторая форма глагола: %s\n", second_verb);
            printf("Правильный ответ: %s\n", ch1);
            continue_task(1);

        } else if (z == 2) {
            printf("Третья форма глагола:%s\n", third_verb);
            printf("Правильный ответ: %s\n", ch2);
            continue_task(1);
        } else if (z == 3) {
            printf("Вторая форма глагола: %s\n", second_verb);
            printf("Правильный ответ: %s\n", ch1);
            printf("Третья форма глагола:%s\n", third_verb);
            printf("Правильный ответ: %s\n", ch2);
            continue_task(1);
        }
    } else if (strcmp(answer, no) == 0)
        continue_task(1);
    return 0;
}
int check_user_verb(char* user_verb)
{
    for (int i = 0; user_verb[i];) {
        if (isalpha(user_verb[i])) {
            i++;
        } else {
            printf("Вы ввели что-то другое.\n");
            return 1;
        }
    }
    return 0;
}
int check_answer_first(int x)
{
    printf("Введите вторую форму глагола:\n");
    char second_verb[A] = {0}, third_verb[A] = {0};
    scanf("%s", second_verb);
    check_user_verb(second_verb);
    printf("Введите третью форму лагола\n");
    scanf("%s", third_verb);
    check_user_verb(third_verb);

    char ch[A] = {0}, ch1[A] = {0}, ch2[A] = {0};
    FILE* answer_first;
    answer_first = fopen("../text_file/answer_first.txt", "r");
    check_file_open_txt(answer_first);
    for (int i = 0; i <= x * 3; i++) {
        if (i == x * 3) {
            fscanf(answer_first, "%s", ch1);
            fscanf(answer_first, "%s", ch2);
        }
        fscanf(answer_first, "%s", ch);
    }
    int z = 0;
    if ((strcmp(ch1, second_verb) == 0) && (strcmp(ch2, third_verb) == 0)) {
        printf("Ответы совпали!\n");
        continue_task(1);
    } else if (
            (strcmp(ch1, second_verb) != 0) && (strcmp(ch2, third_verb) != 0)) {
        z = 3;
        printf("Вы ввели все формы глагола неправильно.Хотите увидеть "
               "правильный ответ?(y/n)\n");
        see_answer(z, ch1, ch2, second_verb, third_verb);
    } else if (strcmp(ch1, second_verb) != 0) {
        z = 1;
        printf("У вас ошибка во второй форме глагола.Хотите увидеть правильный "
               "ответ?(y/n)\n");
        see_answer(z, ch1, ch2, second_verb, third_verb);
    } else if (strcmp(ch2, third_verb) != 0) {
        z = 2;
        printf(" У вас ошибка в третьей форме глагола.Хотите увидеть "
               "правильный "
               "ответ?(y/n)\n");
        see_answer(z, ch1, ch2, second_verb, third_verb);
    }
    fclose(answer_first);
    return 0;
}
int open_first_task()
{
    FILE* first_task;
    first_task
            = fopen("../text_file/"
                    "first_task_verb.txt",
                    "r");
    check_file_open_txt(first_task);
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
