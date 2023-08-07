#include "main.h"

/**
 * display_error_and_exit - Displays an error message to stderr
 *							and exits with status code 98.
 *
 * @msg: The error message to display.
 */
void display_error_and_exit(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * print_elf_header_info - Prints the information contained
 *						   in the ELF header as specified.
 *
 * @elf_header: A pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *elf_header)
{
	int i;

	printf("Magic:	 ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:	%s\n", (elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");
	printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", (elf_header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
														 (elf_header->e_type == ET_DYN) ? "DYN (Shared object file)" :
														 (elf_header->e_type == ET_REL) ? "REL (Relocatable file)" : "Other");

	printf("Entry point address: %lx\n", elf_header->e_entry);
}

/**
 * main - Entry point for program to read and display ELF
 *		  header information from the specified file.
 *
 * @argc: Number of arguments passed to program.
 * @argv: Array of arguments passed to program.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;
	int fd;

	if (argc != 2)
	{
		display_error_and_exit("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error_and_exit("Failed to open the file");
	}

	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		close(fd);
		display_error_and_exit("Failed to read ELF header");
	}

	/* Check if the file is an ELF file */
	if (!(elf_header.e_ident[EI_MAG0] == ELFMAG0 &&
		  elf_header.e_ident[EI_MAG1] == ELFMAG1 &&
		  elf_header.e_ident[EI_MAG2] == ELFMAG2 &&
		  elf_header.e_ident[EI_MAG3] == ELFMAG3)) {
		close(fd);
		display_error_and_exit("Not an ELF file");
	}

	print_elf_header_info(&elf_header);

	close(fd);
	return (0);
}
