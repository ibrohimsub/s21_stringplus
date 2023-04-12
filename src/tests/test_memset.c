#include "test_string.h"

START_TEST(memset_1) {
  char str[10] = "Hello";
  char c = 'w';
  s21_size_t len = strlen(str);
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_2) {
  char str[] = "Hello";
  char c = 66;
  s21_size_t len = 2;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_3) {
  char str[] = "Hello";
  char c = 10;
  s21_size_t len = 0;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_4) {
  char str[] = "Hello, world!";
  char c = 9;
  s21_size_t len = 2;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_5) {
  char str[] = "12\t34\n56(!@";
  char c = 0;
  s21_size_t len = 12;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_6) {
  char str[] = "Hello, world!";
  char c = 127;
  s21_size_t len = 12;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_7) {
  char str[] = "a";
  char c = 'f';
  s21_size_t len = 1;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_8) {
  char str[] = "a";
  char c = 100;
  s21_size_t len = 1;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_9) {
  char str[] = "\0";
  char c = 127;
  s21_size_t len = 1;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

START_TEST(memset_10) {
  char str[] = "Hello";
  char c = 0;
  s21_size_t len = 5;
  ck_assert_str_eq(memset(str, c, len), s21_memset(str, c, len));
}
END_TEST

Suite *test_memset(void) {
  Suite *s = suite_create("S21_memset");
  TCase *tc = tcase_create("memset_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memset_1);
  tcase_add_test(tc, memset_2);
  tcase_add_test(tc, memset_3);
  tcase_add_test(tc, memset_4);
  tcase_add_test(tc, memset_5);
  tcase_add_test(tc, memset_6);
  tcase_add_test(tc, memset_7);
  tcase_add_test(tc, memset_8);
  tcase_add_test(tc, memset_9);
  tcase_add_test(tc, memset_10);

  suite_add_tcase(s, tc);
  return s;
}
