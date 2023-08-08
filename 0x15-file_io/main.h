#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <elf.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

void print_usage_and_exit(void);

void error_and_exit(const char *msg, const char *file_name, int xt_cde);

void close_fd_and_exit(int fd);

void copy_file(const char *file_from, const char *file_to);

void display_error_and_exit(const char *msg);

void print_elf_header_info(Elf64_Ehdr *elf_header);

void get_OS(Elf64_Ehdr *elf_hdr);

int _strlen(const char *s);

#endif /* MAIN_H */
