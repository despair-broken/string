#include <check.h>
#include <string.h>

#include "s21_string.h"

Suite *int_sprintf_test();
Suite *str_sprintf_test();

int main() {
  SRunner *srunner;
  Suite *suites[] = {int_sprintf_test(), str_sprintf_test()};

  for (int i = 0; i < 2; i++) {
    printf("========================================\n");
    srunner = srunner_create(suites[i]);
    srunner_run_all(srunner, CK_NORMAL);
    srunner_free(srunner);
  }
  return 0;
}

START_TEST(int_sprintf_test_1) {
  char str[20];
  char ch = '\0';

  int s21_result = s21_sprintf(str, "char %10c", ch);
  int result = sprintf(str, "char %10c", ch);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_1z) {
  char str[20];
  char ch = '\0';

  int s21_result = s21_sprintf(str, "char %-10c", ch);
  int result = sprintf(str, "char %-10c", ch);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_2) {
  char str[20];
  int num = 10;

  int s21_result = s21_sprintf(str, "int %d", num);
  int result = sprintf(str, "int %d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_3) {
  char str[20];
  double num = 10.0;

  int s21_result = s21_sprintf(str, "double %f", num);
  int result = sprintf(str, "double %f", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_4) {
  char buffer[50];
  s21_sprintf(buffer, "%d", -1234);
  sprintf(buffer, "%d", -1234);
  return;
}
END_TEST

START_TEST(int_sprintf_test_6) {
  char str[20];
  char *chs = "qw\0erty";

  int s21_result = s21_sprintf(str, "str %s.5", chs);
  int result = sprintf(str, "str %s.5", chs);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_6z) {
  char str[20];
  char *chs = "qwerty";

  int s21_result = s21_sprintf(str, "str %-s.2", chs);
  int result = sprintf(str, "str %-s.2", chs);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_9) {
  char str[20];
  int num = -10;

  int s21_result = s21_sprintf(str, "int %u", num);
  int result = sprintf(str, "int %u", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_10) {
  char str[20];

  int s21_result = s21_sprintf(str, "percent %%");
  int result = sprintf(str, "percent %%");

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_11) {
  char str[20];

  int s21_result = s21_sprintf(str, "%% percent %%");
  int result = sprintf(str, "%% percent %%");

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_12) {
  char str[20];
  short num = 10;

  int s21_result = s21_sprintf(str, "short int % hd", num);
  int result = sprintf(str, "short int % hd", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_13) {
  char str[20];
  int num = 0;

  int s21_result = s21_sprintf(str, "short int %hd", num);
  int result = sprintf(str, "short int %hd", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_14) {
  char str[20];
  long int num = 10;

  int s21_result = s21_sprintf(str, "short int %ld", num);
  int result = sprintf(str, "short int %ld", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_15) {
  char str[20];
  short num = 10;

  int s21_result = s21_sprintf(str, "long int %d", num);
  int result = sprintf(str, "long int %d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_16) {
  char str[20];
  int num = 10;

  int s21_result = s21_sprintf(str, "long int %d", num);
  int result = sprintf(str, "long int %d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_17) {
  char str[20];
  long int num = 10;

  int s21_result = s21_sprintf(str, "long int %ld", num);
  int result = sprintf(str, "long int %ld", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_18) {
  char buffer[50];
  s21_sprintf(buffer, "%d", 56789);
  sprintf(buffer, "%d", 56789);
  return;
}
END_TEST

START_TEST(int_sprintf_test_20) {
  char str[20];
  char *ch = "qwerty";

  int s21_result = s21_sprintf(str, "char %s", ch);
  int result = sprintf(str, "char %s", ch);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_21) {
  char str[20];
  int num = 10;

  int s21_result = s21_sprintf(str, "int %+d", num);
  int result = sprintf(str, "int %+d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_22) {
  char str[20];
  int num = -10;

  int s21_result = s21_sprintf(str, "int %-d", num);
  int result = sprintf(str, "int %-d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_23) {
  char str[20];
  double num = 10.1234;

  int s21_result = s21_sprintf(str, "double %.2f", num);
  int result = sprintf(str, "double %.2f", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_24) {
  char str[20];
  double num = 10.1234;

  int s21_result = s21_sprintf(str, "double % f", num);
  int result = sprintf(str, "double % f", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_25) {
  char str[20];
  int num = 1234;

  int s21_result = s21_sprintf(str, "int %2d", num);
  int result = sprintf(str, "int %2d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_26) {
  char str[20];
  char *num = "qwerty";

  int s21_result = s21_sprintf(str, "char %2s", num);
  int result = sprintf(str, "char %2s", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_27) {
  char buffer[50];
  s21_sprintf(buffer, "%0*.2f", 10, 12.345);
  sprintf(buffer, "%0*.2f", 10, 12.345);
  return;
}
END_TEST

START_TEST(int_sprintf_test_28) {
  char str[20];
  int num = 10;

  int s21_result = s21_sprintf(str, "int %-4d", num);
  int result = sprintf(str, "int %-4d", num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sprintf_test_29) {
  char buffer[50];
  s21_sprintf(buffer, "%.*f", 4, 12.34567);
  sprintf(buffer, "%.*f", 4, 12.34567);
  return;
}
END_TEST

START_TEST(int_sprintf_test_30) {
  char buffer[50];
  s21_sprintf(buffer, "%+f", 12.34567);
  sprintf(buffer, "%+f", 12.34567);
  return;
}
END_TEST

Suite *int_sprintf_test() {
  Suite *suite = suite_create("s21_int_sprintf_test");
  TCase *tcase = tcase_create("int_sprintf");

  tcase_add_test(tcase, int_sprintf_test_1);
  tcase_add_test(tcase, int_sprintf_test_1z);
  tcase_add_test(tcase, int_sprintf_test_2);
  tcase_add_test(tcase, int_sprintf_test_3);
  tcase_add_test(tcase, int_sprintf_test_4);
  tcase_add_test(tcase, int_sprintf_test_6);
  tcase_add_test(tcase, int_sprintf_test_6z);
  tcase_add_test(tcase, int_sprintf_test_9);
  tcase_add_test(tcase, int_sprintf_test_10);
  tcase_add_test(tcase, int_sprintf_test_11);
  tcase_add_test(tcase, int_sprintf_test_12);
  tcase_add_test(tcase, int_sprintf_test_13);
  tcase_add_test(tcase, int_sprintf_test_14);
  tcase_add_test(tcase, int_sprintf_test_15);
  tcase_add_test(tcase, int_sprintf_test_16);
  tcase_add_test(tcase, int_sprintf_test_17);
  tcase_add_test(tcase, int_sprintf_test_18);
  tcase_add_test(tcase, int_sprintf_test_20);
  tcase_add_test(tcase, int_sprintf_test_21);
  tcase_add_test(tcase, int_sprintf_test_22);
  tcase_add_test(tcase, int_sprintf_test_23);
  tcase_add_test(tcase, int_sprintf_test_24);
  tcase_add_test(tcase, int_sprintf_test_25);
  tcase_add_test(tcase, int_sprintf_test_26);
  tcase_add_test(tcase, int_sprintf_test_27);
  tcase_add_test(tcase, int_sprintf_test_28);
  tcase_add_test(tcase, int_sprintf_test_29);
  tcase_add_test(tcase, int_sprintf_test_30);

  suite_add_tcase(suite, tcase);
  return suite;
}

START_TEST(str_sprintf_test_1) {
  char s21_result[20];
  char result[20];
  char ch = 'a';

  s21_sprintf(s21_result, "char %c", ch);
  sprintf(result, "char %c", ch);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_2) {
  char s21_result[20];
  char result[20];
  int num = 10;

  s21_sprintf(s21_result, "int %d", num);
  sprintf(result, "int %d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_3) {
  char s21_result[20];
  char result[20];
  double num = 10.0;

  s21_sprintf(s21_result, "double %f", num);
  sprintf(result, "double %f", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_4) {
  char buffer[50];
  s21_sprintf(buffer, "int %d", -1239678816);
  sprintf(buffer, "int %d", -1239678816);
  return;
}
END_TEST

START_TEST(str_sprintf_test_6) {
  char s21_result[20];
  char result[20];
  char *chs = "qwerty";

  s21_sprintf(s21_result, "str %s", chs);
  sprintf(result, "str %s", chs);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_7) {
  char s21_result[20];
  char result[20];
  int num = -10;

  s21_sprintf(s21_result, "int %d", num);
  sprintf(result, "int %d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_9) {
  char s21_result[20];
  char result[20];
  int num = -10;

  s21_sprintf(s21_result, "int %-hu", num);
  sprintf(result, "int %-hu", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_9x) {
  char s21_result[20];
  char result[20];
  int num = 0;

  s21_sprintf(s21_result, "int %hu", num);
  sprintf(result, "int %hu", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_10) {
  char s21_result[20];
  char result[20];

  s21_sprintf(s21_result, "percent %%");
  sprintf(result, "percent %%");

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_11) {
  char s21_result[20];
  char result[20];

  s21_sprintf(s21_result, "%% percent %%");
  sprintf(result, "%% percent %%");

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_12) {
  char s21_result[20];
  char result[20];
  short num = 10;

  s21_sprintf(s21_result, "short int %hd", num);
  sprintf(result, "short int %hd", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_13) {
  char s21_result[20];
  char result[20];
  int num = 10;

  s21_sprintf(s21_result, "short int %hd", num);
  sprintf(result, "short int %hd", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_14) {
  char s21_result[20];
  char result[20];
  long int num = 10;

  s21_sprintf(s21_result, "short int %ld", num);
  sprintf(result, "short int %ld", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_15) {
  char s21_result[20];
  char result[20];
  short num = 10;

  s21_sprintf(s21_result, "long int %d", num);
  sprintf(result, "long int %d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_16) {
  char s21_result[20];
  char result[20];
  int num = 10;

  s21_sprintf(s21_result, "long int %d", num);
  sprintf(result, "long int %d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_17) {
  char s21_result[20];
  char result[20];
  long int num = 10;

  s21_sprintf(s21_result, "long int %ld", num);
  sprintf(result, "long int %ld", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_18) {
  char buffer[50];
  s21_sprintf(buffer, "int %d", 164954796);
  sprintf(buffer, "int %d", 164954796);
  return;
}
END_TEST

START_TEST(str_sprintf_test_20) {
  char s21_result[20];
  char result[20];
  char *ch = "qwerty";

  s21_sprintf(s21_result, "char %s", ch);
  sprintf(result, "char %s", ch);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_21) {
  char s21_result[20];
  char result[20];
  int num = 10;

  s21_sprintf(s21_result, "int %+d", num);
  sprintf(result, "int %+d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_22) {
  char s21_result[20];
  char result[20];
  int num = -10;

  s21_sprintf(s21_result, "int %-d", num);
  sprintf(result, "int %-d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_23) {
  char s21_result[20];
  char result[20];
  double num = 10.1234;

  s21_sprintf(s21_result, "double %.2f", num);
  sprintf(result, "double %.2f", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_24) {
  char s21_result[20];
  char result[20];
  double num = 10.1234;

  s21_sprintf(s21_result, "double % f", num);
  sprintf(result, "double % f", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_25) {
  char s21_result[20];
  char result[20];
  int num = 1234;

  s21_sprintf(s21_result, "int %2d", num);
  sprintf(result, "int %2d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_26) {
  char s21_result[20];
  char result[20];
  char *ch = "qwerty";

  s21_sprintf(s21_result, "char %2s", ch);
  sprintf(result, "char %2s", ch);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_27) {
  char buffer[50];
  s21_sprintf(buffer, "double %.2f", 12.345);
  sprintf(buffer, "double %.2f", 12.345);
  return;
}
END_TEST

START_TEST(str_sprintf_test_28) {
  char s21_result[20];
  char result[20];
  int num = 10;

  s21_sprintf(s21_result, "int %-4d", num);
  sprintf(result, "int %-4d", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_29) {
  char buffer[50];
  s21_sprintf(buffer, "double %.2f", 12.345);
  sprintf(buffer, "double %.2f", 12.345);
  return;
}
END_TEST

START_TEST(str_sprintf_test_30) {
  char buffer[50];
  s21_sprintf(buffer, "double %+f", 12.345);
  sprintf(buffer, "double %+f", 12.345);
  return;
}
END_TEST

START_TEST(str_sprintf_test_30z) {
  char buffer[50];
  s21_sprintf(buffer, "double %+f", NAN);
  sprintf(buffer, "double %+f", NAN);
  return;
}
END_TEST

START_TEST(str_sprintf_test_30x) {
  char buffer[50];
  s21_sprintf(buffer, "double %+f", INFINITY);
  sprintf(buffer, "double %+f", INFINITY);
  return;
}
END_TEST

START_TEST(str_sprintf_test_30c) {
  char buffer[50];
  s21_sprintf(buffer, "double %+f", -INFINITY);
  sprintf(buffer, "double %+f", -INFINITY);
  return;
}
END_TEST

START_TEST(str_sprintf_test_34) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "general %g", num);
  sprintf(result, "general %g", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_35) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "general %.2g", num);
  sprintf(result, "general %.2g", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_36) {
  char s21_result[100];
  char result[100];
  double num = 123.456e+10;

  s21_sprintf(s21_result, "general %g", num);
  sprintf(result, "general %g", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_38) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "exponential %e", num);
  sprintf(result, "exponential %e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_39) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "exponential %.2e", num);
  sprintf(result, "exponential %.2e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_40) {
  char s21_result[100];
  char result[100];
  double num = 123.456e+10;

  s21_sprintf(s21_result, "exponential %e", num);
  sprintf(result, "exponential %e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_41) {
  char s21_result[100];
  char result[100];
  double num = 0.000012345;

  s21_sprintf(s21_result, "exponential %e", num);
  sprintf(result, "exponential %e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_42) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "exponential %+e", num);
  sprintf(result, "exponential %+e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_43) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "exponential %15.2e", num);
  sprintf(result, "exponential %15.2e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_44) {
  char s21_result[100];
  char result[100];
  double num = 123.456;

  s21_sprintf(s21_result, "exponential %-15.2e", num);
  sprintf(result, "exponential %-15.2e", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST
START_TEST(str_sprintf_test_45) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%o", num);
  sprintf(result, "%o", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_47) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%5o", num);
  sprintf(result, "%5o", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_49) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%x", num);
  sprintf(result, "%x", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_50) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%#x", num);
  sprintf(result, "%#x", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_51) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%5x", num);
  sprintf(result, "%5x", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_52) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%#5x", num);
  sprintf(result, "%#5x", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_53) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%X", num);
  sprintf(result, "%X", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_54) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%#X", num);
  sprintf(result, "%#X", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_55) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%5X", num);
  sprintf(result, "%5X", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_56) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%#5X", num);
  sprintf(result, "%#5X", num);

  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_57) {
  char s21_result[100];
  char result[100];
  unsigned int num = 4294967295;  // Максимальное значение для unsigned int

  s21_sprintf(s21_result, "%o", num);
  sprintf(result, "%o", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_59) {
  char s21_result[100];
  char result[100];
  unsigned int num = 4294967295;  // Максимальное значение для unsigned int

  s21_sprintf(s21_result, "%x", num);
  sprintf(result, "%x", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_60) {
  char s21_result[100];
  char result[100];
  unsigned int num = 4294967295;  // Максимальное значение для unsigned int

  s21_sprintf(s21_result, "%#x", num);
  sprintf(result, "%#x", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_61) {
  char s21_result[100];
  char result[100];
  unsigned int num = 4294967295;  // Максимальное значение для unsigned int

  s21_sprintf(s21_result, "%X", num);
  sprintf(result, "%X", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_62) {
  char s21_result[100];
  char result[100];
  unsigned int num = 4294967295;  // Максимальное значение для unsigned int

  s21_sprintf(s21_result, "%#X", num);
  sprintf(result, "%#X", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_63) {
  char s21_result[100];
  char result[100];
  unsigned int num = 0;

  s21_sprintf(s21_result, "%o", num);
  sprintf(result, "%o", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_65) {
  char s21_result[100];
  char result[100];
  unsigned int num = 0;

  s21_sprintf(s21_result, "%x", num);
  sprintf(result, "%x", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_67) {
  char s21_result[100];
  char result[100];
  unsigned int num = 0;

  s21_sprintf(s21_result, "%X", num);
  sprintf(result, "%X", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_69) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%05o", num);
  sprintf(result, "%05o", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_70) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%05x", num);
  sprintf(result, "%05x", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_71) {
  char s21_result[100];
  char result[100];
  unsigned int num = 12345;

  s21_sprintf(s21_result, "%05X", num);
  sprintf(result, "%05X", num);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

START_TEST(str_sprintf_test_p_format) {
  char s21_result[100];
  char result[100];
  void *ptr = (void *)0x123abc;

  // Базовый тест с адресом
  s21_sprintf(s21_result, "%p", ptr);
  sprintf(result, "%p", ptr);
  ck_assert_str_eq(s21_result, result);

  // Тест с шириной и выравниванием вправо
  s21_sprintf(s21_result, "%10p", ptr);
  sprintf(result, "%10p", ptr);
  ck_assert_str_eq(s21_result, result);

  // Тест с шириной и нулями
  s21_sprintf(s21_result, "%10p", ptr);
  sprintf(result, "%10p", ptr);
  ck_assert_str_eq(s21_result, result);

  // Тест с выравниванием влево
  s21_sprintf(s21_result, "%-10p", ptr);
  sprintf(result, "%-10p", ptr);
  ck_assert_str_eq(s21_result, result);

  // Тест с NULL-указателем
  s21_sprintf(s21_result, "%p", NULL);
  sprintf(result, "%p", (void *)0);
  ck_assert_str_eq(s21_result, result);
}
END_TEST

Suite *str_sprintf_test() {
  Suite *suite = suite_create("s21_str_sprintf_test");
  TCase *tcase = tcase_create("str_sprintf");

  tcase_add_test(tcase, str_sprintf_test_p_format);
  tcase_add_test(tcase, str_sprintf_test_1);
  tcase_add_test(tcase, str_sprintf_test_2);
  tcase_add_test(tcase, str_sprintf_test_3);
  tcase_add_test(tcase, str_sprintf_test_4);
  tcase_add_test(tcase, str_sprintf_test_6);
  tcase_add_test(tcase, str_sprintf_test_7);
  tcase_add_test(tcase, str_sprintf_test_9);
  tcase_add_test(tcase, str_sprintf_test_9x);
  tcase_add_test(tcase, str_sprintf_test_10);
  tcase_add_test(tcase, str_sprintf_test_11);
  tcase_add_test(tcase, str_sprintf_test_12);
  tcase_add_test(tcase, str_sprintf_test_13);
  tcase_add_test(tcase, str_sprintf_test_14);
  tcase_add_test(tcase, str_sprintf_test_15);
  tcase_add_test(tcase, str_sprintf_test_16);
  tcase_add_test(tcase, str_sprintf_test_17);
  tcase_add_test(tcase, str_sprintf_test_18);
  tcase_add_test(tcase, str_sprintf_test_20);
  tcase_add_test(tcase, str_sprintf_test_21);
  tcase_add_test(tcase, str_sprintf_test_22);
  tcase_add_test(tcase, str_sprintf_test_23);
  tcase_add_test(tcase, str_sprintf_test_24);
  tcase_add_test(tcase, str_sprintf_test_25);
  tcase_add_test(tcase, str_sprintf_test_26);
  tcase_add_test(tcase, str_sprintf_test_27);
  tcase_add_test(tcase, str_sprintf_test_28);
  tcase_add_test(tcase, str_sprintf_test_29);
  tcase_add_test(tcase, str_sprintf_test_30);
  tcase_add_test(tcase, str_sprintf_test_30z);
  tcase_add_test(tcase, str_sprintf_test_30x);
  tcase_add_test(tcase, str_sprintf_test_30c);
  tcase_add_test(tcase, str_sprintf_test_34);
  tcase_add_test(tcase, str_sprintf_test_35);
  tcase_add_test(tcase, str_sprintf_test_36);
  tcase_add_test(tcase, str_sprintf_test_38);
  tcase_add_test(tcase, str_sprintf_test_39);
  tcase_add_test(tcase, str_sprintf_test_40);
  tcase_add_test(tcase, str_sprintf_test_41);
  tcase_add_test(tcase, str_sprintf_test_42);
  tcase_add_test(tcase, str_sprintf_test_43);
  tcase_add_test(tcase, str_sprintf_test_44);
  tcase_add_test(tcase, str_sprintf_test_45);
  tcase_add_test(tcase, str_sprintf_test_47);
  tcase_add_test(tcase, str_sprintf_test_49);
  tcase_add_test(tcase, str_sprintf_test_50);
  tcase_add_test(tcase, str_sprintf_test_51);
  tcase_add_test(tcase, str_sprintf_test_52);
  tcase_add_test(tcase, str_sprintf_test_53);
  tcase_add_test(tcase, str_sprintf_test_54);
  tcase_add_test(tcase, str_sprintf_test_55);
  tcase_add_test(tcase, str_sprintf_test_56);
  tcase_add_test(tcase, str_sprintf_test_57);
  tcase_add_test(tcase, str_sprintf_test_59);
  tcase_add_test(tcase, str_sprintf_test_60);
  tcase_add_test(tcase, str_sprintf_test_61);
  tcase_add_test(tcase, str_sprintf_test_62);
  tcase_add_test(tcase, str_sprintf_test_63);
  tcase_add_test(tcase, str_sprintf_test_65);
  tcase_add_test(tcase, str_sprintf_test_67);
  tcase_add_test(tcase, str_sprintf_test_69);
  tcase_add_test(tcase, str_sprintf_test_70);
  tcase_add_test(tcase, str_sprintf_test_71);

  suite_add_tcase(suite, tcase);
  return suite;
}