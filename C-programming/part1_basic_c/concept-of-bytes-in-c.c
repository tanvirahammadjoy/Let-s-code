// Key Aspects of Bytes in C:

// 1. Data Types and Sizes char: Exactly 1 byte(used to represent ASCII characters or raw bytes)
//  Other types are multiples of bytes :
//    short: Typically 2 bytes
//    int: Typically 4 bytes
//    long: Typically 4 or 8 bytes
//    float: Typically 4 bytes
//    double: Typically 8 bytes

// Data Types and Their Sizes
//   char: 1 byte
//   int: 4 bytes
//   float: 4 bytes
//   double: 8 bytes

// 2. Memory Representation
//     All variables occupy whole numbers of bytes in memory
//     You can examine individual bytes using pointer arithmetic:

#include <stdio.h>

int main()
{
    int x = 0x12345678;
    unsigned char *bytePtr = (unsigned char *)&x;
    // bytePtr[0] would give the first byte (depends on endianness)
    // bytePtr[1] would give the second byte
    // bytePtr[2] would give the third byte
    // bytePtr[3] would give the fourth byte
    printf("Bytes of x: %02x %02x %02x %02x\n", bytePtr[0], bytePtr[1], bytePtr[2], bytePtr[3]);
    // Output: Bytes of x: 78 56 34 12 (for little-endian systems)
    // Output: Bytes of x: 12 34 56 78 (for big-endian systems)
    // Note: The output may vary based on the endianness of the system.
    // Endianness refers to the order in which bytes are arranged within a multi-byte data type.
    // Little-endian: Least significant byte is stored at the lowest address
    // Big-endian: Most significant byte is stored at the lowest address
    // The output of the program will show the individual bytes of the integer variable x.
    // The output will depend on the endianness of the system.
    // The program uses pointer arithmetic to access individual bytes of the integer variable x.
    // The program prints the individual bytes of the integer variable x in hexadecimal format.
    // The program uses the %02x format specifier to print each byte as a two-digit hexadecimal number.
    // The program uses the unsigned char type to represent each byte as an unsigned integer.
    // The program uses the & operator to get the address of the integer variable x.
    // The program uses the (unsigned char *) type cast to treat the address of x as a pointer to unsigned char.
    // The program uses the printf function to print the individual bytes of the integer variable x.
    // The program uses the %02x format specifier to print each byte as a two-digit hexadecimal number.
    // The program uses the bytePtr pointer to access individual bytes of the integer variable x.

    char c = 'A'; // 1 byte
    printf("Size of char: %zu bytes\n", sizeof(c));
    // Output: Size of char: 1 bytes

    int arr[10]; // Typically 40 bytes (10 * 4 bytes per int)
    printf("Array size: %zu bytes\n", sizeof(arr));
    // Output: Array size: 40 bytes

    // Examining bytes of a float
    float f = 3.14f;
    unsigned char *bytes = (unsigned char *)&f;
    for (int i = 0; i < sizeof(float); i++)
    {
        printf("Byte %d: %02x\n", i, bytes[i]);
    }
    /* Output:
    Byte 0: c3
    Byte 1: f5
    Byte 2: 48
    Byte 3: 40
    */
    // Output: Byte 0: 00 00 20 40 (for little-endian systems)
    // Output: Byte 0: 40 20 00 00 (for big-endian systems)
    // Note: The output may vary based on the endianness of the system.
    // The output of the program will show the individual bytes of the float variable f.

    // double example
    double d = 3.14159;
    unsigned char *doubleBytes = (unsigned char *)&d; // Cast to unsigned char pointer
    for (int i = 0; i < sizeof(double); i++)
    {
        printf("Double Byte %d: %02x\n", i, doubleBytes[i]); // Print each byte of the double
    }
    /* Output:
    Double Byte 0: 6e
    Double Byte 1: 86
    Double Byte 2: 1b
    Double Byte 3: f0
    Double Byte 4: f9
    Double Byte 5: 21
    Double Byte 6: 09
    Double Byte 7: 40
    */
    // Output: Double Byte 0: 00 00 00 00 00 00 20 40 (for little-endian systems)
    // Output: Double Byte 0: 40 20 00 00 00 00 00 00 (for big-endian systems)
    // Note: The output may vary based on the endianness of the system.
    // The output of the program will show the individual bytes of the double variable d.
    // The output will depend on the endianness of the system.
    // The program uses pointer arithmetic to access individual bytes of the double variable d.
    // The program prints the individual bytes of the double variable d in hexadecimal format.
    // The program uses the %02x format specifier to print each byte as a two-digit hexadecimal number.
    // The program uses the program uses the (unsigned char *) type cast to treat the address of d as a pointer to unsigned char.
    // The program uses the printf function to print the individual bytes of the double variable d.

    return 0;
}
