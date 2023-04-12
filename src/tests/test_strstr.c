#include "test_string.h"

START_TEST(strstr_1) {
  char str[100] = "Hello hello Hello";
  char str1[100] = "hello";
  ck_assert_pstr_eq(strstr(str, str1), strstr(str, str1));
}
END_TEST

START_TEST(strstr_2) {
  char str[100] = "Hello hello Hello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_3) {
  char str[100] = "helloHellohelloHello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "l";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "A";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_7) {
  char str[100] = "12341234124";
  char str1[100] = "12";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_8) {
  char str[100] = "69917020";
  char str1[100] = "6998";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_9) {
  char str[100] = "69917020";
  char str1[100] = "270";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_10) {
  char str[100] = "Hello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

START_TEST(strstr_11) {
  char str[100] = "Hello, world!";
  char str1[100] = "Hello, world!\0";
  ck_assert_pstr_eq(strstr(str, str1), s21_strstr(str, str1));
}
END_TEST

Suite *test_strstr(void) {
  Suite *s = suite_create("S21_strstr");
  TCase *tc = tcase_create("strstr_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strstr_1);
  tcase_add_test(tc, strstr_2);
  tcase_add_test(tc, strstr_3);
  tcase_add_test(tc, strstr_4);
  tcase_add_test(tc, strstr_5);
  tcase_add_test(tc, strstr_6);
  tcase_add_test(tc, strstr_7);
  tcase_add_test(tc, strstr_8);
  tcase_add_test(tc, strstr_9);
  tcase_add_test(tc, strstr_10);
  tcase_add_test(tc, strstr_11);

  suite_add_tcase(s, tc);
  return s;
}
