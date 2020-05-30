#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
