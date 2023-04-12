#include "test_string.h"

START_TEST(strcspn_1) {
  char str[100] = "Hello, world!";
  char str1[100] = "world";
  ck_assert_uint_eq(strcspn(str, str1), strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_2) {
  char str[100] = "Hello, world!";
  char str1[100] = "not helloworld((";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_3) {
  char str[100] = "Hello, world!";
  char str1[100] = "hello, world!";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_4) {
  char str[100] = "Hello, world!";
  char str1[100] = "abc";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_5) {
  char str[100] = "Hello, world!";
  char str1[100] = "";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_6) {
  char str[100] = "Hello, world!";
  char str1[100] = "\0";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_7) {
  char str[100] = "1234347";
  char str1[100] = "89";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_8) {
  char str[100] = "1234347";
  char str1[100] = "123";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_9) {
  char str[100] = "1234347";
  char str1[100] = "321";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_10) {
  char str[100] = "";
  char str1[100] = "";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

START_TEST(strcspn_11) {
  char str[100] = "";
  char str1[100] = "Hello, world!";
  ck_assert_uint_eq(strcspn(str, str1), s21_strcspn(str, str1));
}
END_TEST

Suite *test_strcspn(void) {
  Suite *s = suite_create("S21_strcspn");
  TCase *tc = tcase_create("strcspn_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, strcspn_1);
  tcase_add_test(tc, strcspn_2);
  tcase_add_test(tc, strcspn_3);
  tcase_add_test(tc, strcspn_4);
  tcase_add_test(tc, strcspn_5);
  tcase_add_test(tc, strcspn_6);
  tcase_add_test(tc, strcspn_7);
  tcase_add_test(tc, strcspn_8);
  tcase_add_test(tc, strcspn_9);
  tcase_add_test(tc, strcspn_10);
  tcase_add_test(tc, strcspn_11);

  suite_add_tcase(s, tc);
  return s;
}
