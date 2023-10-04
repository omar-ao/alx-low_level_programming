#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

#define NID 16

/**
 * struct ELF32 - ELF header file
 * @id: ELF identification
 * @type: ELF type
 * @version: ELF version
 * @entry: ElF entry
 */
typedef struct ELF
{
	unsigned char id[NID];
	uint16_t type;
	uint32_t version;
	uint64_t entry;
} ELF;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *);
int append_text_to_file(const char *filename, char *text_content);
void cp(char *, char *);
void print_err(char *, char *, int);
int is_elf(ELF);
void print_magic(ELF);
void print_class(ELF);
void print_data(ELF);
void print_ev(ELF);
void print_os_abi(ELF);
void print_type(ELF);

#endif
