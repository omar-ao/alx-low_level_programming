#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument value
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t nread;
	ELF elf_header;

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);

	nread = read(fd, &elf_header, sizeof(elf_header));
	if (nread == -1)
	{
		perror("Error");
		return (1);
	}

	if (!is_elf(elf_header))
	{
		dprintf(STDERR_FILENO, "Error: %s is not ELF file\n", argv[1]);
		exit(98);
	}

	printf("ELF Header:\n");
	print_magic(elf_header);
	print_class(elf_header);
	print_data(elf_header);
	print_ev(elf_header);
	print_os_abi(elf_header);
	print_type(elf_header);

	printf("  Entry point address:%15s", " ");
	printf("0x%lx\n", elf_header.entry);
	return (0);
}

/**
 * is_elf - Checks if the file is ELF
 *
 * @elf_hdr: ELF header
 * Return: 1 if true, 0 if not
 */
int is_elf(ELF elf_hdr)
{
	if (elf_hdr.id[0] == 0x7f && elf_hdr.id[1] == 0x45 && elf_hdr.id[2] == 0x4c
			&& elf_hdr.id[3] == 0x46)
		return (1);
	return (0);
}

/**
 * print_magic - Prints magic numbers of elf header
 *
 * @elf_hdr: Elf header
 */
void print_magic(ELF elf_hdr)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < NID; i++)
		printf(" %02x", elf_hdr.id[i]);
	putchar(10);
}

/**
 * print_class - Prints class of ELF header
 *
 * @elf_hdr: ELF header
 */
void print_class(ELF elf_hdr)
{
	printf("  Class:");
	if (elf_hdr.id[EI_CLASS] == 0)
		printf("%34s\n", "Invalid class");
	else if (elf_hdr.id[EI_CLASS] == 1)
		printf("%34s\n", "ELF32");
	else
		printf("%34s\n", "ELF64");
}

/**
 * print_data - Prints data of the ELF header
 *
 * @elf_hdr: ELF header
 */
void print_data(ELF elf_hdr)
{
	printf("  Data:%30s", " ");
	if (elf_hdr.id[EI_DATA] == ELFDATANONE)
		printf("%s\n", "Invalid data encoding");
	else if (elf_hdr.id[EI_DATA] == ELFDATA2LSB)
		printf("%s\n", "2's complement, little endian");
	else
		printf("%s\n", "2's complement, big endian");
}

/**
 * print_ev - Prints version of the ELF header
 *
 * @elf_hdr: ELF header
 */
void print_ev(ELF elf_hdr)
{
	printf("  Version:%27s", " ");
	if (elf_hdr.id[EI_VERSION] == EV_NONE)
		printf("%s\n", "Invalid version");
	else if (elf_hdr.id[EI_VERSION] == EV_CURRENT)
		printf("%s\n", "1 (current)");
}

/**
 * print_os_abi - Prints OS/ABI of the elf header
 *
 * @elf_hdr: ELF header
 */
void print_os_abi(ELF elf_hdr)
{
	printf("  OS/ABI:%28s", " ");
	switch (elf_hdr.id[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Solaries\n");
			break;
		default:
			printf("<unknown: 53>\n");
			break;
	}
	printf("  ABI Version:%23s", " ");
	printf("%d\n", elf_hdr.id[EI_ABIVERSION]);
}

/**
 * print_type - Prints the the type of the ELF header
 *
 * @elf_hdr: ELF header
 */
void print_type(ELF elf_hdr)
{
	printf("  Type:%30s", " ");
	switch (elf_hdr.type)
	{
		case 0:
			printf("Unknown\n");
			break;
		case 1:
			printf("REL (Relecatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			break;
	}
}
