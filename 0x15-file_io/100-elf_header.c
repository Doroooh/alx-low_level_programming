#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error opening file");
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error("Error reading ELF header");
    }

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             ");
    switch (elf_header.e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    printf("  Data:                              ");
    switch (elf_header.e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (elf_header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (elf_header.e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
    printf("  Entry point address:               0x%lx\n", elf_header.e_entry);

    close(fd);
    return 0;
}
