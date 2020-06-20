#include <ctest.h>
#include <task_one.h>

CTEST(check_file_task_one, correct_answer_1)
{
    FILE* some_file;
    some_file = fopen("test_file.txt", "r");
    const int result = check_file_open_txt(some_file);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
    fclose(some_file);
}
CTEST(check_file_task_one, incorrect_answer_1)
{
    FILE* some_file;
    some_file = NULL;
    const int result = check_file_open_txt(some_file);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
