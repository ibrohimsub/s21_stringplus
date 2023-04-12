#include "test_string.h"

START_TEST(memcpy_1) {
  char str[10] = "Hello";
  char str1[10] = "world!";
  s21_size_t len = strlen(str);
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_2) {
  char str[] = "Hello";
  char str1[] = "world";
  s21_size_t len = 2;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_3) {
  char str[] = "Hello";
  char str1[] = "world!";
  s21_size_t len = 0;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_4) {
  char str[] = "Hello, world!";
  char str1[] = "";
  s21_size_t len = 2;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_5) {
  char str[] = "12\t34\n56(!@";
  char str1[] = "Hello, world";
  s21_size_t len = 12;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_6) {
  char str[] = "Hello, world!";
  char str1[] = "12\t34\n56(!@";
  s21_size_t len = 12;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_7) {
  char str[] = "Hello, world!";
  char str1[] = "\0";
  s21_size_t len = strlen(str1);
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_8) {
  char str[] = "\0";
  char str1[] = "\0";
  s21_size_t len = 1;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_9) {
  char str[] = "\0";
  char str1[] = "\0";
  s21_size_t len = 0;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_10) {
  char str[] = "Hello";
  char str1[] = "Hello\0";
  s21_size_t len = 5;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_11) {
  char str[] = "Hello, world!";
  char str1[] = "Hello, world!\0";
  s21_size_t len = strlen(str1);
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

START_TEST(memcpy_12) {
  char str[] = "Hello, world!";
  char str1[] = {10, 32, 64, 65, 127};
  s21_size_t len = 5;
  ck_assert_str_eq(memcpy(str, str1, len), s21_memcpy(str, str1, len));
}
END_TEST

Suite *test_memcpy(void) {
  Suite *s = suite_create("S21_memcpy");
  TCase *tc = tcase_create("memcpy_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memcpy_1);
  tcase_add_test(tc, memcpy_2);
  tcase_add_test(tc, memcpy_3);
  tcase_add_test(tc, memcpy_4);
  tcase_add_test(tc, memcpy_5);
  tcase_add_test(tc, memcpy_6);
  tcase_add_test(tc, memcpy_7);
  tcase_add_test(tc, memcpy_8);
  tcase_add_test(tc, memcpy_9);
  tcase_add_test(tc, memcpy_10);
  tcase_add_test(tc, memcpy_11);
  tcase_add_test(tc, memcpy_12);
  suite_add_tcase(s, tc);
  return s;
}
