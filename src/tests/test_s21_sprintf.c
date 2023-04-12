#include "test_string.h"

START_TEST(s21_sprintf_proc_1) {
  char dest[100];
  char s21_dest[100];
  sprintf(dest, "aa bb %% cc %%%% dd");
  s21_sprintf(s21_dest, "aa bb %% cc %%%% dd");
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_u_1) {
  char dest[100];
  char s21_dest[100];

  int s = sprintf(dest, "%5.5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%5.5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_2) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%.5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%5.5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_3) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_4) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%3.5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%3.5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_5) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%-5.5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%-5.5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_6) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%-5.5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%-5.5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_7) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%5u", 1000000);
  int s21 = s21_sprintf(s21_dest, "%5u", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_8) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%.5hu", (unsigned short int)1000000);
  int s21 = s21_sprintf(s21_dest, "%.5hu", (unsigned short int)1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_u_9) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%.5lu", 1000000000000);
  int s21 = s21_sprintf(s21_dest, "%5.5u", 1000000000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_1) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%5i", 1000000);
  int s21 = s21_sprintf(s21_dest, "%5i", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_2) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%5i", -1000000);
  int s21 = s21_sprintf(s21_dest, "%5i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_3) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%+5i", 1000000);
  int s21 = s21_sprintf(s21_dest, "%+5i", 1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_4) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%5.5i", -1000000);
  int s21 = s21_sprintf(s21_dest, "%5.5i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_5) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%+5.5i", -1000000);
  int s21 = s21_sprintf(s21_dest, "%+5.5i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_6) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%20i", -1000000);
  int s21 = s21_sprintf(s21_dest, "%20i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_7) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%20i", -1000000);
  int s21 = s21_sprintf(s21_dest, "%20i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_8) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%+-20i", -1000000);
  int s21 = s21_sprintf(s21_dest, "%+-20i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_10) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "%+hi", (short int)-1000000);
  int s21 = s21_sprintf(s21_dest, "%+hi", (short int)-1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_i_11) {
  char dest[100];
  char s21_dest[100];
  int s = sprintf(dest, "asd %+-20i", -1000000);
  int s21 = s21_sprintf(s21_dest, "asd %+-20i", -1000000);
  ck_assert_msg(s == s21, "s = %d, s21 = %d", s, s21);
}
END_TEST

START_TEST(s21_sprintf_c_1) {
  char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
              'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  char dest[100];
  char s21_dest[100];
  const char *format = "aa bb %c cc";
  for (int i = 0; i < 26; i++) {
    int s = sprintf(dest, format, c[i]);
    int s21 = s21_sprintf(s21_dest, format, c[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, c = %c", s, s21, c[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, c = %c", dest, s21_dest, c[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_c_2) {
  char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
              'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  char dest[100];
  char s21_dest[100];
  // const char *format = "aa bb %3c cc";
  for (int i = 0; i < 26; i++) {
    int s = sprintf(dest, "%c", c[i]);
    int s21 = s21_sprintf(s21_dest, "%c", c[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, c = %c", s, s21, c[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, c = %c", dest, s21_dest, c[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_c_3) {
  char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
              'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 26; i++) {
    int s = sprintf(dest, "%c", c[i]);
    int s21 = s21_sprintf(s21_dest, "%c", c[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, c = %c", s, s21, c[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, c = %c", dest, s21_dest, c[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_c_4) {
  char c[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  char dest[100];
  char s21_dest[100];

  for (int i = 0; i < 10; i++) {
    int s = sprintf(dest, "%c", c[i]);
    int s21 = s21_sprintf(s21_dest, "%c", c[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, c = %c", s, s21, c[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, c = %c", dest, s21_dest, c[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_c_7) {
  wint_t c[] = {0, 12, 123, 1234, 12345, 32132, 33333, 66666, 99999};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 9; i++) {
    int s = sprintf(dest, "%c", c[i]);
    int s21 = s21_sprintf(s21_dest, "%c", c[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, c = %lc", s, s21, c[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, c = %lc", dest, s21_dest, c[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_o_1) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  // const char *format = "aa bb %*.*o cc";

  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%o", val[i]);
    int s21 = s21_sprintf(s21_dest, "%o", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %o", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %o", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_o_2) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  // const char *format = "aa bb %*.*o cc";

  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%o", val[i]);
    int s21 = s21_sprintf(s21_dest, "%1o", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %1o", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %o", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_o_6) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  // const char *format = "aa bb %*.*o cc";

  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%#o", val[i]);
    int s21 = s21_sprintf(s21_dest, "%#o", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %o", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %o", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_x_1) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%x", val[i]);
    int s21 = s21_sprintf(s21_dest, "%x", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_x_2) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%#x", val[i]);
    int s21 = s21_sprintf(s21_dest, "%#x", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_x_3) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%#-x", val[i]);
    int s21 = s21_sprintf(s21_dest, "%#-x", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_x_4) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%-x", val[i]);
    int s21 = s21_sprintf(s21_dest, "%-x", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_x_5) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%-x", val[i]);
    int s21 = s21_sprintf(s21_dest, "%-x", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_X_1) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%X", val[i]);
    int s21 = s21_sprintf(s21_dest, "%X", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_X_2) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%#X", val[i]);
    int s21 = s21_sprintf(s21_dest, "%#X", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_X_3) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%#-X", val[i]);
    int s21 = s21_sprintf(s21_dest, "%#-X", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_X_4) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%-X", val[i]);
    int s21 = s21_sprintf(s21_dest, "%-X", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_X_5) {
  int val[] = {-100, -10, 0, 1, 10, 21474836, 21474836, 429496729};
  char dest[100];
  char s21_dest[100];
  for (int i = 0; i < 8; i++) {
    int s = sprintf(dest, "%#-X", val[i]);
    int s21 = s21_sprintf(s21_dest, "%#-X", val[i]);
    ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %x", s, s21, val[i]);
    ck_assert_msg(strcmp(dest, s21_dest) == 0,
                  "dest = %s, s21_dest = %s, val = %x", dest, s21_dest, val[i]);
  }
}
END_TEST

START_TEST(s21_sprintf_s_1) {
  char val[] = "Hello, world!";
  char dest[100];
  char s21_dest[100];
  sprintf(dest, "%s", val);
  s21_sprintf(s21_dest, "%s", val);
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_s_2) {
  char val[] = "";
  char dest[100];
  char s21_dest[100];
  sprintf(dest, "%s", val);
  s21_sprintf(s21_dest, "%s", val);
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_s_3) {
  char val[] = "12345";
  char dest[100];
  char s21_dest[100];
  sprintf(dest, "%s", val);
  s21_sprintf(s21_dest, "%s", val);
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_p_1) {
  char *val = "abc";
  char dest[100];
  char s21_dest[100];

  sprintf(dest, "%p", val);
  s21_sprintf(s21_dest, "%p", val);
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_p_2) {
  char *val = "";
  char dest[100];
  char s21_dest[100];

  sprintf(dest, "%p", val);
  s21_sprintf(s21_dest, "%p", val);
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_p_3) {
  char *val = "  ";
  char dest[100];
  char s21_dest[100];

  sprintf(dest, "%p", val);
  s21_sprintf(s21_dest, "%p", val);
  ck_assert_str_eq(dest, s21_dest);
}
END_TEST

START_TEST(s21_sprintf_n_1) {
  char dest[100];
  char s21_dest[100];
  int n, s21_n;
  const char *format = "aa\t bb %%\n%n cc";
  int s = sprintf(dest, format, &n);
  int s21 = s21_sprintf(s21_dest, format, &s21_n);
  ck_assert_msg(s == s21, "s = %d, s21 = %d\n", s, s21);
  ck_assert_msg(strcmp(dest, s21_dest) == 0, "    dest = %s\ns21_dest = %s\n",
                dest, s21_dest);
  ck_assert_msg(n == s21_n, "n = %d, s21_n = %d\n", n, s21_n);
}
END_TEST

START_TEST(s21_sprintf_f_1) {
  double val = -15.0;
  char dest[100];
  char s21_dest[100];

  sprintf(dest, "%f", val);
  s21_sprintf(s21_dest, "%f", val);
  ck_assert_str_eq(dest, s21_dest);
}

START_TEST(s21_sprintf_f_2) {
  double val = -1.0;
  char dest[100];
  char s21_dest[100];

  sprintf(dest, "%-.2f", val);
  s21_sprintf(s21_dest, "%-.2f", val);
  ck_assert_str_eq(dest, s21_dest);
}

// START_TEST(s21_sprintf_f_1) {
//   // double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
//   char dest[100];
//   char s21_dest[100];
//   // int width[] = {0, 1, 10, 20};
//   // int precision[] = {0, 1, 10, 20};
//   // const char *format = "aa bb %*.*f cc";
//   // for (int i = 0; i < 10; i++) {
//   // int s = sprintf(dest, "%5.5f", -15.0);
//   // int s21 = s21_sprintf(dest, "%5.5f", -15.0);
//   // ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s, s21, -15.0);
//   // ck_assert_msg(strcmp(dest, s21_dest) == 0,
//   //               "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
//   s21_dest,
//   //               -15.0);
//   // }
//   sprintf(dest, "%5.5f", -15.0);
//   s21_sprintf(dest, "%5.5f", -15.0);
//   ck_assert_str_eq(dest, s21_dest);
// }
// END_TEST

// START_TEST(s21_sprintf_f_2) {
//   double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
//   char dest[100];
//   char s21_dest[100];
//   int width[] = {2, 1, 10, 20};
//   int precision[] = {2, 1, 10, 20};
//   const char *format = "aa bb %-*.*f cc";
//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 4; j++) {
//       for (int k = 0; k < 4; k++) {
//         int s = sprintf(dest, format, width[j], precision[k], val[i]);
//         int s21 = s21_sprintf(s21_dest, format, width[j], precision[k],
//         val[i]); ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s,
//         s21,
//                       val[i]);
//         ck_assert_msg(strcmp(dest, s21_dest) == 0,
//                       "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
//                       s21_dest, val[i]);
//       }
//     }
//   }
// }
// END_TEST

START_TEST(s21_sprintf_f_3) {
  // double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
  char dest[100];
  char s21_dest[100];
  // int width[] = {0, 1, 10, 20};
  // int precision[] = {0, 1, 10, 20};
  const char *format = "aa bb %0*.*f cc";
  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     for (int k = 0; k < 4; k++) {

  sprintf(dest, format, 1, 10, 0.0);
  s21_sprintf(s21_dest, format, 1, 10, 0.0);

  ck_assert_str_eq(dest, s21_dest);

  // ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s,
  // s21,
  //               val[i]);
  // ck_assert_msg(strcmp(dest, s21_dest) == 0,
  //               "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
  //               s21_dest, val[i]);
  // }
  // }
  // }
}
END_TEST

START_TEST(s21_sprintf_f_4) {
  // double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
  char dest[100];
  char s21_dest[100];
  // int width[] = {0, 1, 10, 20};
  // int precision[] = {0, 1, 10, 20};
  const char *format = "aa bb %+*.*f cc";
  // for (int i = 0; i < 10; i++) {
  // for (int j = 0; j < 4; j++) {
  // for (int k = 0; k < 4; k++) {
  sprintf(dest, format, 10, 5, 33.1);
  s21_sprintf(s21_dest, format, 10, 5, 33.1);

  ck_assert_str_eq(dest, s21_dest);
  // ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s,s21, val[i]);
  //       ck_assert_msg(strcmp(dest, s21_dest) == 0,
  //                     "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
  //                     s21_dest, val[i]);
  //     }
  //   }
  // }
}
END_TEST

START_TEST(s21_sprintf_f_5) {
  // double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
  char dest[100];
  char s21_dest[100];
  // int width[] = {0, 1, 10, 20};
  // int precision[] = {0, 1, 10, 20};
  const char *format = "aa bb %+-*.*f cc";
  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 4; j++) {
  //     for (int k = 0; k < 4; k++) {
  sprintf(dest, format, 10, 10, 1.6);
  s21_sprintf(s21_dest, format, 10, 10, 1.6);

  ck_assert_str_eq(dest, s21_dest);

  //       ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s,
  //       s21,
  //                     val[i]);
  //       ck_assert_msg(strcmp(dest, s21_dest) == 0,
  //                     "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
  //                     s21_dest, val[i]);
  //     }
  //   }
  // }
}
END_TEST

// START_TEST(s21_sprintf_f_6) {
//   double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
//   char dest[100];
//   char s21_dest[100];
//   int width[] = {0, 1, 10, 20};
//   int precision[] = {0, 1, 10, 20};
//   const char *format = "aa bb % *.*f cc";
//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 4; j++) {
//       for (int k = 0; k < 4; k++) {
//         int s = sprintf(dest, format, width[j], precision[k], val[i]);
//         int s21 = s21_sprintf(s21_dest, format, width[j], precision[k],
//         val[i]); ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s,
//         s21,
//                       val[i]);
//         ck_assert_msg(strcmp(dest, s21_dest) == 0,
//                       "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
//                       s21_dest, val[i]);
//       }
//     }
//   }
// }
// END_TEST

// START_TEST(s21_sprintf_f_7) {
//   double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
//   char dest[100];
//   char s21_dest[100];
//   int width[] = {0, 1, 10, 20};
//   const char *format = "aa bb %0*f cc";
//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 4; j++) {
//       int s = sprintf(dest, format, width[j], val[i]);
//       int s21 = s21_sprintf(s21_dest, format, width[j], val[i]);
//       ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s, s21,
//       val[i]); ck_assert_msg(strcmp(dest, s21_dest) == 0,
//                     "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
//                     s21_dest, val[i]);
//     }
//   }
// }
// END_TEST

// START_TEST(s21_sprintf_f_8) {
//   double val[] = {-15, 0.0, 1.6, 33.1, 15.34};
//   char dest[100];
//   char s21_dest[100];
//   int width[] = {0, 1, 10, 20};
//   int precision[] = {0, 1, 10, 20};
//   const char *format = "aa bb % #*.*f cc";
//   for (int i = 0; i < 10; i++) {
//     for (int j = 0; j < 4; j++) {
//       for (int k = 0; k < 4; k++) {
//         int s = sprintf(dest, format, width[j], precision[k], val[i]);
//         int s21 = s21_sprintf(s21_dest, format, width[j], precision[k],
//         val[i]); ck_assert_msg(s == s21, "s = %d, s21 = %d, val = %lf\n", s,
//         s21,
//                       val[i]);
//         ck_assert_msg(strcmp(dest, s21_dest) == 0,
//                       "    dest = %s\ns21_dest = %s, val = %lf\n", dest,
//                       s21_dest, val[i]);
//       }
//     }
//   }
// }
// END_TEST

START_TEST(spec_f_simple) {
  int res = 0;
  int my_res = 0;
  char my_str[100][4024] = {"\0"};
  char str[100][4024] = {"\0"};
  char format[][1024] = {"%f",
                         "%f",
                         "%f",
                         "%f",
                         "5 usuall %fy",
                         "6 usuall %f aboba",
                         "7This is a simple minus value %fwe",
                         "8This is a zero %f okey"};
  float val[1024] = {0.01, 10, -10, 1.23, INT_MAX, INT_MIN, -1.2345678, 0};
  int i = 0;
  for (; i < 8; i++) {
    my_res = sprintf(str[i], format[i], val[i]);
    res = s21_sprintf(my_str[i], format[i], val[i]);
    ck_assert_str_eq(my_str[i], str[i]);
    ck_assert_int_eq(res, my_res);
  }
  for (float num = -1.0; num < 1.0; num = num + 0.01) {
    my_res = sprintf(str[i], "%f", num),
    res = s21_sprintf(my_str[i], "%f", num);
    ck_assert_str_eq(my_str[i], str[i]);
    ck_assert_int_eq(res, my_res);
  }
  for (float num = 0.0; num < 1.0; num = num + 0.01) {
    my_res = sprintf(str[i], "%f", num),
    res = s21_sprintf(my_str[i], "%f", num);
    ck_assert_str_eq(my_str[i], str[i]);
    ck_assert_int_eq(res, my_res);
  }
}
END_TEST

START_TEST(spec_f_test_simple_width) {
  float val[20] = {0.0, 0.01,    0.1,  1.0,       1.01,
                   1.1, 1.10001, 1.01, 1.12346789};  // 9
  float _val[20] = {0.0,  -0.01,    -0.1,  -1.0,       -1.01,
                    -1.1, -1.10001, -1.01, -1.12346789};
  int res = 0;
  int my_res = 0;
  char my_str[1024] = "\0";
  char str[1024] = "\0";
  char format_width[][150] = {"0usuall = %1f a", "1 = %3f a", "2 = %4f a"};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 9; j++) {
      my_res = s21_sprintf(my_str, format_width[i], val[j]);
      res = sprintf(str, format_width[i], val[j]);
      ck_assert_int_eq(res, my_res);
      ck_assert_str_eq(my_str, str);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 9; j++) {
      my_res = s21_sprintf(my_str, format_width[i], _val[j]);
      res = sprintf(str, format_width[i], _val[j]);
      ck_assert_int_eq(res, my_res);
      ck_assert_str_eq(my_str, str);
    }
  }
}
END_TEST

START_TEST(spec_f_test_simple_lenght) {
  int res = 0;
  int my_res = 0;
  char my_str[1024] = "\0";
  char str[1024] = "\0";
  char format[][1024] = {"0usuall = %1f a", "1 = %3f a", "2 = %4f a"};

  double val[20] = {0.0, 0.01,    0.1,  1.0,       1.01,
                    1.1, 1.10001, 1.01, 1.12346789};  // 9

  double _val[20] = {0.0,  -0.01,    -0.1,  -1.0,       -1.01,
                     -1.1, -1.10001, -1.01, -1.12346789};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 9; j++) {
      my_res = s21_sprintf(my_str, format[i], val[j]);
      res = sprintf(str, format[i], val[j]);
      ck_assert_int_eq(res, my_res);
      ck_assert_str_eq(my_str, str);
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 9; j++) {
      my_res = s21_sprintf(my_str, format[i], _val[j]);
      res = sprintf(str, format[i], _val[j]);
      ck_assert_str_eq(my_str, str);
      ck_assert_int_eq(res, my_res);
      ck_assert_str_eq(my_str, str);
    }
  }
}
END_TEST

START_TEST(spec_f_test_simple_flags) {
  int res = 0;
  int my_res = 0;
  char str[1024] = "\0";
  char my_str[1024] = "\0";
  int format_count = 10;
  char format[][1024] = {
      "0 usuall sign:% f!",  "1 usuall zero:%f!",  "2 usuall left:%-f!",
      "3 usuall space:% f!", "4sign left%+-fasas", "5 sign zero%+fasd",
      "6 space left% -f",    "7space zero% f",     "8space alter % f",
      "9left alter %-f",     "10sign alter %+f",   "10zero alter %f"};

  float val[20] = {0.0, 0.01,    0.1,  1.0,       1.01,
                   1.1, 1.10001, 1.01, 1.12346789};  // 9

  float _val[20] = {0.0,  -0.01,    -0.1,  1.0,        -1.01,
                    -1.1, -1.10001, -1.01, -1.12346789};

  for (int i = 0; i < format_count; i++) {
    for (int j = 0; j < 9; j++) {
      my_res = s21_sprintf(my_str, format[i], val[j]);
      res = sprintf(str, format[i], val[j]);
      ck_assert_int_eq(res, my_res);
      ck_assert_str_eq(my_str, str);
    }
  }

  for (int i = 0; i < format_count; i++) {
    for (int j = 0; j < 9; j++) {
      my_res = s21_sprintf(my_str, format[i], _val[j]);
      res = sprintf(str, format[i], _val[j]);
      ck_assert_int_eq(res, my_res);
      ck_assert_str_eq(my_str, str);
    }
  }
}
END_TEST

START_TEST(s21_sprintf_test) {
  char string_1[10000];
  char string_2[10000];
  int result_sprintf1 = sprintf(string_1, "%s%c%d%i%f%s", "11000", 'a', 123,
                                256, 15.12, "tralala");
  int result_s21_sprintf1 = s21_sprintf(string_2, "%s%c%d%i%f%s", "11000", 'a',
                                        123, 256, 15.12, "tralala");
  ck_assert_str_eq(string_1, string_2);
  ck_assert_int_eq(result_sprintf1, result_s21_sprintf1);
}
END_TEST

START_TEST(s21_sprintf_percentage_specifier) {
  char string_3[1000];
  char string_4[1000];
  int format1 = sprintf(string_3, "1%%");
  int format1_1 = s21_sprintf(string_4, "1%%");
  ck_assert_str_eq(string_3, string_4);
  ck_assert_int_eq(format1, format1_1);
}
END_TEST

// START_TEST(s21_sprintf_specifier1) {
//   char s21_sp[255] = {}, orig_sp[255] = {};
//   int n = 2100, n1 = 0, n2 = -21;
//   short sh = 123, sh1 = -123;
//   long int lg = 12345678912345, lg1 = -12345678912345;
//   int orig_len = 0, s21_len = 0;

//   s21_len = s21_sprintf(s21_sp, "%d %d %d %hd %hd %ld %ld %10ld", n, n1, n2,
//   sh,
//                         sh1, lg, lg1, lg1);
//   orig_len = sprintf(orig_sp, "%d %d %d %hd %hd %ld %ld %10ld", n, n1, n2,
//   sh,
//                      sh1, lg, lg1, lg1);
//   ck_assert_str_eq(s21_sp, orig_sp);
//   ck_assert_int_eq(s21_len, orig_len);
// }
// END_TEST

// START_TEST(s21_sprintf_specifier4) {
//   char s21_sp3[255] = {}, orig_sp3[255] = {};
//   long int lg = 12345678912345, lg1 = -12345678912345;
//   int orig_len = 0, s21_len = 0;

//   s21_len = s21_sprintf(s21_sp3, "%ld %ld %10ld", lg, lg1, lg);
//   orig_len = sprintf(orig_sp3, "%ld %ld %10ld", lg, lg1, lg);
//   ck_assert_str_eq(s21_sp3, orig_sp3);
//   ck_assert_int_eq(s21_len, orig_len);
// }
// END_TEST

START_TEST(s21_sprintf_specifier4_1) {
  char s21_sp4[255] = {}, orig_sp4[255] = {};
  int n = 2100, n1 = 0, n2 = -21;
  short sh = 123, sh1 = -123;
  int orig_len = 0, s21_len = 0;
  s21_len = s21_sprintf(s21_sp4, "%d %d %d %hd %hd", n, n1, n2, sh, sh1);
  orig_len = sprintf(orig_sp4, "%d %d %d %hd %hd", n, n1, n2, sh, sh1);
  ck_assert_str_eq(s21_sp4, orig_sp4);
  ck_assert_int_eq(s21_len, orig_len);
}
END_TEST

// START_TEST(s21_sprintf_specifier5) {
//   char s21_sp5[255] = {}, orig_sp5[255] = {};
//   int n = 2100, n1 = 0, n2 = -21;
//   short sh = 123, sh1 = -123;
//   long int lg = 12345678912345;
//   int orig_len = 0, s21_len = 0;

//   s21_len =
//       s21_sprintf(s21_sp5, "%d %d %d %hd %hd %ld", n, n1, n2, sh, sh1, lg);
//   orig_len = sprintf(orig_sp5, "%d %d %d %hd %hd %ld", n, n1, n2, sh, sh1,
//   lg); ck_assert_str_eq(s21_sp5, orig_sp5); ck_assert_int_eq(s21_len,
//   orig_len);
// }
// END_TEST

// START_TEST(s21_sprintf_specifier6) {
//   char s21_sp6[255] = {}, orig_sp6[255] = {};
//   short sh1 = -123;
//   long int lg1 = -12345678912345;
//   int orig_len = 0, s21_len = 0;

//   s21_len = s21_sprintf(s21_sp6, "%hd %ld", sh1, lg1);
//   orig_len = sprintf(orig_sp6, "%hd %ld", sh1, lg1);
//   ck_assert_str_eq(s21_sp6, orig_sp6);
//   ck_assert_int_eq(s21_len, orig_len);
// }
// END_TEST

// START_TEST(s21_sprintf_specifier7) {
//   char s21_sp7[255] = {}, orig_sp7[255] = {};
//   short sh1 = -123;
//   long int lg1 = -12345678912345;
//   int orig_len = 0, s21_len = 0;

//   s21_len = s21_sprintf(s21_sp7, "%ld %hd", lg1, sh1);
//   orig_len = sprintf(orig_sp7, "%ld %hd", lg1, sh1);
//   ck_assert_str_eq(s21_sp7, orig_sp7);
//   ck_assert_int_eq(s21_len, orig_len);
// }
// END_TEST

// START_TEST(s21_sprintf_specifier11) {
//   char s21_sp[255] = {}, orig_sp[255] = {};
//   int orig_len = 0, s21_len = 0;

//   s21_len = s21_sprintf(s21_sp, "%d %d %d %d %d %ld %ld", INT_MIN, INT_MAX,
//                         SHRT_MAX, SHRT_MIN, USHRT_MAX, LONG_MAX, LONG_MIN);
//   orig_len = sprintf(orig_sp, "%d %d %d %d %d %ld %ld", INT_MIN, INT_MAX,
//                      SHRT_MAX, SHRT_MIN, USHRT_MAX, LONG_MAX, LONG_MIN);
//   ck_assert_str_eq(s21_sp, orig_sp);
//   ck_assert_int_eq(s21_len, orig_len);
// }
// END_TEST

START_TEST(s21_sprintf_specifier12) {
  char s21_sp[255] = {}, orig_sp[255] = {};
  int orig_len = 0, s21_len = 0;

  s21_len = s21_sprintf(s21_sp, "%c %c %c", CHAR_MAX, CHAR_MIN, UCHAR_MAX);
  orig_len = sprintf(orig_sp, "%c %c %c", CHAR_MAX, CHAR_MIN, UCHAR_MAX);
  ck_assert_str_eq(s21_sp, orig_sp);
  ck_assert_int_eq(s21_len, orig_len);
}
END_TEST

START_TEST(s21_sprintf_specifier13) {
  char s21_sp[255] = {}, orig_sp[255] = {};
  int orig_len = 0, s21_len = 0;

  s21_len = s21_sprintf(s21_sp, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello",
                        "hello", "hello", "hello", "hello", "hello", "hello");
  orig_len = sprintf(orig_sp, "%s %10s %-10s %-3s %.s %.3s %.10s", "hello",
                     "hello", "hello", "hello", "hello", "hello", "hello");
  ck_assert_str_eq(s21_sp, orig_sp);
  ck_assert_int_eq(s21_len, orig_len);
}
END_TEST

// START_TEST(s21_sprintf_specifier14) {
//   char s21_sp[255] = {}, orig_sp[255] = {};
//   int orig_len = 0, s21_len = 0;

//   s21_len =
//       s21_sprintf(s21_sp, "%ls %10ls %-10ls %-3ls %.ls %.3ls %.10ls",
//       L"hello",
//                   L"hello", L"hello", L"hello", L"hello", L"hello",
//                   L"hello");
//   orig_len =
//       sprintf(orig_sp, "%ls %10ls %-10ls %-3ls %.ls %.3ls %.10ls", L"hello",
//               L"hello", L"hello", L"hello", L"hello", L"hello", L"hello");
//   ck_assert_str_eq(s21_sp, orig_sp);
//   ck_assert_int_eq(s21_len, orig_len);
// }
// END_TEST

START_TEST(s21_sprintf_specifier15) {
  char s21_sp[255] = {}, orig_sp[255] = {};

  s21_sprintf(s21_sp, "%u, %lu", UINT_MAX, ULONG_MAX);
  sprintf(orig_sp, "%u, %lu", UINT_MAX, ULONG_MAX);
  ck_assert_str_eq(s21_sp, orig_sp);
}
END_TEST

START_TEST(s21_sprintf_specifier16) {
  char s21_sp[255] = {}, orig_sp[255] = {};
  float f = 21.21, f1 = -21.21;
  int orig_len = 0, s21_len = 0;

  s21_len =
      s21_sprintf(s21_sp, "%+.1f %.2f %.3f %.4f %10.5f %10.5f %-10.3f %-10.2f",
                  f, f1, 21.21, -21.21, 42.42, -42.42, f, f1);
  orig_len =
      sprintf(orig_sp, "%+.1f %.2f %.3f %.4f %10.5f %10.5f %-10.3f %-10.2f", f,
              f1, 21.21, -21.21, 42.42, -42.42, f, f1);
  ck_assert_str_eq(s21_sp, orig_sp);
  ck_assert_int_eq(s21_len, orig_len);
}
END_TEST

START_TEST(s21_sprintf_specifier17) {
  char s21_sp[255] = {}, orig_sp[255] = {};
  float f = 21.21, f1 = -21.21;

  s21_sprintf(s21_sp, "[% 10f] [% 10f] [%f] [%.0f] [%.0f] [%.0f] [%f] ", f, f1,
              21., 21.21, 0.0, 21., 0.0);
  sprintf(orig_sp, "[% 10f] [% 10f] [%f] [%.0f] [%.0f] [%.0f] [%f] ", f, f1,
          21., 21.21, 0.0, 21., 0.0);
  ck_assert_str_eq(s21_sp, orig_sp);
  ck_assert_int_eq(s21_sprintf(s21_sp, "% 10f % 10f %f %.0f %.0f %.0f %f ", f,
                               f1, 21., 21.21, 0.0, 21., 0.0),
                   sprintf(orig_sp, "% 10f % 10f %f %.0f %.0f %.0f %f ", f, f1,
                           21., 21.21, 0.0, 21., 0.0));
}
END_TEST

// START_TEST(s21_sprintf_test1) {
//   char str1[100];
//   char str2[100];
//   void *p = (void*)0x3456;
//   int n1, n2;
//   int r1 = sprintf(str1, "%d%o%s%c%i%e%f%E%g%u%x%G%X%n%p%%%s", 25, 342,
//   "aboba", 'a', 123, 25.34, 4325.23434, 0.0000000123, 2.12345, 12345u, 8342,
//   0.0000456, 1235, &n1, p, "hello my friend"); int r2 = s21_sprintf(str2,
//   "%d%o%s%c%i%e%f%E%g%u%x%G%X%n%p%%%s", 25, 342, "aboba", 'a', 123, 25.34,
//   4325.23434, 0.0000000123, 2.12345, 12345u, 8342, 0.0000456, 1235, &n2, p,
//   "hello my friend"); ck_assert_str_eq(str1, str2); ck_assert_int_eq(n1, n2);
//   ck_assert_int_eq(r1, r2);
// }
// END_TEST

// START_TEST(s21_sprintf_test2) {
//   char str1[100];
//   char str2[100];
//   int r1 = sprintf(str1, "%+-25.3d%25.15o%#10.f%015d", 252, 243, 256.34, 15);
//   int r2 = s21_sprintf(str2, "%+-25.3d%25.15o%#10.f%015d", 252, 243, 256.34,
//   15); ck_assert_str_eq(str1, str2); ck_assert_int_eq(r1, r2);
// }
// END_TEST

START_TEST(s21_sprintf_test3) {
  char str1[100];
  char str2[100];
  int r1 = sprintf(str1, "%#+34.10g%#.10x%#15.1o%25.10s", 25.3456, 1234, 4567,
                   "HELLOMYDEARFRIEND");
  int r2 = s21_sprintf(str2, "%#+34.10g%#.10x%#15.1o%25.10s", 25.3456, 1234,
                       4567, "HELLOMYDEARFRIEND");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test4) {
  char str1[100];
  char str2[100];
  int r1 = sprintf(str1, "%e", 43253242.4342);
  int r2 = s21_sprintf(str2, "%e", 43253242.4342);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
  char str3[50];
  char str4[100];
  int r3 = sprintf(str3, "%*.0f", 25, 25432.34345);
  int r4 = s21_sprintf(str4, "%*.0f", 25, 25432.34345);
  ck_assert_str_eq(str3, str4);
  ck_assert_int_eq(r3, r4);
}
END_TEST

Suite *test_s21_sprintf() {
  Suite *s = suite_create("s21_sprintf");
  TCase *tc_core = tcase_create("s21_sprintf_tc");

  tcase_add_test(tc_core, spec_f_simple);
  tcase_add_test(tc_core, spec_f_test_simple_width);
  tcase_add_test(tc_core, spec_f_test_simple_lenght);
  tcase_add_test(tc_core, spec_f_test_simple_flags);

  tcase_add_test(tc_core, s21_sprintf_test);

  tcase_add_test(tc_core, s21_sprintf_percentage_specifier);
  // tcase_add_test(tc_core, s21_sprintf_specifier1);
  // tcase_add_test(tc_core, s21_sprintf_specifier4);
  tcase_add_test(tc_core, s21_sprintf_specifier4_1);
  // tcase_add_test(tc_core, s21_sprintf_specifier5);
  // tcase_add_test(tc_core, s21_sprintf_specifier6);
  // tcase_add_test(tc_core, s21_sprintf_specifier7);
  tcase_add_test(tc_core, s21_sprintf_specifier12);
  tcase_add_test(tc_core, s21_sprintf_specifier13);
  // tcase_add_test(tc_core, s21_sprintf_specifier14);
  tcase_add_test(tc_core, s21_sprintf_specifier16);
  tcase_add_test(tc_core, s21_sprintf_specifier17);
  // tcase_add_test(tc_core, s21_sprintf_specifier11);
  tcase_add_test(tc_core, s21_sprintf_specifier15);

  tcase_add_test(tc_core, s21_sprintf_f_1);
  tcase_add_test(tc_core, s21_sprintf_f_2);
  tcase_add_test(tc_core, s21_sprintf_f_3);
  tcase_add_test(tc_core, s21_sprintf_f_4);
  tcase_add_test(tc_core, s21_sprintf_f_5);
  // tcase_add_test(tc_core, s21_sprintf_f_6);
  // tcase_add_test(tc_core, s21_sprintf_f_7);
  // tcase_add_test(tc_core, s21_sprintf_f_8);

  // tcase_add_test(tc_core, s21_sprintf_test1);
  //   tcase_add_test(tc_core, s21_sprintf_test2);
  tcase_add_test(tc_core, s21_sprintf_test3);
  tcase_add_test(tc_core, s21_sprintf_test4);

  tcase_add_test(tc_core, s21_sprintf_x_1);
  tcase_add_test(tc_core, s21_sprintf_x_2);
  tcase_add_test(tc_core, s21_sprintf_x_3);
  tcase_add_test(tc_core, s21_sprintf_x_4);
  tcase_add_test(tc_core, s21_sprintf_x_5);

  tcase_add_test(tc_core, s21_sprintf_X_1);
  tcase_add_test(tc_core, s21_sprintf_X_2);
  tcase_add_test(tc_core, s21_sprintf_X_3);
  tcase_add_test(tc_core, s21_sprintf_X_4);
  tcase_add_test(tc_core, s21_sprintf_X_5);

  tcase_add_test(tc_core, s21_sprintf_o_1);
  tcase_add_test(tc_core, s21_sprintf_o_2);
  tcase_add_test(tc_core, s21_sprintf_o_6);

  tcase_add_test(tc_core, s21_sprintf_proc_1);

  tcase_add_test(tc_core, s21_sprintf_u_1);
  tcase_add_test(tc_core, s21_sprintf_u_2);
  tcase_add_test(tc_core, s21_sprintf_u_3);
  tcase_add_test(tc_core, s21_sprintf_u_4);
  tcase_add_test(tc_core, s21_sprintf_u_5);
  tcase_add_test(tc_core, s21_sprintf_u_6);
  tcase_add_test(tc_core, s21_sprintf_u_7);
  tcase_add_test(tc_core, s21_sprintf_u_8);
  tcase_add_test(tc_core, s21_sprintf_u_9);

  tcase_add_test(tc_core, s21_sprintf_i_1);
  tcase_add_test(tc_core, s21_sprintf_i_2);
  tcase_add_test(tc_core, s21_sprintf_i_3);
  tcase_add_test(tc_core, s21_sprintf_i_4);
  tcase_add_test(tc_core, s21_sprintf_i_5);
  tcase_add_test(tc_core, s21_sprintf_i_6);
  tcase_add_test(tc_core, s21_sprintf_i_7);
  tcase_add_test(tc_core, s21_sprintf_i_8);
  tcase_add_test(tc_core, s21_sprintf_i_10);
  tcase_add_test(tc_core, s21_sprintf_i_11);

  tcase_add_test(tc_core, s21_sprintf_c_1);
  tcase_add_test(tc_core, s21_sprintf_c_2);
  tcase_add_test(tc_core, s21_sprintf_c_3);
  tcase_add_test(tc_core, s21_sprintf_c_4);
  tcase_add_test(tc_core, s21_sprintf_c_7);

  tcase_add_test(tc_core, s21_sprintf_s_1);
  tcase_add_test(tc_core, s21_sprintf_s_2);
  tcase_add_test(tc_core, s21_sprintf_s_3);
  tcase_add_test(tc_core, s21_sprintf_p_1);
  tcase_add_test(tc_core, s21_sprintf_p_2);
  tcase_add_test(tc_core, s21_sprintf_p_3);

  tcase_add_test(tc_core, s21_sprintf_n_1);

  suite_add_tcase(s, tc_core);

  return s;
}
