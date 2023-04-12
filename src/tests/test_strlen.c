#include "test_string.h"

START_TEST(strlen_1) {
  char *str = "";
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_2) {
  char *str = "Hello, world!";
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_3) {
  char *str = "12341";
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_4) {
  char *str = "   ";
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_5) {
  char *str = "\0";
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_6) {
  char *str = "2asfaf90au11-fa";
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_7) {
  char str[4] = {14, 65, 127, 56};
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST
START_TEST(strlen_8) {
  char str[6] = {65, 66, 0, 0, 0, 65};
  ck_assert_uint_eq(strlen(str), s21_strlen(str));
}
END_TEST

Suite *test_strlen(void) {
  Suite *s = suite_create("S21_strlen");
  TCase *tc = tcase_create("strlen_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strlen_1);
  tcase_add_test(tc, strlen_2);
  tcase_add_test(tc, strlen_3);
  tcase_add_test(tc, strlen_4);
  tcase_add_test(tc, strlen_5);
  tcase_add_test(tc, strlen_6);
  tcase_add_test(tc, strlen_7);
  tcase_add_test(tc, strlen_8);
  suite_add_tcase(s, tc);
  return s;
}
