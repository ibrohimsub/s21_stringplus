#include "test_string.h"

START_TEST(strspn_1) {
  char str[100] = "Hello, world!";
  char str1[100] = "world";
  ck_assert_uint_eq(strspn(str, str1), strspn(str, str1));
}
END_TEST

START_TEST(strspn_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "abc";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_7) {
  char str[100] = "1234347";
  char str1[100] = "89";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_8) {
  char str[100] = "1234347";
  char str1[100] = "123";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_9) {
  char str[100] = "1234347";
  char str1[100] = "321";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_10) {
  char str[100] = "";
  char str1[100] = "";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

START_TEST(strspn_11) {
  char str[100] = "";
  char str1[100] = "Hello, world!";
  ck_assert_uint_eq(strspn(str, str1), s21_strspn(str, str1));
}
END_TEST

Suite *test_strspn(void) {
  Suite *s = suite_create("S21_strspn");
  TCase *tc = tcase_create("strspn_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strspn_1);
  tcase_add_test(tc, strspn_2);
  tcase_add_test(tc, strspn_3);
  tcase_add_test(tc, strspn_4);
  tcase_add_test(tc, strspn_5);
  tcase_add_test(tc, strspn_6);
  tcase_add_test(tc, strspn_7);
  tcase_add_test(tc, strspn_8);
  tcase_add_test(tc, strspn_9);
  tcase_add_test(tc, strspn_10);
  tcase_add_test(tc, strspn_11);

  suite_add_tcase(s, tc);
  return s;
}
