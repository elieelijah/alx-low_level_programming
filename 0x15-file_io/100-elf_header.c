#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int fd, i;
    Elf64_Ehdr header;
    char *magic = (char *)header.e_ident;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
        return (98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        dprintf(STDERR_FILENO, "Error: Cannot read header from file %s\n", argv[1]);
        close(fd);
        return (98);
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%c", magic[i], i == EI_NIDENT - 1 ? '\n' : ' ');
    printf("  Class:                             %s\n", magic[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class");
    printf("  Data:                              %s\n", magic[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Invalid data encoding");
    printf("  Version:                           %d%s\n", magic[EI_VERSION], magic[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("  OS/ABI:                            %s\n", magic[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Invalid OS/ABI");
    printf("  ABI Version:                       %d\n", magic[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" :
                                                      header.e_type == ET_DYN ? "DYN (Shared object file)" :
                                                      header.e_type == ET_REL ? "REL (Relocatable file)" :
                                                      "Invalid type");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header.e_entry);

    close(fd);
    return (0);
}

