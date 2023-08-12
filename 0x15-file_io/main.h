#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void cp_from_to(char *from_f, char *to_f);
void cp_close(int *fd1, int *fd2);
Elf64_Ehdr open_and_read(int *fd, char *filename);
void print_magic(Elf64_Ehdr ehdr);
void print_class(Elf64_Ehdr ehdr);
void print_date(Elf64_Ehdr ehdr);
void print_version(Elf64_Ehdr ehdr);
void print_ABI(Elf64_Ehdr ehdr);
void print_os(Elf64_Ehdr ehdr);
void print_type(Elf64_Ehdr ehdr);
void print_entry_point(Elf64_Ehdr ehdr);
void _close(int *fd);

#endif
