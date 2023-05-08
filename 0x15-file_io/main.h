#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdint.h>
#include <string.h>

#define EI_NIDENT 16

/**
  * struct Elf64 - ...
  * @e_ident: ...
  * @e_type: ...
  * @e_machine: ...
  *	@e_version: ..
  * @e_entry: ...
  * @e_phoff: ...
  * @e_shoff: ...
  * @e_flags: ...
  *	@e_ehsize: ...
  *	@e_phentsize: ...
  *	@e_phnum: ...
  * @e_shentsize: ...
  * @e_shnum: ...
  * @e_shstrndx: ...
  *
  * Description: ...
  */

struct Elf64
{
	uint8_t e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
	uint64_t e_phoff;
	uint64_t e_shoff;
	uint32_t e_flags;
	uint16_t e_ehsize;
	uint16_t e_phentsize;
	uint16_t e_phnum;
	uint16_t e_shentsize;
	uint16_t e_shnum;
	uint16_t e_shstrndx;
};

typedef struct  Elf64 Elf64_Ehdr;


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */

