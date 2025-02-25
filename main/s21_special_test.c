#include <check.h>
#include <string.h>

#include "s21_string.h"

Suite *to_upper_test();
Suite *to_lower_test();
Suite *insert_test();
Suite *trim_test();

int main() {
  SRunner *srunner;
  Suite *suites[] = {to_upper_test(), to_lower_test(), insert_test(),
                     trim_test()};

  for (int i = 0; i < 4; i++) {
    printf("========================================\n");
    srunner = srunner_create(suites[i]);
    srunner_run_all(srunner, CK_NORMAL);
    srunner_free(srunner);
  }
  return 0;
}

START_TEST(to_upper_test_1) {
  void *s21_result = s21_to_upper("qwerty");
  char *result = "QWERTY";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_upper_test_2) {
  void *s21_result = s21_to_upper("q");
  char *result = "Q";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_upper_test_3) {
  void *s21_result = s21_to_upper("1");
  char *result = "1";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_upper_test_4) {
  void *s21_result = s21_to_upper("123 qwerty");
  char *result = "123 QWERTY";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_upper_test_5) {
  void *s21_result = s21_to_upper("\t \n");
  char *result = "\t \n";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

Suite *to_upper_test() {
  Suite *suite = suite_create("s21_to_upper_test");
  TCase *tcase = tcase_create("to_upper");

  tcase_add_test(tcase, to_upper_test_1);
  tcase_add_test(tcase, to_upper_test_2);
  tcase_add_test(tcase, to_upper_test_3);
  tcase_add_test(tcase, to_upper_test_4);
  tcase_add_test(tcase, to_upper_test_5);

  suite_add_tcase(suite, tcase);
  return suite;
}

START_TEST(to_lower_test_1) {
  void *s21_result = s21_to_lower("QWERTY");
  char *result = "qwerty";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_lower_test_2) {
  void *s21_result = s21_to_lower("Q");
  char *result = "q";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_lower_test_3) {
  void *s21_result = s21_to_lower("1");
  char *result = "1";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_lower_test_4) {
  void *s21_result = s21_to_lower("123 QWERTY");
  char *result = "123 qwerty";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(to_lower_test_5) {
  void *s21_result = s21_to_lower("\t \n");
  char *result = "\t \n";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

Suite *to_lower_test() {
  Suite *suite = suite_create("s21_to_lower_test");
  TCase *tcase = tcase_create("to_lower");

  tcase_add_test(tcase, to_lower_test_1);
  tcase_add_test(tcase, to_lower_test_2);
  tcase_add_test(tcase, to_lower_test_3);
  tcase_add_test(tcase, to_lower_test_4);
  tcase_add_test(tcase, to_lower_test_5);

  suite_add_tcase(suite, tcase);
  return suite;
}

START_TEST(insert_test_1) {
  char src[] = "BC";
  char str[] = "A";
  size_t start_index = 0;

  void *s21_result = s21_insert(src, str, start_index);
  char result[] = "ABC";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(insert_test_2) {
  char src[] = "qwerty";
  char str[] = "qwerty";
  size_t start_index = 0;

  void *s21_result = s21_insert(src, str, start_index);
  char result[] = "qwertyqwerty";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(insert_test_3) {
  char src[] = "a";
  char str[] = "a";
  size_t start_index = 1;

  void *s21_result = s21_insert(src, str, start_index);
  char *result = "aa";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(insert_test_4) {
  char src[] = "123";
  char str[] = "123";
  size_t start_index = 1;

  void *s21_result = s21_insert(src, str, start_index);
  char result[] = "112323";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(insert_test_5) {
  char src[] = "";
  char str[] = "qwerty";
  size_t start_index = 1;

  void *s21_result = s21_insert(src, str, start_index);
  char *result = NULL;

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

Suite *insert_test() {
  Suite *suite = suite_create("s21_insert_test");
  TCase *tcase = tcase_create("insert");

  tcase_add_test(tcase, insert_test_1);
  tcase_add_test(tcase, insert_test_2);
  tcase_add_test(tcase, insert_test_3);
  tcase_add_test(tcase, insert_test_4);
  tcase_add_test(tcase, insert_test_5);

  suite_add_tcase(suite, tcase);
  return suite;
}

START_TEST(trim_test_1) {
  char src[] = "AQA";
  char trim_chars[] = "A";

  void *s21_result = s21_trim(src, trim_chars);
  char result[] = "Q";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(trim_test_2) {
  char src[] = "12qwe12rty12";
  char trim_chars[] = "12";

  void *s21_result = s21_trim(src, trim_chars);
  char result[] = "qwe12rty";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(trim_test_3) {
  char src[] = "qwe12rty12";
  char trim_chars[] = "12";

  void *s21_result = s21_trim(src, trim_chars);
  char result[] = "qwe12rty";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(trim_test_4) {
  char src[] = "12qwe12rty";
  char trim_chars[] = "12";

  void *s21_result = s21_trim(src, trim_chars);
  char result[] = "qwe12rty";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

START_TEST(trim_test_5) {
  char src[] = "AQAAQA";
  char trim_chars[] = "Q";

  void *s21_result = s21_trim(src, trim_chars);
  char result[] = "AQAAQA";

  ck_assert_pstr_eq(s21_result, result);
  free(s21_result);
}
END_TEST

Suite *trim_test() {
  Suite *suite = suite_create("s21_trim_test");
  TCase *tcase = tcase_create("trim");

  tcase_add_test(tcase, trim_test_1);
  tcase_add_test(tcase, trim_test_2);
  tcase_add_test(tcase, trim_test_3);
  tcase_add_test(tcase, trim_test_4);
  tcase_add_test(tcase, trim_test_5);

  suite_add_tcase(suite, tcase);
  return suite;
}