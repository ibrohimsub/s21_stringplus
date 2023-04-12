#include "test_string.h"

START_TEST(strpbrk_1) {
  char str[100] = "Hello, world!";
  char str1[100] = "world";
  ck_assert_pstr_eq(strpbrk(str, str1), strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "abc";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_7) {
  char str[100] = "1234347";
  char str1[100] = "89";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_8) {
  char str[100] = "1234347";
  char str1[100] = "123";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_9) {
  char str[100] = "1234347";
  char str1[100] = "321";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_10) {
  char str[100] = "";
  char str1[100] = "";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

START_TEST(strpbrk_11) {
  char str[100] = "";
  char str1[100] = "Hello, world!";
  ck_assert_pstr_eq(strpbrk(str, str1), s21_strpbrk(str, str1));
}
END_TEST

Suite *test_strpbrk(void) {
  Suite *s = suite_create("S21_strpbrk");
  TCase *tc = tcase_create("strpbrk_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strpbrk_1);
  tcase_add_test(tc, strpbrk_2);
  tcase_add_test(tc, strpbrk_3);
  tcase_add_test(tc, strpbrk_4);
  tcase_add_test(tc, strpbrk_5);
  tcase_add_test(tc, strpbrk_6);
  tcase_add_test(tc, strpbrk_7);
  tcase_add_test(tc, strpbrk_8);
  tcase_add_test(tc, strpbrk_9);
  tcase_add_test(tc, strpbrk_10);
  tcase_add_test(tc, strpbrk_11);

  suite_add_tcase(s, tc);
  return s;
}
