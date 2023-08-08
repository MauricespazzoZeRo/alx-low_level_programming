#include "main.h"

/**
 * _strlen - counts chard in a string.
 *
 * @s: unsigned char used
 *
 * Return: Nothing
 */

int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * display_error_and_exit - Displays an error message to stderr
 *							and exits with status code 98.
 *
 * @msg: The error message to display.
 */
void display_error_and_exit(const char *msg)
{
	write(2, "Error: ", 7);
	write(2, msg, _strlen(msg));
	write(2, "\n", 1);
	exit(98);
}

/**
 * get_OS - Prints the OS/ABI in elf header, as specified.
 *
 * @elf_hdr: A pointer to the ELF header structure.
 */
void get_OS(Elf64_Ehdr *elf_hdr)
{
	if (elf_hdr->e_ident[EI_OSABI] == ELFOSABI_SYSV)
	{
	printf(" OS/ABI:          UNIX - System V\n");
	}
	else if (elf_hdr->e_ident[EI_OSABI] == ELFOSABI_LINUX)
	{
		printf("OS/ABI:       UNIX - Linux\n");
	}
	else if (elf_hdr->e_ident[EI_OSABI] == ELFOSABI_NETBSD)
	{
		printf(" OS/ABI:      UNIX - NetBSD\n");
	}
	else if (elf_hdr->e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
	{
		printf(" OS/ABI:      UNIX - Solaris\n");
	}
	else
	{
		printf(" OS/ABI:      Other\n");
	}
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

	printf("ELF Header:\n");
	printf(" Magic:	 ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf(" %02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	if (elf_header->e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf(" Class:		  ELF32\n");
	}
	else if (elf_header->e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf(" Class:		  ELF64\n");
	}
	if (elf_header->e_ident[EI_DATA] == ELFDATA2LSB)
	{
		printf(" Data:		  2's complement, litle-endian\n");
	}
	else
	{
		printf(" Data:		  2's complement, big-endian\n");
	}

	printf(" Version:         %d (current)\n", elf_header->e_ident[EI_VERSION]);
	get_OS(elf_header);
	printf(" ABI Version:	  %d\n", elf_header->e_ident[EI_ABIVERSION]);

	if (elf_header->e_type == ET_EXEC)
	{
		printf(" Type:		  EXEC (Executable file)\n");
	}

	printf(" Entry point address:   0x%lx\n", elf_header->e_entry);
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
