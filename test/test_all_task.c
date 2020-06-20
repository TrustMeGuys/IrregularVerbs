#include <all_task.h>
#include <ctest.h>

CTEST(check_choose_number, correct_answer_1) {
  const int num_choice = 1;
  const int result = check_choose_number(num_choice);
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_choose_number, correct_answer_2) {
  const int num_choice = 3231;
  const int result = check_choose_number(num_choice);
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_choose_number, correct_answer_3) {
  const int num_choice = 99999;
  const int result = check_choose_number(num_choice);
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}

CTEST(check_choose_number, incorrect_answer_1) {
  const int num_choice = -1;
  const int result = check_choose_number(num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_choose_number, incorrect_answer_2) {
  const int num_choice = 0;
  const int result = check_choose_number(num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_choose_number, incorrect_answer_3) {
  const int num_choice = -23421;
  const int result = check_choose_number(num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}

CTEST(check_continue, correct_answer_1) {
  const int val_for_return = 1;
  const int num_choice = 1;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, correct_answer_2) {
  const int val_for_return = 2;
  const int num_choice = 2;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, correct_answer_3) {
  const int val_for_return = 3;
  const int num_choice = 0;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 0;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, incorrect_answer_1) {
  const int val_for_return = 1;
  const int num_choice = 342;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, incorrect_answer_2) {
  const int val_for_return = 543;
  const int num_choice = 1;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, incorrect_answer_3) {
  const int val_for_return = 4234;
  const int num_choice = 234;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, incorrect_answer_4) {
  const int val_for_return = -1;
  const int num_choice = 1;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, incorrect_answer_5) {
  const int val_for_return = 1;
  const int num_choice = -1;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
CTEST(check_continue, incorrect_answer_6) {
  const int val_for_return = -1;
  const int num_choice = -1;
  const int result = check_choose_number(val_for_return, num_choice);
  const int expected = 1;
  ASSERT_EQUAL(expected, result);
}
