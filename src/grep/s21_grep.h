#ifndef SRC_GREP_S21_GREP_H_
#define SRC_GREP_S21_GREP_H_
#include <errno.h>
#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <string.h>
struct flags {
  int e;
  int i;
  int v;
  int c;
  int l;
  int n;
  int h;
  int s;
  int f;
  int o;
};
void options(int argc, char **argv);
void s21_grep(struct flags *flags, char *pattern, char *filename);
int open_file(char *pattern, char *filename);
#endif  //  SRC_GREP_S21_GREP_H_
