#include "test_string.h"

START_TEST(strcmp_1) {
  char str[100] = "Hello";
  char str1[100] = "Hello";
  ck_assert_int_eq(strcmp(str, str1), strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world\0";
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello,\n world";
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, Harry!";
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_7) {
  char str[100] = "ABCD";
  char str1[100] = {65, 66, 67, 68};
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_8) {
  char str[100] = "ABCD";
  char str1[100] = {65, 66, 67, 68, 0};
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

START_TEST(strcmp_9) {
  char str[100] = "ABCD";
  char str1[100] = {65, 67, 66, 68};
  ck_assert_int_eq(strcmp(str, str1), s21_strcmp(str, str1));
}
END_TEST

Suite *test_strcmp(void) {
  Suite *s = suite_create("S21_strcmp");
  TCase *tc = tcase_create("strcmp_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strcmp_1);
  tcase_add_test(tc, strcmp_2);
  tcase_add_test(tc, strcmp_3);
  tcase_add_test(tc, strcmp_4);
  tcase_add_test(tc, strcmp_5);
  tcase_add_test(tc, strcmp_6);
  tcase_add_test(tc, strcmp_7);
  tcase_add_test(tc, strcmp_8);
  tcase_add_test(tc, strcmp_9);

  suite_add_tcase(s, tc);
  return s;
}
