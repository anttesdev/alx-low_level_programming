#include "main.h"

void verifyElfFile(unsigned char *magicNumbers);
void displayElfMagic(unsigned char *magicNumbers);
void showElfClass(unsigned char *magicNumbers);
void revealElfDataFormat(unsigned char *magicNumbers);
void exposeElfVersion(unsigned char *magicNumbers);
void unveilElfOsAbi(unsigned char *magicNumbers);
void unveilElfAbiVersion(unsigned char *magicNumbers);
void exposeElfFileType(unsigned int fileType, unsigned char *magicNumbers);
void revealElfEntryPoint(unsigned long int entryPoint, unsigned char *magicNumbers);
void terminateElfFile(int fileDescriptor);


/**
 * verifyElfFile - Ensures that a file is an ELF file.
 * @magicNumbers: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Exits with code 98 if the file is not an ELF file.
 */
void verifyElfFile(unsigned char *magicNumbers)
{
    if (!(magicNumbers[0] == 0x7F && magicNumbers[1] == 'E' &&
          magicNumbers[2] == 'L' && magicNumbers[3] == 'F'))
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        exit(98);
    }
}

/**
 * displayElfMagic - Prints the magic numbers of an ELF header.
 * @magicNumbers: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are printed in hexadecimal format.
 */
void displayElfMagic(unsigned char *magicNumbers)
{
    printf("  Magic:   %02x %02x %02x %02x\n",
           magicNumbers[0], magicNumbers[1], magicNumbers[2], magicNumbers[3]);
}

/**
 * showElfClass - Prints the class of an ELF header.
 * @magicNumbers: A pointer to an array containing the ELF class.
 */
void showElfClass(unsigned char *magicNumbers)
{
    printf("  Class:   %s\n", (magicNumbers[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
}

/**
 * revealElfDataFormat - Prints the data format of an ELF header.
 * @magicNumbers: A pointer to an array containing the ELF data format.
 */
void revealElfDataFormat(unsigned char *magicNumbers)
{
    printf("  Data:    %s\n", (magicNumbers[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
                               (magicNumbers[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" :
                               "none");
}

/**
 * exposeElfVersion - Prints the version of an ELF header.
 * @magicNumbers: A pointer to an array containing the ELF version.
 */
void exposeElfVersion(unsigned char *magicNumbers)
{
    printf("  Version: %d\n", magicNumbers[EI_VERSION]);
}

/**
 * unveilElfOsAbi - Prints the OS/ABI of an ELF header.
 * @magicNumbers: A pointer to an array containing the ELF OS/ABI.
 */
void unveilElfOsAbi(unsigned char *magicNumbers)
{
    printf("  OS/ABI:  ");
    switch (magicNumbers[EI_OSABI])
    {
    case ELFOSABI_NONE:
        printf("UNIX - System V\n");
        break;
    case ELFOSABI_HPUX:
        printf("UNIX - HP-UX\n");
        break;
    case ELFOSABI_NETBSD:
        printf("UNIX - NetBSD\n");
        break;
    case ELFOSABI_LINUX:
        printf("UNIX - Linux\n");
        break;
    case ELFOSABI_SOLARIS:
        printf("UNIX - Solaris\n");
        break;
    case ELFOSABI_IRIX:
        printf("UNIX - IRIX\n");
        break;
    case ELFOSABI_FREEBSD:
        printf("UNIX - FreeBSD\n");
        break;
    case ELFOSABI_TRU64:
        printf("UNIX - TRU64\n");
        break;
    case ELFOSABI_ARM:
        printf("ARM\n");
        break;
    case ELFOSABI_STANDALONE:
        printf("Standalone App\n");
        break;
    default:
        printf("<unknown: %x>\n", magicNumbers[EI_OSABI]);
    }
}

/**
 * unveilElfAbiVersion - Prints the ABI version of an ELF header.
 * @magicNumbers: A pointer to an array containing the ELF ABI version.
 */
void unveilElfAbiVersion(unsigned char *magicNumbers)
{
    printf("  ABI Version: %d\n", magicNumbers[EI_ABIVERSION]);
}

/**
 * exposeElfFileType - Prints the type of an ELF header.
 * @fileType: The ELF type.
 * @magicNumbers: A pointer to an array containing the ELF class.
 */
void exposeElfFileType(unsigned int fileType, unsigned char *magicNumbers)
{
    if (magicNumbers[EI_DATA] == ELFDATA2MSB)
        fileType >>= 8;

    printf("  Type:    ");
    switch (fileType)
    {
    case ET_NONE:
        printf("NONE (None)\n");
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
        printf("<unknown: %x>\n", fileType);
    }
}

/**
 * revealElfEntryPoint - Prints the entry point of an ELF header.
 * @entryPoint: The address of the ELF entry point.
 * @magicNumbers: A pointer to an array containing the ELF class.
 */
void revealElfEntryPoint(unsigned long int entryPoint, unsigned char *magicNumbers)
{
    printf("  Entry point address: ");
    if (magicNumbers[EI_DATA] == ELFDATA2MSB)
    {
        entryPoint = ((entryPoint << 8) & 0xFF00FF00) |
                      ((entryPoint >> 8) & 0xFF00FF);
        entryPoint = (entryPoint << 16) | (entryPoint >> 16);
    }

    if (magicNumbers[EI_CLASS] == ELFCLASS32)
        printf("%#x\n", (unsigned int)entryPoint);
    else
        printf("%#lx\n", entryPoint);
}

/**
 * terminateElfFile - Closes an ELF file.
 * @fileDescriptor: The file descriptor of the ELF file.
 *
 * Description: Exits with code 98 if the file cannot be closed.
 */
void terminateElfFile(int fileDescriptor)
{
    if (close(fileDescriptor) == -1)
    {
        dprintf(STDERR_FILENO,
                "Error: Can't close fd %d\n", fileDescriptor);

        exit(98);
    }
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argumentCount: The number of arguments supplied to the program.
 * @arguments: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: Exits with code 98 if the file is not an ELF File or
 *              the function fails.
 */
int main(int __attribute__((__unused__)) argumentCount, char *arguments[])
{
    Elf64_Ehdr *header;
    int fileDescriptor, bytesRead;

    fileDescriptor = open(arguments[1], O_RDONLY);
    if (fileDescriptor == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arguments[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        terminateElfFile(fileDescriptor);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arguments[1]);
        exit(98);
    }

    bytesRead = read(fileDescriptor, header, sizeof(Elf64_Ehdr));
    if (bytesRead == -1)
    {
        free(header);
        terminateElfFile(fileDescriptor);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", arguments[1]);
        exit(98);
    }

    verifyElfFile(header->e_ident);

    printf("ELF Header:\n");
    displayElfMagic(header->e_ident);
    showElfClass(header->e_ident);
    revealElfDataFormat(header->e_ident);
    exposeElfVersion(header->e_ident);
    unveilElfOsAbi(header->e_ident);
    unveilElfAbiVersion(header->e_ident);
    exposeElfFileType(header->e_type, header->e_ident);
    revealElfEntryPoint(header->e_entry, header->e_ident);

    free(header);
    terminateElfFile(fileDescriptor);
    return 0;
}
