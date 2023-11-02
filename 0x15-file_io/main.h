#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>
#include <stdarg.h>
#include <errno.h>
#include <sys/mman.h>

#define _POSIX_C_SOURCE 200809L

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
void error(int code, const char *format, const char *arg);
void errorFD(int code, const char *format, int FD);

#endif
