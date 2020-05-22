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

int check_answer(int x)
{
    int f;
    int* answer_user;
    if (x % 2 == 0) {
        f = 5;
    } else if (x % 3 == 0 && x % 2 != 0) {
        f = 8;
    } else if (x % 2 != 0 && x % 3 != 0) {
        f = 10;
    }
    answer_user = (int*)malloc(f * sizeof(int));
    printf("Введите через enter цифры в правильном порядке:\n");
    for (int i = 0; i < f; i++) {
        scanf("%d", &answer_user[i]);
    }
    if (x % 2 == 0) {
        int z = check_user_answer(x, answer_user);
        if (z == 5) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Number of matched numbers:%d\n", z);
            continue_task(3);
        }
    } else if (x % 3 == 0 && x % 2 != 0) {
        int z = check_user_answer(x, answer_user);
        if (z == 8) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Number of matched numbers:%d\n", z);
            continue_task(3);
        }
    } else if (x % 2 != 0 && x % 3 != 0) {
        int z = check_user_answer(x, answer_user);
        if (z == 10) {
            printf("Мои поздравления!\n");
            continue_task(3);
        } else {
            printf("Number of matched numbers:%d", z);
            continue_task(3);
        }
    }
    return 0;
}

int check_user_answer(int x, int* answer_user)
{
    int z = 0;
    if (x % 2 == 0) {
        int variant1_1[5] = {2, 3, 1, 4, 5}, variant1_2[5] = {1, 5, 4, 3, 2},
            variant1_3[5] = {3, 4, 5, 2, 1};
        for (int i = 0; i < 5; i++) {
            if (variant1_1[i] == answer_user[i]
                || variant1_2[i] == answer_user[i]
                || variant1_3[i] == answer_user[i])
                z++;
        }
    } else if (x % 3 == 0 && x % 2 != 0) {
        int variant2_1[8] = {6, 7, 1, 2, 3, 5, 4, 8},
            variant2_2[8] = {8, 1, 5, 3, 4, 2, 7, 6},
            variant2_3[8] = {3, 8, 6, 1, 2, 4, 5, 7};
        for (int i = 0; i < 8; i++) {
            if (variant2_1[i] == answer_user[i]
                || variant2_2[i] == answer_user[i]
                || variant2_3[i] == answer_user[i])
                z++;
        }
    } else if (x % 2 != 0 && x % 3 != 0) {
        int variant3_1[10] = {10, 2, 3, 5, 4, 9, 8, 7, 6, 1},
            variant3_2[10] = {1, 9, 8, 7, 10, 6, 4, 5, 3, 2},
            variant3_3[10] = {2, 10, 9, 6, 5, 8, 7, 3, 1, 4};
        for (int i = 0; i < 10; i++) {
            if (variant3_1[i] == answer_user[i]
                || variant3_2[i] == answer_user[i]
                || variant3_3[i] == answer_user[i])
                z++;
        }
    }
    return z;
}

int return_task_three(int x)
{
    if (x == 0)
        exit(EXIT_SUCCESS);
    else if (x == 1)
        main();
    else if (x == 2)
        task_three();
    else {
        printf("Вы ввели что-то другое...");
        return -1;
    }
    return 0;
}
