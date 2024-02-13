#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - this will check if a given file is ELF file.
 * e_ident: The pointer to the  array contais ELF magic numbers.
 *
 * Description: If a file is not an ELF file, use exit code 98
 */

void check_elf(unsigned char *e_ident)
{
	int index_k;

	for (index_k = 0; index_k < 4; index_k++)
	{
		if (e_ident[index_k] != 127 &&
		    e_ident[index_k] != 'E' &&
		    e_ident[index_k] != 'L' &&
		    e_ident[index_k] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - this will print the magic numbers of  ELF header.
 * e_ident: The  pointer to the array contain ELF magic numbers.
 *
 * Description: The magic numbers are separated by spaces.
 */
void print_magic(unsigned char *e_ident)
{
	int index_k;

	printf(" Magic: ");

	for (index_k = 0; index_k < EI_INDENT; index_k++)
	{
		printf("%02x", e_ident[index_k]);

		if (index_k == EI_INDENT - 1)
			printf("\n");
		else
			printf(" ");
	}


	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}
