#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define EI_NIDENT 16

typedef struct {
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
} Elf64_Ehdr;

void print_elf_header(const Elf64_Ehdr* ehdr) {
	int i = 0;

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");
    printf("Class:   %d-bit\n", ehdr->e_ident[4] == 1 ? 32 : 64);
    printf("Data:    %s\n", ehdr->e_ident[5] == 1 ? "little endian" : "big endian");
    printf("Version: %d\n", ehdr->e_ident[6]);
    printf("OS/ABI:  %d\n", ehdr->e_ident[7]);
    printf("ABI Version: %d\n", ehdr->e_ident[8]);
    printf("Type:    %d\n", ehdr->e_type);
    printf("Entry point address: 0x%lx\n", ehdr->e_entry);
}

int main(int argc, char* argv[]) {
	int fd;

    Elf64_Ehdr ehdr;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error opening file %s: %s\n", argv[1], strerror(errno));
        return 98;
    }
    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        fprintf(stderr, "Error reading ELF header from file %s: %s\n", argv[1], strerror(errno));
        close(fd);
        return 98;
    }
    if (memcmp(ehdr.e_ident, "\x7f\x45\x4c\x46", 4) != 0) {
        fprintf(stderr, "File %s is not an ELF file\n", argv[1]);
        close(fd);
        return 98;
    }
    print_elf_header(&ehdr);
    close(fd);
    return 0;
}
