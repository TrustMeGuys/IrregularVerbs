#include <ctest.h>
#include <task_one.h>

CTEST(see_answer_function, correct_anser_1)
{
    const char answer[3] = "y";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_2)
{
    const char answer[3] = "n";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, incorrect_anser_1)
{
    const char answer[3] = "gf";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_2)
{
    const char answer[3] = "t";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_3)
{
    const char answer[3] = "123";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_4)
{
    const char answer[3] = "sfsdfsdf";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_5)
{
    const char answer[3] = "123134314";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(see_answer_function, correct_anser_6)
{
    const char answer[3] = "./.././.a.a.d/";
    const char yes[3] = "y";
    const char no[3] = "n";
    const int result = check_see_answer(answer, no, yes);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_verb, correct_anser_1)
{
    const char second_verb[5] = "cut";
    const char thrid_verb[5] = "puck";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_verb, correct_anser_2)
{
    const char second_verb[3] = "pop";
    const char thrid_verb[3] = "top";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_anser_3)
{
    const char second_verb[10] = "bghrgvss";
    const char thrid_verb[10] = "sdcsdcsdc";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_user_verb, incorrect_anser_1)
{
    const char second_verb[4] = "213";
    const char thrid_verb[4] = "fsdf";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_anser_2)
{
    const char second_verb[8] = "dsfsdf";
    const char thrid_verb[8] = "3242432";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_anser_3)
{
    const char second_verb[10] = "3242";
    const char thrid_verb[10] = "2342442";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_anser_4)
{
    const char second_verb[10] = "...//..";
    const char thrid_verb[10] = "fdgdfg";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, incorrect_anser_5)
{
    const char second_verb[10] = "bghrgvss";
    const char thrid_verb[10] = "///./.";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_anser_6)
{
    const char second_verb[10] = ".././.";
    const char thrid_verb[10] = "//..././";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_anser_7)
{
    const char second_verb[10] = "dfgdfg7";
    const char thrid_verb[10] = "dgdfgfg";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_anser_8)
{
    const char second_verb[10] = "gooool";
    const char thrid_verb[10] = "sdfsdfs9";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_anser_9)
{
    const char second_verb[10] = "sdf23sd";
    const char thrid_verb[10] = "sdfsfds";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(check_user_verb, correct_anser_10)
{
    const char second_verb[10] = "sdfsfs";
    const char thrid_verb[10] = "sdf45sd";
    const int result = check_user_verb(second_verb, third_verb);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
