#include "task_three.h"
#include <ctest.h>

CTEST(task_three_read_file_suite, not_good_reading_1)
{
    int num_sent = 2;
    const int result = work_in_variant_answer_third_file(num_sent);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(task_three_read_file_suite, not_good_reading_2)
{
    int num_sent = 2;
    const int result = work_in_three_task_file(num_sent);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
