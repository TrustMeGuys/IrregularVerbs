#include <ctest.h>
#include <task_one.h>

CTEST(see_answer_function, correct_anser_1)
{
    char answer[3] = "y";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_2)
{
    char answer[3] = "n";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_answer_1)
{
    char answer[3] = "gf";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_answer_2)
{
    char answer[3] = "t";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_answer_3)
{
    char answer[3] = "123";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_answer_4)
{
    char answer[3] = "sfs";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_answer_5)
{
    char answer[3] = "123";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_answer_6)
{
    char answer[3] = "./.";
    char yes[3] = "y";
    char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_verb, correct_answer_1)
{
    char user_verb[5] = "cut";
    const int result = check_user_verb(user_verb);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_verb, correct_answer_2)
{
    char user_verb[3] = "lol";
    const int result = check_user_verb(user_verb);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_answer_3)
{
    char user_verb[10] = "bghrgvss";
    const int result = check_user_verb(user_verb);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_verb, incorrect_answer_1)
{
    char user_verb[4] = "213";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_2)
{
    char user_verb[8] = "3242432";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_3)
{
    char user_verb[10] = "fgf34fdf";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_4)
{
    char user_verb[10] = "fgfgfd23";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_5)
{
    char user_verb[10] = "43dsfs";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_6)
{
    char user_verb[10] = ".//..";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_7)
{
    char user_verb[10] = "sdfs./sdf";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_8)
{
    char user_verb[10] = "dsfs.//";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_answer_9)
{
    char user_verb[10] = ".//ssfsd";
    const int result = check_user_verb(user_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
