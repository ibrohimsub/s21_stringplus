#include "test_string.h"

START_TEST(strtok_1) {
  char str[100] = "Hello hello Hello";
  char str1[100] = "hello";
  ck_assert_pstr_eq(strtok(str, str1), strtok(str, str1));
}
END_TEST

START_TEST(strtok_2) {
  char str[100] = "Hello hello Hello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_3) {
  char str[100] = "helloHellohelloHello";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "l";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "A";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_7) {
  char str[100] = "12341234124";
  char str1[100] = "12";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_8) {
  char str[100] = "69917020";
  char str1[100] = "6998";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_9) {
  char str[100] = "Hello, what is   your name?";
  char str1[100] = " ";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_10) {
  char str[100] = "H  ello ";
  char str1[100] = "Hello";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

START_TEST(strtok_11) {
  char str[100] = "Hello, world! ";
  char str1[100] = "Hello, world!";
  ck_assert_pstr_eq(strtok(str, str1), s21_strtok(str, str1));
}
END_TEST

Suite *test_strtok(void) {
  Suite *s = suite_create("S21_strtok");
  TCase *tc = tcase_create("strtok_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strtok_1);
  tcase_add_test(tc, strtok_2);
  tcase_add_test(tc, strtok_3);
  tcase_add_test(tc, strtok_4);
  tcase_add_test(tc, strtok_5);
  tcase_add_test(tc, strtok_6);
  tcase_add_test(tc, strtok_7);
  tcase_add_test(tc, strtok_8);
  tcase_add_test(tc, strtok_9);
  tcase_add_test(tc, strtok_10);
  tcase_add_test(tc, strtok_11);

  suite_add_tcase(s, tc);
  return s;
}
