#include <check.h>
#include <string.h>

#include "s21_string.h"

Suite *int_sscanf_test();

int main() {
  SRunner *srunner;
  Suite *suites[] = {int_sscanf_test()};

  for (int i = 0; i < 1; i++) {
    printf("========================================\n");
    srunner = srunner_create(suites[i]);
    srunner_run_all(srunner, CK_NORMAL);
    srunner_free(srunner);
  }
  return 0;
}

START_TEST(int_sscanf_test_1) {
  int num;

  int s21_result = s21_sscanf("10", "%d", &num);
  int result = sscanf("10", "%d", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_2) {
  int num;

  int s21_result = s21_sscanf("-10", "%d", &num);
  int result = sscanf("-10", "%d", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_3) {
  int num;

  int s21_result = s21_sscanf("-10", "%u", &num);
  int result = sscanf("-10", "%u", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_4) {
  char ch;

  int s21_result = s21_sscanf("A", "%c", &ch);
  int result = sscanf("A", "%c", &ch);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_6) {
  double num;

  int s21_result = s21_sscanf("12.34", "%lf", &num);
  int result = sscanf("12.34", "%lf", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_8) {
  double num;
  (void)num;
  s21_sscanf(" 12", "%le", &num);
  sscanf(" 12", "%le", &num);
}
END_TEST

START_TEST(int_sscanf_test_10) {
  double num;
  char ch;

  int s21_result = s21_sscanf("12 hello", "%le %c", &num, &ch);
  int result = sscanf("12 hello", "%le %c", &num, &ch);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_11) {
  int num;

  int s21_result = s21_sscanf("2A", "%x", &num);
  int result = sscanf("2A", "%x", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_12) {
  double num;

  int s21_result = s21_sscanf(" 12.345 ", "%lf", &num);
  int result = sscanf(" 12.345 ", "%lf", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_13) {
  double num;

  int s21_result = s21_sscanf("0.1", "%lf", &num);
  int result = sscanf("0.1", "%lf", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_14) {
  char chs[2];
  char ch;

  int s21_result = s21_sscanf("67", "%c %s", &ch, chs);
  int result = sscanf("67", "%c %s", &ch, chs);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_15) {
  int num;

  int s21_result = s21_sscanf("67", "%o", &num);
  int result = sscanf("67", "%o", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_16) {
  int num;
  char ch;

  int s21_result = s21_sscanf("12 A", "%d %c", &num, &ch);
  int result = sscanf("12 A", "%d %c", &num, &ch);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_17) {
  int num;

  int s21_result = s21_sscanf("-2.5e2", "%d", &num);
  int result = sscanf("-2.5e2", "%d", &num);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_18) {
  int num1;
  int num2;

  int s21_result = s21_sscanf("01 02", "%02d %02d", &num1, &num2);
  int result = sscanf("01 02", "%02d %02d", &num1, &num2);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_19) {
  int num1;
  double num2;
  char ch;
  char chs[2];

  int s21_result =
      s21_sscanf("1 1.1 a aa", "%d %lf %c %s", &num1, &num2, &ch, chs);
  int result = sscanf("1 1.1 a aa", "%d %lf %c %s", &num1, &num2, &ch, chs);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(int_sscanf_test_20) {
  int num1;
  int num2;

  int s21_result = s21_sscanf("01 02", "%02d %02d", &num1, &num2);
  int result = sscanf("01 02", "%02d %02d", &num1, &num2);

  ck_assert_int_eq(s21_result, result);
}
END_TEST

START_TEST(sscanf_test_hex_prefix) {
  int num;
  char str[] = "0x123";
  char fmt[] = "%x";

  sscanf(str, fmt, &num);
  ck_assert_int_eq(num, 291);

  s21_sscanf(str, fmt, &num);
  ck_assert_int_eq(num, 291);
}
END_TEST

START_TEST(test_sscanf_hex_prefix) {
  int dest;
  const char *format = "%i";
  const char *input = "0x1A";

  int result = s21_sscanf(input, format, &dest);
  ck_assert_int_eq(result, 1);
  ck_assert_int_eq(dest, 26);
}
END_TEST

START_TEST(test_sscanf_octal_and_hex) {
  int dest1, dest2;
  const char *format = "%i %i";
  const char *input = "010 0x10";

  int result = s21_sscanf(input, format, &dest1, &dest2);
  ck_assert_int_eq(result, 2);
  ck_assert_int_eq(dest1, 8);
  ck_assert_int_eq(dest2, 16);
}
END_TEST

START_TEST(test_sscanf_hex_negative) {
  int dest;
  const char *format = "%i";
  const char *input = "-0x10";

  int result = s21_sscanf(input, format, &dest);
  ck_assert_int_eq(result, 1);
  ck_assert_int_eq(dest, -16);
}
END_TEST

Suite *int_sscanf_test() {
  Suite *suite = suite_create("s21_int_sscanf_test");
  TCase *tcase = tcase_create("int_sscanf");

  tcase_add_test(tcase, test_sscanf_hex_prefix);
  tcase_add_test(tcase, test_sscanf_octal_and_hex);
  tcase_add_test(tcase, test_sscanf_hex_negative);
  tcase_add_test(tcase, sscanf_test_hex_prefix);
  tcase_add_test(tcase, int_sscanf_test_1);
  tcase_add_test(tcase, int_sscanf_test_2);
  tcase_add_test(tcase, int_sscanf_test_3);
  tcase_add_test(tcase, int_sscanf_test_4);
  tcase_add_test(tcase, int_sscanf_test_6);
  tcase_add_test(tcase, int_sscanf_test_8);
  tcase_add_test(tcase, int_sscanf_test_10);
  tcase_add_test(tcase, int_sscanf_test_11);
  tcase_add_test(tcase, int_sscanf_test_12);
  tcase_add_test(tcase, int_sscanf_test_13);
  tcase_add_test(tcase, int_sscanf_test_14);
  tcase_add_test(tcase, int_sscanf_test_15);
  tcase_add_test(tcase, int_sscanf_test_16);
  tcase_add_test(tcase, int_sscanf_test_17);
  tcase_add_test(tcase, int_sscanf_test_18);
  tcase_add_test(tcase, int_sscanf_test_19);
  tcase_add_test(tcase, int_sscanf_test_20);

  suite_add_tcase(suite, tcase);
  return suite;
}