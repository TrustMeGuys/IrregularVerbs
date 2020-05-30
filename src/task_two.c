#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_answer_second(int z)
{
    printf("\nВыберете одну цифру:\n");
    int answer;
    answer = choose_your_number();
    if (z % 2 == 0) {
        if (answer == 1) {
            printf("Ответ совпал!\n");
            continue_task(2);
        } else {
            printf("Ответ неправильный.\n");
            continue_task(2);
        }
    } else if (z % 3 == 0 && z % 2 != 0) {
        if (answer == 2) {
            printf("Ответ совпал!\n");
            continue_task(2);
        } else {
            printf("Ответ неправильный.\n");
            continue_task(2);
        }
    } else if (z % 2 != 0 && z % 3 != 0) {
        if (answer == 3) {
            printf("Ответ совпал!\n");
            continue_task(2);
        } else {
            printf("Ответ неправильный.\n");
            continue_task(2);
        }
    } else {
        printf("Вы ввели что-то другое...");
        return -1;
    }
    return 0;
}

int second_task()
{
    int i = 0;
    FILE* samo_zadanie;
    samo_zadanie = fopen("../text_file/task_two.txt", "r");

    if (samo_zadanie == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        return 1;
    }
    printf("Выберете номер предложения,которое хотите сделать:\n");
    int z = choose_your_number();

    char ch[70] = {0};
    while (i <= z * 4 + 1) {
        fgets(ch, 70, samo_zadanie);
        if (i == z * 4) {
            while (i <= z * 4 + 3) {
                printf("\n %s\n", ch);
                fgets(ch, 70, samo_zadanie);
                i++;
            }
        }
        i++;
    }
    fclose(samo_zadanie);
    check_answer_second(z);
    return 0;
}
