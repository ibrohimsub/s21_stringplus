#include "test_string.h"

START_TEST(memmove_1) {
  char str[10] = "Hello";
  char str1[10] = "world!";
  s21_size_t len = strlen(str);
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_2) {
  char str[] = "Hello";
  char str1[] = "world";
  s21_size_t len = 2;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_3) {
  char str[] = "Hello";
  char str1[] = "world!";
  s21_size_t len = 0;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_4) {
  char str[] = "Hello, world!";
  char str1[] = "";
  s21_size_t len = 2;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_5) {
  char str[] = "12\t34\n56(!@";
  char str1[] = "Hello, world";
  s21_size_t len = 12;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_6) {
  char str[] = "Hello, world!";
  char str1[] = "12\t34\n56(!@";
  s21_size_t len = 12;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_7) {
  char str[] = "Hello, world!";
  char str1[] = "\0";
  s21_size_t len = strlen(str1);
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_8) {
  char str[] = "\0";
  char str1[] = "\0";
  s21_size_t len = 1;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_9) {
  char str[] = "\0";
  char str1[] = "\0";
  s21_size_t len = 0;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_10) {
  char str[] = "Hello";
  char str1[] = "Hello\0";
  s21_size_t len = 5;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_11) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world!\0";
  s21_size_t len = strlen(str1);
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_12) {
  char str[] = "Hello, world!";
  char str1[] = {10, 32, 64, 65, 127};
  s21_size_t len = 5;
  ck_assert_str_eq(memmove(str, str1, len), s21_memmove(str, str1, len));
}
END_TEST

START_TEST(memmove_13) {
  char str[] = "Hello, world!";

  ck_assert_str_eq(memmove(&str[5], &str[2], 3),
                   s21_memmove(&str[5], &str[2], 3));
}
END_TEST

Suite *test_memmove(void) {
  Suite *s = suite_create("S21_memmove");
  TCase *tc = tcase_create("memmove_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memmove_1);
  tcase_add_test(tc, memmove_2);
  tcase_add_test(tc, memmove_3);
  tcase_add_test(tc, memmove_4);
  tcase_add_test(tc, memmove_5);
  tcase_add_test(tc, memmove_6);
  tcase_add_test(tc, memmove_7);
  tcase_add_test(tc, memmove_8);
  tcase_add_test(tc, memmove_9);
  tcase_add_test(tc, memmove_10);
  tcase_add_test(tc, memmove_11);
  tcase_add_test(tc, memmove_12);
  tcase_add_test(tc, memmove_13);
  suite_add_tcase(s, tc);
  return s;
}
