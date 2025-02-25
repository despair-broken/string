#include "check.h"
#include "s21_string.h"

START_TEST(s21_sprintf_test_minus_c) {
  char str1[1000];
  char str2[1000];
  char ch = 'F';
  int r1 = sprintf(str1, "\n%-c%-1c%-2c%-3c%-4c%-5c%-6c%-7c%-8c", ch, ch, ch,
                   ch, ch, ch, ch, ch, ch);
  int r2 = s21_sprintf(str2, "\n%-c%-1c%-2c%-3c%-4c%-5c%-6c%-7c%-8c", ch, ch,
                       ch, ch, ch, ch, ch, ch, ch);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_c) {
  char str1[1000];
  char str2[1000];
  char ch = 'F';
  int r1 = sprintf(str1, "\n%-c%-1c%-2c%-3c%-4c%-5c%-6c%-7c%-8c", ch, ch, ch,
                   ch, ch, ch, ch, ch, ch);
  int r2 = s21_sprintf(str2, "\n%-c%-1c%-2c%-3c%-4c%-5c%-6c%-7c%-8c", ch, ch,
                       ch, ch, ch, ch, ch, ch, ch);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_s) {
  char str1[10000];
  char str2[10000];
  char str3[1000] = "stroka";
  int r1 = sprintf(str1, "\n%-s%-1s%-2s%-3s%-4s%-5s%-6s%-7s%-8s", str3, str3,
                   str3, str3, str3, str3, str3, str3, str3);
  int r2 = s21_sprintf(str2, "\n%-s%-1s%-2s%-3s%-4s%-5s%-6s%-7s%-8s", str3,
                       str3, str3, str3, str3, str3, str3, str3, str3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_s) {
  char str1[10000];
  char str2[10000];
  char str3[1000] = "stroka";
  int r1 = sprintf(str1, "\n%s%1s%2s%3s%4s%5s%6s%7s%8s", str3, str3, str3, str3,
                   str3, str3, str3, str3, str3);
  int r2 = s21_sprintf(str2, "\n%s%1s%2s%3s%4s%5s%6s%7s%8s", str3, str3, str3,
                       str3, str3, str3, str3, str3, str3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 1,
              1, 1, 1, 1, 1, 1, 1, 1);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 12,
              12, 12, 12, 12, 12, 12, 12, 12);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
              12345678, 12345678, 12345678);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                  12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_u1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", 1,
              1, 1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              12, 12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_u12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
              12345678, 12345678, 12345678);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       12345678, 12345678, 12345678, 12345678, 12345678,
                       12345678, 12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", -1,
              -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
              -1234567, -1234567, -1234567);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                  -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
              -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
              -12345678, -12345678, -12345678);
  int r2 =
      s21_sprintf(str2, "\n%-6u%-6.u%-6.0u%-6.2u%-6.3u%-6.4u%-6.5u%-6.6u%-6.7u",
                  -12345678, -12345678, -12345678, -12345678, -12345678,
                  -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_um1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              -1, -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
              -1234567, -1234567, -1234567);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       -1234567, -1234567, -1234567, -1234567, -1234567,
                       -1234567, -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_um12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
              -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
              -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(str2,
                       "\n%-.6u%-.6u%-1.6u%-2.6u%-3.6u%-4.6u%-5.6u%-6.6u%-7.6d",
                       -12345678, -12345678, -12345678, -12345678, -12345678,
                       -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 1, 1,
                   1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 1,
                       1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 12, 12,
                   12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 12,
                       12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 123,
                   123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 1234,
                   1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 12345,
                   12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 =
      s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 12345,
                  12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", 123456,
              123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       123456, 123456, 123456, 123456, 123456, 123456, 123456,
                       123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                   1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                   1234567, 1234567, 1234567);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                       1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                   12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                   12345678, 12345678, 12345678);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       12345678, 12345678, 12345678, 12345678, 12345678,
                       12345678, 12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_u1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 1, 1,
                   1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 1,
                       1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 12,
                   12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 123,
                   123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 1234,
                   1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 12345,
                   12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 =
      s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 12345,
                  12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", 123456,
              123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       123456, 123456, 123456, 123456, 123456, 123456, 123456,
                       123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                   1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                   1234567, 1234567, 1234567);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                       1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                   12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                   12345678, 12345678, 12345678);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       12345678, 12345678, 12345678, 12345678, 12345678,
                       12345678, 12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -1, -1,
                   -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -1,
                       -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -12,
                   -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -123,
                   -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -1234,
                   -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 =
      s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -1234,
                  -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u", -12345,
              -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       -12345, -12345, -12345, -12345, -12345, -12345, -12345,
                       -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                   -123456, -123456, -123456, -123456, -123456, -123456,
                   -123456, -123456, -123456);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       -123456, -123456, -123456, -123456, -123456, -123456,
                       -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                   -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                   -1234567, -1234567, -1234567);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       -1234567, -1234567, -1234567, -1234567, -1234567,
                       -1234567, -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                   -12345678, -12345678, -12345678, -12345678, -12345678,
                   -12345678, -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(str2, "\n%6u%6.u%6.0u%6.2u%6.3u%6.4u%6.5u%6.6u%6.7u",
                       -12345678, -12345678, -12345678, -12345678, -12345678,
                       -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_um1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", -1,
                   -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", -12,
                   -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", -123,
                   -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", -1234,
                   -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 =
      s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", -1234,
                  -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d", -12345,
              -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -12345, -12345, -12345, -12345, -12345, -12345, -12345,
                       -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                   -123456, -123456, -123456, -123456, -123456, -123456,
                   -123456, -123456, -123456);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -123456, -123456, -123456, -123456, -123456, -123456,
                       -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                   -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                   -1234567, -1234567, -1234567);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -1234567, -1234567, -1234567, -1234567, -1234567,
                       -1234567, -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_um12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                   -12345678, -12345678, -12345678, -12345678, -12345678,
                   -12345678, -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(str2, "\n%.6u%.6u%1.6u%2.6u%3.6u%4.6u%5.6u%6.6u%7.6d",
                       -12345678, -12345678, -12345678, -12345678, -12345678,
                       -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u", 12,
      12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u", 12,
      12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_hu1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      12, 12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hu12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u", -1,
      -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u", -1,
      -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(
      str2, "\n%-6hu%-6.hu%-6.0hu%-6.2hu%-6.3hu%-6.4hu%-6.5hu%-6.6hu%-6.7u",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_hum1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -1, -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hum12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(
      str2, "\n%-.6hu%-.6hu%-1.6hu%-2.6hu%-3.6hu%-4.6hu%-5.6hu%-6.6hu%-7.6d",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   1, 1, 1, 1, 1, 1, 1, 1, 1);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   12, 12, 12, 12, 12, 12, 12, 12, 12);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   123456, 123456, 123456, 123456, 123456, 123456, 123456,
                   123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                   1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                   12345678, 12345678, 12345678);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                  12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_hu1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 1,
              1, 1, 1, 1, 1, 1, 1, 1);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 12,
              12, 12, 12, 12, 12, 12, 12, 12);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hu12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
              12345678, 12345678, 12345678);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                  12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -1, -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -12345, -12345, -12345, -12345, -12345, -12345, -12345,
                   -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -123456, -123456, -123456, -123456, -123456, -123456,
                   -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                   -1234567, -1234567, -1234567);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                  -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                   -12345678, -12345678, -12345678, -12345678, -12345678,
                   -12345678, -12345678, -12345678, -12345678);
  int r2 =
      s21_sprintf(str2, "\n%6hu%6.hu%6.0hu%6.2hu%6.3hu%6.4hu%6.5hu%6.6hu%6.7u",
                  -12345678, -12345678, -12345678, -12345678, -12345678,
                  -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_hum1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", -1,
              -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
              -1234567, -1234567, -1234567);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                  -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hum12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
              -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
              -12345678, -12345678, -12345678);
  int r2 =
      s21_sprintf(str2, "\n%.6hu%.6hu%1.6hu%2.6hu%3.6hu%4.6hu%5.6hu%6.6hu%7.6d",
                  -12345678, -12345678, -12345678, -12345678, -12345678,
                  -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%-25.10d%-30.2d%10.12d%11d", 253, 335, 1234, 34);
  int r2 =
      s21_sprintf(str2, "\n%-25.10d%-30.2d%10.12d%11d", 253, 335, 1234, 34);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d0) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d%-6.8d", 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d%-6.8d", 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 1,
              1, 1, 1, 1, 1, 1, 1, 1);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 12,
              12, 12, 12, 12, 12, 12, 12, 12);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
              12345678, 12345678, 12345678);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                  12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_d1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", 1,
              1, 1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              12, 12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_d12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
              12345678, 12345678, 12345678);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       12345678, 12345678, 12345678, 12345678, 12345678,
                       12345678, 12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", -1,
              -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
              -1234567, -1234567, -1234567);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                  -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
              -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
              -12345678, -12345678, -12345678);
  int r2 =
      s21_sprintf(str2, "\n%-6d%-6.d%-6.0d%-6.2d%-6.3d%-6.4d%-6.5d%-6.6d%-6.7d",
                  -12345678, -12345678, -12345678, -12345678, -12345678,
                  -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_dm1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              -1, -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
              -1234567, -1234567, -1234567);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       -1234567, -1234567, -1234567, -1234567, -1234567,
                       -1234567, -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_dm12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
              -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
              -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(str2,
                       "\n%-.6d%-.6d%-1.6d%-2.6d%-3.6d%-4.6d%-5.6d%-6.6d%-7.6d",
                       -12345678, -12345678, -12345678, -12345678, -12345678,
                       -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 1, 1,
                   1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 1,
                       1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 12, 12,
                   12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 12,
                       12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 123,
                   123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 1234,
                   1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 12345,
                   12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 =
      s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 12345,
                  12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", 123456,
              123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       123456, 123456, 123456, 123456, 123456, 123456, 123456,
                       123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                   1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                   1234567, 1234567, 1234567);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                       1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                   12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                   12345678, 12345678, 12345678);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       12345678, 12345678, 12345678, 12345678, 12345678,
                       12345678, 12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_d1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 1, 1,
                   1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 1,
                       1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 12,
                   12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 123,
                   123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 1234,
                   1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 12345,
                   12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 =
      s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 12345,
                  12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", 123456,
              123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       123456, 123456, 123456, 123456, 123456, 123456, 123456,
                       123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                   1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                   1234567, 1234567, 1234567);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                       1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                   12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                   12345678, 12345678, 12345678);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       12345678, 12345678, 12345678, 12345678, 12345678,
                       12345678, 12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -1, -1,
                   -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -1,
                       -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -12,
                   -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -123,
                   -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -1234,
                   -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 =
      s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -1234,
                  -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d", -12345,
              -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       -12345, -12345, -12345, -12345, -12345, -12345, -12345,
                       -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                   -123456, -123456, -123456, -123456, -123456, -123456,
                   -123456, -123456, -123456);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       -123456, -123456, -123456, -123456, -123456, -123456,
                       -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                   -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                   -1234567, -1234567, -1234567);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       -1234567, -1234567, -1234567, -1234567, -1234567,
                       -1234567, -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                   -12345678, -12345678, -12345678, -12345678, -12345678,
                   -12345678, -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(str2, "\n%6d%6.d%6.0d%6.2d%6.3d%6.4d%6.5d%6.6d%6.7d",
                       -12345678, -12345678, -12345678, -12345678, -12345678,
                       -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_dm1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", -1,
                   -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", -12,
                   -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", -123,
                   -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", -1234,
                   -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 =
      s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", -1234,
                  -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d", -12345,
              -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -12345, -12345, -12345, -12345, -12345, -12345, -12345,
                       -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                   -123456, -123456, -123456, -123456, -123456, -123456,
                   -123456, -123456, -123456);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -123456, -123456, -123456, -123456, -123456, -123456,
                       -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                   -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                   -1234567, -1234567, -1234567);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -1234567, -1234567, -1234567, -1234567, -1234567,
                       -1234567, -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_dm12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                   -12345678, -12345678, -12345678, -12345678, -12345678,
                   -12345678, -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(str2, "\n%.6d%.6d%1.6d%2.6d%3.6d%4.6d%5.6d%6.6d%7.6d",
                       -12345678, -12345678, -12345678, -12345678, -12345678,
                       -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_d2) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%-25.10d%-30.2d%10.12d%11d", 253, 335, 1234, 34);
  int r2 =
      s21_sprintf(str2, "\n%-25.10d%-30.2d%10.12d%11d", 253, 335, 1234, 34);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d", 12,
      12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d", 12,
      12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_hd1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d", 1,
      1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      12, 12, 12, 12, 12, 12, 12, 12, 12);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
      1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hd12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      12345678, 12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
      12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d", -1,
      -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d", -1,
      -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(
      str2, "\n%-6hd%-6.hd%-6.0hd%-6.2hd%-6.3hd%-6.4hd%-6.5hd%-6.6hd%-6.7d",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_hdm1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -1, -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456,
      -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -1234567, -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
      -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_hdm12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  int r2 = s21_sprintf(
      str2, "\n%-.6hd%-.6hd%-1.6hd%-2.6hd%-3.6hd%-4.6hd%-5.6hd%-6.6hd%-7.6d",
      -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
      -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   1, 1, 1, 1, 1, 1, 1, 1, 1);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   12, 12, 12, 12, 12, 12, 12, 12, 12);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   123456, 123456, 123456, 123456, 123456, 123456, 123456,
                   123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   1234567, 1234567, 1234567, 1234567, 1234567, 1234567,
                   1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                   12345678, 12345678, 12345678);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                  12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_hd1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 1,
              1, 1, 1, 1, 1, 1, 1, 1);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  1, 1, 1, 1, 1, 1, 1, 1, 1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 12,
              12, 12, 12, 12, 12, 12, 12, 12);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  12, 12, 12, 12, 12, 12, 12, 12, 12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              123, 123, 123, 123, 123, 123, 123, 123, 123);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  123, 123, 123, 123, 123, 123, 123, 123, 123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234, 1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  int r2 = s21_sprintf(
      str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 12345,
      12345, 12345, 12345, 12345, 12345, 12345, 12345, 12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  int r2 = s21_sprintf(
      str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 123456,
      123456, 123456, 123456, 123456, 123456, 123456, 123456, 123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  int r2 = s21_sprintf(
      str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", 1234567,
      1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567, 1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hd12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
              12345678, 12345678, 12345678);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  12345678, 12345678, 12345678, 12345678, 12345678, 12345678,
                  12345678, 12345678, 12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -1, -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -12345, -12345, -12345, -12345, -12345, -12345, -12345,
                   -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -123456, -123456, -123456, -123456, -123456, -123456,
                   -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                   -1234567, -1234567, -1234567);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                  -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                   -12345678, -12345678, -12345678, -12345678, -12345678,
                   -12345678, -12345678, -12345678, -12345678);
  int r2 =
      s21_sprintf(str2, "\n%6hd%6.hd%6.0hd%6.2hd%6.3hd%6.4hd%6.5hd%6.6hd%6.7d",
                  -12345678, -12345678, -12345678, -12345678, -12345678,
                  -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_hdm1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", -1,
              -1, -1, -1, -1, -1, -1, -1, -1);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  -1, -1, -1, -1, -1, -1, -1, -1, -1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              -12, -12, -12, -12, -12, -12, -12, -12, -12);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  -12, -12, -12, -12, -12, -12, -12, -12, -12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              -123, -123, -123, -123, -123, -123, -123, -123, -123);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  -123, -123, -123, -123, -123, -123, -123, -123, -123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  int r2 = s21_sprintf(
      str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", -1234,
      -1234, -1234, -1234, -1234, -1234, -1234, -1234, -1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  int r2 = s21_sprintf(
      str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", -12345,
      -12345, -12345, -12345, -12345, -12345, -12345, -12345, -12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  int r2 = s21_sprintf(
      str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d", -123456,
      -123456, -123456, -123456, -123456, -123456, -123456, -123456, -123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
              -1234567, -1234567, -1234567);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  -1234567, -1234567, -1234567, -1234567, -1234567, -1234567,
                  -1234567, -1234567, -1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_hdm12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
              -12345678, -12345678, -12345678, -12345678, -12345678, -12345678,
              -12345678, -12345678, -12345678);
  int r2 =
      s21_sprintf(str2, "\n%.6hd%.6hd%1.6hd%2.6hd%3.6hd%4.6hd%5.6hd%6.6hd%7.6d",
                  -12345678, -12345678, -12345678, -12345678, -12345678,
                  -12345678, -12345678, -12345678, -12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 123.4,
      123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 1234.5,
      1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 1234.5,
      1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 12345.6,
      12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 12345.6,
      12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              123456.7, 123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
              123456.7, 123456.7, 123456.7);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  123456.7, 123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
                  123456.7, 123456.7, 123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
              1234567.8, 1234567.8, 1234567.8);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
                  1234567.8, 1234567.8, 1234567.8, 1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_f1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 123.4,
      123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 1234.5,
      1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 1234.5,
      1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 12345.6,
      12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 12345.6,
      12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              123456.7, 123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
              123456.7, 123456.7, 123456.7);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
                       123456.7, 123456.7, 123456.7, 123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
              1234567.8, 1234567.8, 1234567.8);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
                       1234567.8, 1234567.8, 1234567.8, 1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -12.3,
      -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -123.4,
      -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -123.4,
      -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -1234.5,
      -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -1234.5,
      -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -12345.6, -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
              -12345.6, -12345.6, -12345.6);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -12345.6, -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
                  -12345.6, -12345.6, -12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -123456.7, -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
              -123456.7, -123456.7, -123456.7);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
                  -123456.7, -123456.7, -123456.7, -123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
              -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
                  -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_fm1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -12.3,
      -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -123.4,
      -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -123.4,
      -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -1234.5,
      -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -1234.5,
      -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -12345.6, -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
              -12345.6, -12345.6, -12345.6);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
                       -12345.6, -12345.6, -12345.6, -12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -123456.7, -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
              -123456.7, -123456.7, -123456.7);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
                       -123456.7, -123456.7, -123456.7, -123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
              -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
      -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
      -1234567.8, -1234567.8, -1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 1.0,
                   1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 1.2,
                   1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 12.3,
                   12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 123.4,
                   123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 123.4,
                  123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 1234.5,
              1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5,
                       1234.5, 1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6,
                   12345.6, 12345.6, 12345.6);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6,
                       12345.6, 12345.6, 12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   123456.7, 123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
                   123456.7, 123456.7, 123456.7);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
                       123456.7, 123456.7, 123456.7, 123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
                   1234567.8, 1234567.8, 1234567.8, 1234567.8);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
                       1234567.8, 1234567.8, 1234567.8, 1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_f1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 1.0,
                   1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 1.2,
                   1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 12.3,
                   12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3, 12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 123.4,
                   123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 123.4,
                  123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4, 123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 1234.5,
              1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5, 1234.5,
                       1234.5, 1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6,
                   12345.6, 12345.6, 12345.6);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       12345.6, 12345.6, 12345.6, 12345.6, 12345.6, 12345.6,
                       12345.6, 12345.6, 12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   123456.7, 123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
                   123456.7, 123456.7, 123456.7);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       123456.7, 123456.7, 123456.7, 123456.7, 123456.7,
                       123456.7, 123456.7, 123456.7, 123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
                   1234567.8, 1234567.8, 1234567.8, 1234567.8);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       1234567.8, 1234567.8, 1234567.8, 1234567.8, 1234567.8,
                       1234567.8, 1234567.8, 1234567.8, 1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm1_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -1.0,
                   -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm12_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -1.2,
                   -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -12.3,
                   -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -12.3,
                  -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm1234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -123.4,
              -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4,
                       -123.4, -123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm12345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5,
                   -1234.5, -1234.5, -1234.5);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5,
                       -1234.5, -1234.5, -1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -12345.6, -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
                   -12345.6, -12345.6, -12345.6);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
                       -12345.6, -12345.6, -12345.6, -12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm1234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
                   -123456.7, -123456.7, -123456.7, -123456.7);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
                       -123456.7, -123456.7, -123456.7, -123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm12345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
                   -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                  -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
                  -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_fm1_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -1.0,
                   -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm12_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -1.2,
                   -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2, -1.2);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -12.3,
                   -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -12.3,
                  -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3, -12.3);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm1234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -123.4,
              -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -123.4, -123.4, -123.4, -123.4, -123.4, -123.4, -123.4,
                       -123.4, -123.4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm12345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5,
                   -1234.5, -1234.5, -1234.5);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -1234.5, -1234.5, -1234.5, -1234.5, -1234.5, -1234.5,
                       -1234.5, -1234.5, -1234.5);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -12345.6, -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
                   -12345.6, -12345.6, -12345.6);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -12345.6, -12345.6, -12345.6, -12345.6, -12345.6,
                       -12345.6, -12345.6, -12345.6, -12345.6);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm1234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
                   -123456.7, -123456.7, -123456.7, -123456.7);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -123456.7, -123456.7, -123456.7, -123456.7, -123456.7,
                       -123456.7, -123456.7, -123456.7, -123456.7);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm12345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
                   -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                  -1234567.8, -1234567.8, -1234567.8, -1234567.8, -1234567.8,
                  -1234567.8, -1234567.8, -1234567.8, -1234567.8);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f01_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f012_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f0123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 0.123,
      0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f01234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 0.1234,
      0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 0.1234,
      0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f012345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 0.12345,
      0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", 0.12345,
      0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f0123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              0.123456, 0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
              0.123456, 0.123456, 0.123456);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  0.123456, 0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
                  0.123456, 0.123456, 0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f01234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
              0.1234567, 0.1234567, 0.1234567);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
                  0.1234567, 0.1234567, 0.1234567, 0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f012345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
              0.12345678, 0.12345678, 0.12345678, 0.12345678);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
                  0.12345678, 0.12345678, 0.12345678, 0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_f01_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f012_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f0123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 0.123,
      0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f01234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 0.1234,
      0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 0.1234,
      0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f012345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 0.12345,
      0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", 0.12345,
      0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f0123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              0.123456, 0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
              0.123456, 0.123456, 0.123456);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
                       0.123456, 0.123456, 0.123456, 0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f01234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
              0.1234567, 0.1234567, 0.1234567);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
                       0.1234567, 0.1234567, 0.1234567, 0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_f012345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
              0.12345678, 0.12345678, 0.12345678, 0.12345678);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
      0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
      0.12345678, 0.12345678, 0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm01_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm012_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -0.12,
      -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm0123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -0.123,
      -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -0.123,
      -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm01234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -0.1234,
      -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f", -0.1234,
      -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm012345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -0.12345, -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
              -0.12345, -0.12345, -0.12345);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -0.12345, -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
                  -0.12345, -0.12345, -0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm0123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -0.123456, -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
              -0.123456, -0.123456, -0.123456);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
                  -0.123456, -0.123456, -0.123456, -0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm01234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
              -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  int r2 =
      s21_sprintf(str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
                  -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
                  -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm012345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
              -0.12345678, -0.12345678, -0.12345678, -0.12345678, -0.12345678,
              -0.12345678, -0.12345678, -0.12345678, -0.12345678);
  int r2 = s21_sprintf(
      str2, "\n%-6f%-6.f%-6.0f%-6.2f%-6.3f%-6.4f%-6.5f%-6.6f%-6.7f",
      -0.12345678, -0.12345678, -0.12345678, -0.12345678, -0.12345678,
      -0.12345678, -0.12345678, -0.12345678, -0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_minus_fm01_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm012_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -0.12,
      -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm0123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -0.123,
      -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -0.123,
      -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm01234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -0.1234,
      -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f", -0.1234,
      -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm012345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -0.12345, -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
              -0.12345, -0.12345, -0.12345);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
                       -0.12345, -0.12345, -0.12345, -0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm0123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -0.123456, -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
              -0.123456, -0.123456, -0.123456);
  int r2 = s21_sprintf(str2,
                       "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
                       -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
                       -0.123456, -0.123456, -0.123456, -0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm01234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
              -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
      -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
      -0.1234567, -0.1234567, -0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_minus_fm012345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
              -0.12345678, -0.12345678, -0.12345678, -0.12345678, -0.12345678,
              -0.12345678, -0.12345678, -0.12345678, -0.12345678);
  int r2 = s21_sprintf(
      str2, "\n%-.6f%-.6f%-1.6f%-2.6f%-3.6f%-4.6f%-5.6f%-6.6f%-7.6f",
      -0.12345678, -0.12345678, -0.12345678, -0.12345678, -0.12345678,
      -0.12345678, -0.12345678, -0.12345678, -0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f01_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 0.1,
                   0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f012_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 0.12,
                   0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f0123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 0.123,
                   0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 0.123,
                  0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f01234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", 0.1234,
              0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234,
                       0.1234, 0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f012345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345,
                   0.12345, 0.12345, 0.12345);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345,
                       0.12345, 0.12345, 0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f0123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   0.123456, 0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
                   0.123456, 0.123456, 0.123456);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
                       0.123456, 0.123456, 0.123456, 0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f01234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
                   0.1234567, 0.1234567, 0.1234567, 0.1234567);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
                       0.1234567, 0.1234567, 0.1234567, 0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f012345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
                   0.12345678, 0.12345678, 0.12345678, 0.12345678);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                  0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
                  0.12345678, 0.12345678, 0.12345678, 0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_f01_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 0.1,
                   0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f012_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 0.12,
                   0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12, 0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f0123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 0.123,
                   0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 0.123,
                  0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123, 0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f01234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", 0.1234,
              0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234, 0.1234,
                       0.1234, 0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f012345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345,
                   0.12345, 0.12345, 0.12345);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       0.12345, 0.12345, 0.12345, 0.12345, 0.12345, 0.12345,
                       0.12345, 0.12345, 0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f0123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   0.123456, 0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
                   0.123456, 0.123456, 0.123456);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       0.123456, 0.123456, 0.123456, 0.123456, 0.123456,
                       0.123456, 0.123456, 0.123456, 0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f01234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
                   0.1234567, 0.1234567, 0.1234567, 0.1234567);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       0.1234567, 0.1234567, 0.1234567, 0.1234567, 0.1234567,
                       0.1234567, 0.1234567, 0.1234567, 0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f012345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
                   0.12345678, 0.12345678, 0.12345678, 0.12345678);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                  0.12345678, 0.12345678, 0.12345678, 0.12345678, 0.12345678,
                  0.12345678, 0.12345678, 0.12345678, 0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm01_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -0.1,
                   -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm012_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -0.12,
                   -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -0.12,
                  -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm0123_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -0.123,
              -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123,
                       -0.123, -0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm01234_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234,
                   -0.1234, -0.1234, -0.1234);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234,
                       -0.1234, -0.1234, -0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm012345_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -0.12345, -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
                   -0.12345, -0.12345, -0.12345);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
                       -0.12345, -0.12345, -0.12345, -0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm0123456_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
                   -0.123456, -0.123456, -0.123456, -0.123456);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
                       -0.123456, -0.123456, -0.123456, -0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm01234567_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                   -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
                   -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  int r2 =
      s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                  -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
                  -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm012345678_statik_width) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f", -0.12345678,
              -0.12345678, -0.12345678, -0.12345678, -0.12345678, -0.12345678,
              -0.12345678, -0.12345678, -0.12345678);
  int r2 = s21_sprintf(str2, "\n%6f%6.f%6.0f%6.2f%6.3f%6.4f%6.5f%6.6f%6.7f",
                       -0.12345678, -0.12345678, -0.12345678, -0.12345678,
                       -0.12345678, -0.12345678, -0.12345678, -0.12345678,
                       -0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

//////////////////////////////////////

START_TEST(s21_sprintf_test_fm01_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -0.1,
                   -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1, -0.1);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm012_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -0.12,
                   -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -0.12,
                  -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12, -0.12);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm0123_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f", -0.123,
              -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -0.123, -0.123, -0.123, -0.123, -0.123, -0.123, -0.123,
                       -0.123, -0.123);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm01234_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234,
                   -0.1234, -0.1234, -0.1234);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -0.1234, -0.1234, -0.1234, -0.1234, -0.1234, -0.1234,
                       -0.1234, -0.1234, -0.1234);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm012345_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -0.12345, -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
                   -0.12345, -0.12345, -0.12345);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -0.12345, -0.12345, -0.12345, -0.12345, -0.12345,
                       -0.12345, -0.12345, -0.12345, -0.12345);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm0123456_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
                   -0.123456, -0.123456, -0.123456, -0.123456);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -0.123456, -0.123456, -0.123456, -0.123456, -0.123456,
                       -0.123456, -0.123456, -0.123456, -0.123456);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm01234567_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                   -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
                   -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  int r2 =
      s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                  -0.1234567, -0.1234567, -0.1234567, -0.1234567, -0.1234567,
                  -0.1234567, -0.1234567, -0.1234567, -0.1234567);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_fm012345678_statik_accuracy) {
  char str1[1000];
  char str2[1000];
  int r1 =
      sprintf(str1, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
              -0.12345678, -0.12345678, -0.12345678, -0.12345678, -0.12345678,
              -0.12345678, -0.12345678, -0.12345678, -0.12345678);
  int r2 = s21_sprintf(str2, "\n%.6f%.6f%1.6f%2.6f%3.6f%4.6f%5.6f%6.6f%7.6f",
                       -0.12345678, -0.12345678, -0.12345678, -0.12345678,
                       -0.12345678, -0.12345678, -0.12345678, -0.12345678,
                       -0.12345678);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

int main() {
  // Создание тестового набора
  Suite *s = suite_create("My Suite");

  // Создание набора тестов
  TCase *tc_core = tcase_create("Core");

  // Добавление тестовых функций к набору тестов

  tcase_add_test(tc_core, s21_sprintf_test_minus_s);
  tcase_add_test(tc_core, s21_sprintf_test_s);
  tcase_add_test(tc_core, s21_sprintf_test_minus_c);
  tcase_add_test(tc_core, s21_sprintf_test_c);

  tcase_add_test(tc_core, s21_sprintf_test_minus_u1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_u12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_um12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_u1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_u1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_u12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_um1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_um12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d2);

  tcase_add_test(tc_core, s21_sprintf_test_minus_hu1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hu12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hum12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_hu1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hu1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hu12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hum1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hum12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_d);
  tcase_add_test(tc_core, s21_sprintf_test_d0);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_d12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_dm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_d1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_d1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_dm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_dm12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_d2);

  tcase_add_test(tc_core, s21_sprintf_test_minus_hd1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hd12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_hdm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_hd1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hd1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hd12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_hdm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_hdm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_minus_f1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_f1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_minus_f1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_f1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f12345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm1_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm12_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm1_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm12_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm1234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm12345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_minus_f01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_f01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f012345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_minus_f01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_f012345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_minus_fm012345678_statik_accuracy);

  tcase_add_test(tc_core, s21_sprintf_test_f01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_f01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_f012345678_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm01_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm012_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123456_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234567_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345678_statik_width);
  tcase_add_test(tc_core, s21_sprintf_test_fm01_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm012_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm0123456_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm01234567_statik_accuracy);
  tcase_add_test(tc_core, s21_sprintf_test_fm012345678_statik_accuracy);
  suite_add_tcase(s, tc_core);
  SRunner *sr = srunner_create(s);
  srunner_run_all(sr, CK_VERBOSE); 
  int num_failed =
      srunner_ntests_failed(sr);  
  srunner_free(sr);           
  if (num_failed > 0) {
    return EXIT_FAILURE; 
  } else {
    return EXIT_SUCCESS;
  }
  return 0;
}