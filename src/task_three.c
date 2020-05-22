#include <stdio.h>
#define B 90

int task_three()
{
    printf("Выберите номер предложения, которое хотите перевести:\n");
    int x = choose_your_number();
    FILE* three_task;
    three_task = fopen("../text_file/three_task.txt", "r");
    if (three_task == NULL) {
        printf("Кажется произошла ошибка открытия файла...\n");
        return -1;
    }
    char ch[B] = {0}, ch1[B] = {0};
    for (int i = 1; i < x + 1; i++) {
        if (i == x) {
            fgets(ch1, B, three_task);
            printf("%s\n", ch1);
        }
        fgets(ch, B, three_task);
    }
    variant_answer(x);
    fclose(three_task);
    return 0;
}

int variant_answer(int x)
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
    for (int i = 1; i < x + 1; i++) {
        if (i == x) {
            fgets(ch1, B, answer_third);
            printf("%s\n", ch1);
        }
        fgets(ch, B, answer_third);
    }
    fclose(answer_third);
    check_answer(x);
    return 0;
}
