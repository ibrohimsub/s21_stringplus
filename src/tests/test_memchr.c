#include "test_string.h"

START_TEST(memchr_1) {
  char str[] = "Hello, world!";
  int ch = 'e';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_2) {
  char str[] = "Hello, world!";
  int ch = 119;
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_3) {
  char str[] = "Hello, world!";
  int ch = 'h';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_4) {
  char str[] = "Hello, world!";
  int ch = 67;
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_5) {
  char str[] = "Hello, world!";
  int ch = 'o';
  s21_size_t len = 10;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_6) {
  char str[] = "Hello, world!";
  int ch = ' ';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_7) {
  char str[] = "Hello, world!";
  int ch = 127;
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_8) {
  char str[] = "69917020";
  int ch = '6';
  s21_size_t len = 0;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_9) {
  char str[] = "69917020";
  int ch = 'g';
  s21_size_t len = strlen(str);
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_10) {
  char str[] = "69917020";
  int ch = '\0';
  s21_size_t len = 9;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_11) {
  char str[] = "Hello, world!";
  int ch = 'e';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_12) {
  char str[] = "Hello, world!";
  int ch = 'd';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_13) {
  char str[] = "Hello, world!";
  int ch = '\0';
  s21_size_t len = 5;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_14) {
  char str[] = "Hello, world!";
  int ch = '\0';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

START_TEST(memchr_15) {
  char str[] = "Hello, world!";
  int ch = ',';
  s21_size_t len = 15;
  ck_assert_ptr_eq(memchr(str, ch, len), s21_memchr(str, ch, len));
}
END_TEST

Suite *test_memchr(void) {
  Suite *s = suite_create("S21_memchr");
  TCase *tc = tcase_create("memchr_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, memchr_1);
  tcase_add_test(tc, memchr_2);
  tcase_add_test(tc, memchr_3);
  tcase_add_test(tc, memchr_4);
  tcase_add_test(tc, memchr_5);
  tcase_add_test(tc, memchr_6);
  tcase_add_test(tc, memchr_7);
  tcase_add_test(tc, memchr_8);
  tcase_add_test(tc, memchr_9);
  tcase_add_test(tc, memchr_10);
  tcase_add_test(tc, memchr_11);
  tcase_add_test(tc, memchr_12);
  tcase_add_test(tc, memchr_13);
  tcase_add_test(tc, memchr_14);
  tcase_add_test(tc, memchr_15);

  suite_add_tcase(s, tc);
  return s;
}
