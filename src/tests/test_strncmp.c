#include "test_string.h"

START_TEST(strncmp_1) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world!";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_2) {
  char str[] = "Hello, world!";
  char str1[] = "not helloworld((";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_3) {
  char str[] = "Hello, world!";
  char str1[] = "hello, world!";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_4) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world\0";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_5) {
  char str[] = "Hello, world!";
  char str1[] = "Hello,\n world";
  s21_size_t len = 10;
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_6) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, Harry!";
  s21_size_t len = 5;
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_7) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, Harry";
  s21_size_t len = 8;
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_8) {
  char str[] = "69917020";
  char str1[] = "69917020";
  s21_size_t len = 0;
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_9) {
  char str[] = "69917020";
  char str1[] = "69917020";
  s21_size_t len = strlen(str);
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_10) {
  char str[] = "Hello";
  char str1[] = "Hello";
  s21_size_t len = 0;
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

START_TEST(strncmp_11) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world!\0";
  s21_size_t len = strlen(str) + 1;
  ck_assert_int_eq(strncmp(str, str1, len), s21_strncmp(str, str1, len));
}
END_TEST

Suite *test_strncmp(void) {
  Suite *s = suite_create("S21_strncmp");
  TCase *tc = tcase_create("strncmp_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strncmp_1);
  tcase_add_test(tc, strncmp_2);
  tcase_add_test(tc, strncmp_3);
  tcase_add_test(tc, strncmp_4);
  tcase_add_test(tc, strncmp_5);
  tcase_add_test(tc, strncmp_6);
  tcase_add_test(tc, strncmp_7);
  tcase_add_test(tc, strncmp_8);
  tcase_add_test(tc, strncmp_9);
  tcase_add_test(tc, strncmp_10);
  tcase_add_test(tc, strncmp_11);

  suite_add_tcase(s, tc);
  return s;
}
