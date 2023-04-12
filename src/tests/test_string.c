#include "test_string.h"

int main(void) {
  int failed = 0;
  Suite *s21_string_test[] = {
      test_memchr(), test_memcmp(), test_memcpy(), test_memmove(),
      test_memset(), test_strcat(), test_strncat(), test_strchr(),
      test_strcmp(), test_strncmp(), test_strcpy(), test_strncpy(),
      test_strcspn(), test_strerror(), test_strlen(), test_strpbrk(),
      test_strrchr(), test_strspn(), test_strstr(), test_strtok(),
      /* test_sprintf_d(),        test_sprintf_e(),
       test_sprintf_f(),        test_sprintf_g(),
       test_sprintf_hex1(),     test_sprintf_hex2(),
       test_sprintf_i(),        test_sprintf_n(),
       test_sprintf_octal(),    test_sprintf_percent(),
       test_sprintf_pointer(),  test_sprintf_string(),
       test_sprintf_unsigned(), test_sprintf_c(),*/
      test_s21_sprintf(), test_spacial(), test_sscanf(), NULL};

  for (int i = 0; s21_string_test[i] != NULL; i++) {  // (&& failed == 0)
    SRunner *sr = srunner_create(s21_string_test[i]);

    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);

    failed += srunner_ntests_failed(sr);
    srunner_free(sr);
  }
  printf("========= FAILED: %d =========\n", failed);

  return failed == 0 ? 0 : 1;
}
