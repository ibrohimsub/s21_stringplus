#include "test_string.h"

START_TEST(strrchr_1) {
  char str[100] = "Hello";
  char c = 'e';
  ck_assert_pstr_eq(strrchr(str, c), strrchr(str, c));
}
END_TEST

START_TEST(strrchr_2) {
  char str[100] = "Hello, world!";
  char c = 'o';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_3) {
  char str[100] = "Hello, world!";
  char c = 'h';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_4) {
  char str[100] = "Hello, world!";
  char c = 'H';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_5) {
  char str[100] = "Hello, world!";
  char c = 69;
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_6) {
  char str[100] = "Hello, world!";
  char c = 68;
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_7) {
  char str[100] = "Hello, world!";
  char c = 0;
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_8) {
  char str[100] = "69917020";
  char c = '\0';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_9) {
  char str[100] = "69917020";
  char c = '0';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

Suite *test_strrchr(void) {
  Suite *s = suite_create("S21_strrchr");
  TCase *tc = tcase_create("strrchr_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strrchr_1);
  tcase_add_test(tc, strrchr_2);
  tcase_add_test(tc, strrchr_3);
  tcase_add_test(tc, strrchr_4);
  tcase_add_test(tc, strrchr_5);
  tcase_add_test(tc, strrchr_6);
  tcase_add_test(tc, strrchr_7);
  tcase_add_test(tc, strrchr_8);
  tcase_add_test(tc, strrchr_9);

  suite_add_tcase(s, tc);
  return s;
}
