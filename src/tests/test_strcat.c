#include "test_string.h"

START_TEST(strcat_1) {
  char str[100] = "Hello";
  char str1[100] = "world";
  ck_assert_str_eq(strcat(str, str1), strcat(str, str1));
}
END_TEST

START_TEST(strcat_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world\0";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello,\n world";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, Harry!";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_7) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, Harry";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_8) {
  char str[100] = "69917020";
  char str1[100] = "69917020";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_9) {
  char str[100] = "69917020";
  char str1[100] = "69917020";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_10) {
  char str[100] = "Hello";
  char str1[100] = "Hello";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

START_TEST(strcat_11) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world!\0";
  ck_assert_str_eq(strcat(str, str1), s21_strcat(str, str1));
}
END_TEST

Suite *test_strcat(void) {
  Suite *s = suite_create("S21_strcat");
  TCase *tc = tcase_create("strcat_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strcat_1);
  tcase_add_test(tc, strcat_2);
  tcase_add_test(tc, strcat_3);
  tcase_add_test(tc, strcat_4);
  tcase_add_test(tc, strcat_5);
  tcase_add_test(tc, strcat_6);
  tcase_add_test(tc, strcat_7);
  tcase_add_test(tc, strcat_8);
  tcase_add_test(tc, strcat_9);
  tcase_add_test(tc, strcat_10);
  tcase_add_test(tc, strcat_11);

  suite_add_tcase(s, tc);
  return s;
}
