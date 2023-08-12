#include "main.h"

/**
 * main - entry point to the program that print ELF header file
 *@argc: command line arguments
 *@argv: command line arguments
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

int main(int argc, char **argv)
{
	 Elf64_Ehdr ehdr;
	 int fd = 0;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	ehdr = open_and_read(&fd, argv[1]);
	printf("ELF Header:\n");
	print_magic(ehdr);
	print_class(ehdr);
	print_date(ehdr);
	print_version(ehdr);
	print_os(ehdr);
	print_ABI(ehdr);
	print_type(ehdr);
	print_entry_point(ehdr);
	_close(&fd);
	return (0);
}

/**
 * open_and_read - open and read ELF header file
 *@fd: file discriptor
 *@filename: file name to open
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

Elf64_Ehdr open_and_read(int *fd, char *filename)
{
	ssize_t r_size;
	Elf64_Ehdr ehdr;

	*fd = open(filename, O_RDONLY);
	if (*fd == -1)
	{
		fprintf(stderr, "Error, can't open %s for reading\n", filename);
		exit(98);
	}

	r_size = read(*fd, &ehdr, sizeof(ehdr));
	if (r_size != sizeof(ehdr))
	{
		fprintf(stderr, "Error, can't read from %s\n", filename);
		close(*fd);
		exit(98);
	}
	return (ehdr);
}


/**
 * print_magic - print magic
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_magic(Elf64_Ehdr ehdr)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ",  ehdr.e_ident[i]);

	printf("\n");
}


/**
 * print_class - print class
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_class(Elf64_Ehdr ehdr)
{


	printf("Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("Invalid class\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("\n");
			break;
	}
}


/**
 * print_date - print magic
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_date(Elf64_Ehdr ehdr)
{


	printf("Data:                              ");
	switch (ehdr.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("\n");
			break;
	}
}


/**
 * print_version- print file's version
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_version(Elf64_Ehdr ehdr)
{
	printf("Version:                           %d (current)\n",
			ehdr.e_ident[EI_VERSION]);

}


/**
 * print_os - print os
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_os(Elf64_Ehdr ehdr)
{
	printf("OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Sun Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("SGI Irix\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD\n");
			break;
			default:
			printf("\n");
			break;
	}
}


/**
 * print_ABI - print ABI
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_ABI(Elf64_Ehdr ehdr)
{
	printf("ABI Version:                       %d\n",
			ehdr.e_ident[EI_ABIVERSION]);
}


/**
 * print_type - print type
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_type(Elf64_Ehdr ehdr)
{
	printf("Type:                              ");
	switch (ehdr.e_type)
	{
		case ET_NONE:
			printf("Unknown type\n");
			break;
		case ET_REL:
			printf("relocatable file\n");
			break;
		case ET_EXEC:
			printf("EXEC ( executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("\n");
			break;
	}
}


/**
 * print_entry_point - print entry_point
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void print_entry_point(Elf64_Ehdr ehdr)
{
	printf("Entry point address:               0x%lx\n", ehdr.e_entry & 0xfffff);

}


/**
 * _close - close fp
 *@ehdr: elf file
 *
 * Return: If the file is not an ELF file, or on error
 *	, exit with status code 98 and display a comprehensiv
 *	e error message to stderr
 */

void _close(int *fd)
{
	int n_close;

	n_close = close(*fd);

	if (n_close == -1)
	{
		fprintf(stderr, "Error, closing the file\n");
		exit(98);
	}
}
