#include "main.h"

/**
 * print_elf_header -print elf function
 *
 * @ehdr: ...
 * Return: void
 */

void print_elf_header(const Elf64_Ehdr *ehdr)
{
	int i = 0;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
	printf("Class:   %d-bit\n", ehdr->e_ident[4] == 1 ? 32 : 64);
	printf("Data:    %s\n",
	ehdr->e_ident[5] == 1 ? "little endian" : "big endian");
	printf("Version: %d\n", ehdr->e_ident[6]);
	printf("OS/ABI:  %d\n", ehdr->e_ident[7]);
	printf("ABI Version: %d\n", ehdr->e_ident[8]);
	printf("Type:    %d\n", ehdr->e_type);
	printf("Entry point address: 0x%lx\n", ehdr->e_entry);
}

/**
 * main - main fuction
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fd;

	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error opening file %s: %s\n", argv[1], strerror(errno));
		return (98);
	}
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		fprintf(stderr, "Error reading ELF header from file %s: %s\n",
		argv[1], strerror(errno));
		close(fd);
		return (98);
	}
	if (memcmp(ehdr.e_ident, "\x7f\x45\x4c\x46", 4) != 0)
	{
		fprintf(stderr, "File %s is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}
	print_elf_header(&ehdr);
	close(fd);
	return (0);
}

