#include "all_task.h"
#include "task_one.h"
#include "task_three.h"
#include "task_two.h"
#include <ctest.h>

CTEST(task_three_data_suite, correct_check_user_answer_sent_1)
{
    int num_sent = 1;
    int answer_user[10] = {10, 2, 3, 5, 4, 9, 8, 7, 6, 1};
    const int result = check_user_answer(num_sent, answer_user);
    const int expected = 10;

    ASSERT_EQUAL(expected, result);
}

CTEST(task_three_data_suite, correct_check_user_answer_sent_2)
{
    int num_sent = 2;
    int answer_user[5] = {3, 4, 5, 2, 1};
    const int result = check_user_answer(num_sent, answer_user);
    const int expected = 5;

    ASSERT_EQUAL(expected, result);
}

CTEST(task_three_data_suite, correct_check_user_answer_sent_3)
{
    int num_sent = 3;
    int answer_user[8] = {6, 7, 1, 2, 3, 5, 4, 8};
    const int result = check_user_answer(num_sent, answer_user);
    const int expected = 8;

    ASSERT_EQUAL(expected, result);
}

CTEST(task_three_data_suite, incorrect_check_user_answer_sent_1)
{
    int num_sent = 1;
    int answer_user[10] = {1, 2, 3323, 5, 431, 94, 832, 7, 6, 10};
    const int result = check_user_answer(num_sent, answer_user);
    const int expected = 4;

    ASSERT_EQUAL(expected, result);
}

CTEST(task_three_data_suite, incorrect_check_user_answer_sent_2)
{
    int num_sent = 2;
    int answer_user[5] = {3, 6789, 5, 232, 1232};
    const int result = check_user_answer(num_sent, answer_user);
    const int expected = 2;

    ASSERT_EQUAL(expected, result);
}

CTEST(task_three_data_suite, incorrect_check_user_answer_sent_3)
{
    int num_sent = 3;
    int answer_user[8] = {7, 6, 1, 3, 2, 5, 4, 8};
    const int result = check_user_answer(num_sent, answer_user);
    const int expected = 4;

    ASSERT_EQUAL(expected, result);
}
