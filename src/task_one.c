#include "task_one.h"
#include "all_task.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_answer_first(int x)
{
    printf("Введите вторую форму глагола:\n");
    char second_verb[A] = {0}, third_verb[A] = {0};
    scanf("%s", second_verb);
    printf("Введите третью форму лагола\n");
    scanf("%s", third_verb);
    for (int i = 0; second_verb[i];) {
        if (isalpha(third_verb[i]) && isalpha(second_verb[i]))
            i++;
        else {
            printf("Вы ввели не буквы.");
            return 1;
        }
    }
    char ch[A] = {0}, ch1[A] = {0}, ch2[A] = {0};
    FILE* answer_first;
    answer_first = fopen("../text_file/answer_first.txt", "r");
    if (answer_first == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        return 1;
    }
    for (int i = 0; i <= x * 3 + 1; i++) {
        if (i == x * 3 + 1) {
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
