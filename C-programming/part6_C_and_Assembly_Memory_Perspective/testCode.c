// Compiler: GCC
// Compiler flags: -Wall -Wextra -pedantic -std=c17
// Operating system: Linux
// Architecture: x86_64
// This code is a simple C program that demonstrates the use of global, local, and static variables,
// and how they are stored in different sections of memory (.data, .bss, .stack).
// It also includes a function to print a greeting message.
// The program prints the addresses and values of these variables to illustrate their memory locations.
// The program uses the C17 standard and is compiled with GCC on a Linux x86_64 architecture.
// The code is designed to be simple and educational, focusing on memory allocation and variable storage.
#include <stdio.h>
#include <stdlib.h>

int globalVar = 100; // Goes to .data (fixed address)
int globalVar2; // Uninitialized global variable, also goes to .bss (fixed address)
int globalVar3 = 200; // Goes to .data (fixed address)
void greet()
{
    printf("Hello\n"); // This function prints a greeting message
    printf("Global variable: %d\n", globalVar);
    printf("Global variable 2: %d\n", globalVar2);
    printf("Global variable 3: %d\n", globalVar3);
    printf("This function is called from the main function.\n");
    printf("This function is used to demonstrate the use of functions in C.\n");
    printf("It is a simple function that prints a greeting message.\n");
    printf("The function does not take any parameters and does not return any value.\n");
    printf("It is a simple example of how to define and use functions in C.\n");
    printf("Functions are an important part of C programming and are used to organize code into reusable blocks.\n");
    printf("This function is a good example of how to use functions in C.\n");
    printf("Functions can be used to perform specific tasks, such as printing messages, performing calculations, or manipulating data.\n");
    printf("This function is a simple example of how to use functions in C.\n");
    printf("Functions are an important part of C programming and are used to organize code into reusable blocks.\n");
}

int main()
{
    int localVar = 10; // Goes to .stack (dynamic address)
    int localVar4; // Uninitialized local variable, also goes to .stack (dynamic address)
    int localVar5 = 20; // Goes to .stack (dynamic address)
    static int staticVar = 30; // Goes to .data (fixed address)
    static int staticVar2; // Uninitialized static variable, also goes to .bss (fixed address)
    static int staticVar3 = 40; // Goes to .data (fixed address)

    printf("Global variable: %d\n", globalVar);
    printf("Global variable 2: %d\n", globalVar2);
    printf("Global variable 3: %d\n", globalVar3);
    printf("Local variable: %d\n", localVar);
    printf("Local variable 4: %d\n", localVar4);
    printf("Local variable 5: %d\n", localVar5);
    printf("Static variable: %d\n", staticVar);
    printf("Static variable 2: %d\n", staticVar2);
    printf("Static variable 3: %d\n", staticVar3);

    greet();

    return 0;
}

// how to compile this code:
// gcc -Wall(for warnings) -Wextra(for extra warnings) -pedantic(for pedantic warnings) -std=c17(C17 standard) testCode.c -o testCode
// This command compiles the C code with warnings enabled and specifies the C17 standard.
// To run the compiled program, use the command:
// ./testCode
// This will execute the program and display the output in the terminal.

// how can see the memory addresses of the variables:
// To see the memory addresses of the variables, you can modify the printf statements to include the address operator (&) before the variable names.
// For example:
// printf("Address of globalVar: %p\n", (void*)&globalVar);
// printf("Address of localVar: %p\n", (void*)&localVar);
// This will print the memory addresses of the variables in hexadecimal format.

// how can i see the memory layout of the program:
// To see the memory layout of the program, you can use a tool like `objdump` or `gdb`.
// For example, after compiling the program, you can run:
// objdump -h testCode
// This will display the sections of the binary, including .text, .data, .bss, and .stack.
// You can also use `gdb` to inspect the memory layout while debugging:
// gdb ./testCode
// Then use commands like `info variables` to see variable addresses and `layout asm` to view assembly code.

// how to see the memory layout of the running process proc/self/maps in Linux:
// To see the memory mappings of a running process in Linux, you can use the `cat` command to read the `/proc/self/maps` file.
// Open a terminal and run the following command:
// cat /proc/self/maps
// This will display the memory mappings of the current process, including the addresses, permissions, and file mappings.
// You can also use `less` or `more` to view it page by page:
// less /proc/self/maps
// more /proc/self/maps
// The `/proc/self/maps` file contains the memory layout of the current process.
// It shows the memory regions allocated to the process, including the stack, heap, and loaded libraries.
// Each line in the file represents a memory region with its start and end addresses, permissions, offset, device, inode, and the associated file (if any).
// This information is useful for understanding how memory is allocated and used by the process.
// This file provides detailed information about the memory layout of the process, including stack, heap, and loaded libraries.

// how to do gdb(gnu debugger) debugging:
// To debug the program using `gdb`, follow these steps:
// 1. Compile the program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Start `gdb` with the compiled program:
//    gdb ./testCode
// 3. Set breakpoints to pause execution at specific lines or functions:
//    (gdb) break main
// 4. Run the program within `gdb`:
//    (gdb) run
// 5. Use commands like `next`, `step`, and `continue` to control execution.
// 6. Inspect variables using the `print` command:
//    (gdb) print globalVar
// 7. To see memory addresses, use the `info address` command:
//    (gdb) info address globalVar
// 8. When done, exit `gdb` with the command:
//    (gdb) quit
// 
// This will allow you to step through the code, inspect variables, and see how memory is allocated and used during execution.
// You can also use `gdb` commands like `info locals` to see local variables and their addresses, or `info functions` to list all functions in the program.

// how to see the memory layout of the program using gdb(gnu debugger):
// To see the memory layout of the program using `gdb`, you can use the following commands:
// 1. Start `gdb` with your compiled program:
//    gdb ./testCode
// 2. Run the program:
//    (gdb) run
// 3. Use the `info proc mappings` command to see the memory layout:
//    (gdb) info proc mappings
// This will display the memory regions allocated to the process, including their start and end addresses, permissions, and associated files.
// You can also use `layout asm` to view the assembly code and see how functions are laid out in memory.

// how to see the memory layout of the program using objdump(GNU binutils):
// To see the memory layout of the program using `objdump`, you can use the following command:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` to display the sections of the binary:
//    objdump -h testCode
// This will show you the sections of the binary, including .text, .data, .bss, and their sizes and addresses.
// You can also use `objdump -d testCode` to disassemble the code and see how functions are laid out in memory.

// how to see the memory layout of the program using nm(GNU binutils):
// To see the memory layout of the program using `nm`, you can use the following command:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `nm` to list the symbols in the binary:
//    nm testCode
// This will display the symbols defined in the binary, including global and static variables, functions, and their addresses.
// You can also use `nm -C testCode` to demangle C++ names if you're working with C++ code.

// how to see the memory layout of the program using readelf(GNU binutils):
// To see the memory layout of the program using `readelf`, you can use the following command:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `readelf` to display the sections of the binary:
//    readelf -S testCode
// This will show you the section headers, including .text, .data, .bss, and their sizes and addresses.
// You can also use `readelf -a testCode` to display all available information about the binary, including symbols and relocations.

// how to see the memory layout of the program using strace(System call tracer):
// To see the memory layout of the program using `strace`, you can use the following command:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `strace` to trace system calls made by the program:
//    strace ./testCode
// This will show you the system calls made by the program, including memory allocation calls like `mmap` and `brk`, which can give you insight into how memory is allocated and used during execution.
// Note that `strace` does not directly show memory layout but provides information about memory-related system calls.

// how to see the memory layout of the program using ltrace(Library call tracer):
// To see the memory layout of the program using `ltrace`, you can use the following command:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `ltrace` to trace library calls made by the program:
//    ltrace ./testCode
// This will show you the library calls made by the program, including memory allocation functions like `malloc`, `free`, and others.
// Note that `ltrace` does not directly show memory layout but provides information about library calls related to memory management.

// how to see the memory layout of the program using valgrind(Memory debugger):
// To see the memory layout of the program using `valgrind`, you can use the following command:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `valgrind` to run your program and check memory usage:
//    valgrind --tool=memcheck --leak-check=full ./testCode
// This will run your program under `valgrind`, which will report memory allocations, deallocations, and any memory leaks.
// It provides detailed information about how memory is used by your program, including stack and heap allocations.

// how to see the memory layout of the program using perf(Performance analysis tool):
// To see the memory layout of the program using `perf`, you can use the following command:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `perf` to record performance data while running your program:
//    perf record ./testCode
// 3. After running, use `perf report` to analyze the recorded data:
//    perf report
// This will show you performance statistics, including function call counts and time spent in each function, which can give you insight into how memory is accessed and used during execution.

// how to see the memory layout of the program using pmap(Process memory mapper):
// To see the memory layout of the program using `pmap`, you can use the following command:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Run your program to get its process ID (PID):
//    ./testCode
// 3. Use `pmap` with the PID of your running program:
//    pmap <PID>
// Replace `<PID>` with the actual process ID of your program.
// This will display the memory map of the process, including the addresses, sizes, and permissions of each memory region.

// how to see the memory layout of the program using top(Task manager):
// To see the memory layout of the program using `top`, you can follow these steps:
// 1. Compile and run your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
//    ./testCode
// 2. Open a new terminal and run `top`:
//    top
// 3. Find your program in the list of running processes.
// 4. Press `Shift + M` to sort by memory usage.
// 5. You can press `c` to toggle between showing the command line and the full command path.
// Note that `top` does not provide detailed memory layout information but gives an overview of memory usage by processes.

// how to see the memory layout of the program using htop(Task manager):
// To see the memory layout of the program using `htop`, you can follow these steps:
// 1. Compile and run your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
//    ./testCode
// 2. Open a new terminal and run `htop`:
//    htop
// 3. Find your program in the list of running processes.
// 4. You can press `F6` to sort by different columns, including memory usage.
// 5. Press `F2` to access the setup menu, where you can customize what information is displayed.
// Note that `htop` provides a more user-friendly interface than `top` and allows you to see memory usage in real-time.

// how to see the memory layout of the program using vmstat(Virtual Memory Statistics):
// To see the memory layout of the program using `vmstat`, you can follow these steps:
// 1. Open a terminal and run `vmstat` with a specified interval (e.g., 1 second):
//    vmstat 1
// 2. This will display memory statistics, including free memory, used memory, and swap usage.
// Note that `vmstat` provides overall system memory statistics rather than specific memory layout for a single program.
// It is useful for monitoring system performance and memory usage over time.

// how to see the memory layout of the program using free(Memory usage statistics):
// To see the memory layout of the program using `free`, you can follow these steps:
// 1. Open a terminal and run the `free` command:
//    free -h
// 2. This will display memory usage statistics, including total, used, free, shared, and available memory.
// The `-h` option makes the output human-readable (e.g., in MB or GB).
// Note that `free` provides overall system memory statistics rather than specific memory layout for a single program.

// how to see the memory layout of the program using cat /proc/self/maps(Process memory mappings):
// To see the memory layout of the program using `cat /proc/self/maps`, you can follow these steps:
// 1. Open a terminal and run your compiled program:
//    ./testCode
// 2. In the same terminal, run the command:
//    cat /proc/self/maps
// 3. This will display the memory mappings of the current process, including addresses, permissions, and associated files.
// Note that `/proc/self/maps` shows the memory layout of the currently running process, including stack, heap, and loaded libraries.

// how to see the memory layout of the program using cat /proc/<pid>/maps(Process memory mappings for a specific PID(Process ID)):
// To see the memory layout of a specific process using `cat /proc/<pid>/maps`, you can follow these steps:
// 1. Run your compiled program to get its process ID (PID):
//    ./testCode
// 2. In the same terminal, find the PID of your program using the `ps` command:
//    ps aux | grep testCode
// 3. Once you have the PID, run the command:
//    cat /proc/<pid>/maps
// Replace `<pid>` with the actual process ID of your program.
// This will display the memory mappings of the specified process, including addresses, permissions, and associated files.
// Note that `/proc/<pid>/maps` shows the memory layout of the specified process, including stack, heap, and loaded libraries.

// how see this code in assembly language:
// To see the assembly code generated by the compiler for this C program, you can use the following command:
// 1. Compile your program with the `-S` option to generate assembly code:
//    gcc -S -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode.s
// 2. This will create a file named `testCode.s` containing the assembly code.
// You can open this file in any text editor to view the assembly instructions generated by the compiler for your C code.

// how to see the assembly code generated by the compiler:
// To see the assembly code generated by the compiler, you can use the following command:
// 1. Compile your program with the `-S` option to generate assembly code:
//    gcc -S -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode.s
// 2. This will create a file named `testCode.s` containing the assembly code.
// You can open this file in any text editor to view the assembly instructions generated by the compiler for your C code.

// how to see the assembly code generated by the compiler using objdump:
// To see the assembly code generated by the compiler using `objdump`, you can follow these steps:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d` option to disassemble the binary:
//    objdump -d testCode
// This will display the disassembled assembly code for your program, showing the instructions and their addresses.
// You can also use `objdump -S testCode` to interleave source code with assembly instructions if you compiled with debugging information.

// how to see the assembly code generated by the compiler using gdb:
// To see the assembly code generated by the compiler using `gdb`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Start `gdb` with your compiled program:
//    gdb ./testCode
// 3. Set a breakpoint at the main function or any other function you want to inspect:
//    (gdb) break main (or any other function)
// 4. Run the program within `gdb`:
//    (gdb) run
// 5. Use the `disassemble` command to view the assembly code for the current function:
//    (gdb) disassemble (main)
// This will display the assembly instructions for the function you are currently in, along with their addresses.

// how to see the assembly code generated by the compiler using objdump -d:
// To see the assembly code generated by the compiler using `objdump -d`, you can follow these steps:
// 1. Compile your program normally:
//    gcc -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d` option to disassemble the binary:
//    objdump -d testCode
// This will display the disassembled assembly code for your program, showing the instructions and their addresses.
// You can also use `objdump -S testCode` to interleave source code with assembly instructions if you compiled with debugging information.

// how to see the assembly code generated by the compiler using objdump -S:
// To see the assembly code generated by the compiler using `objdump -S`, you can follow these steps:
// 1. Compile your program with debugging information:       
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-S` option to disassemble the binary and include source code:
//    objdump -S testCode
// This will display the disassembled assembly code for your program, showing the instructions, their addresses, and associated source code.
// You can also use `objdump -d testCode` to display only the instructions without source code.
// This is useful for understanding how the compiler translates your C code into assembly instructions.

// how to see the assembly code generated by the compiler using objdump -d -S:
// To see the assembly code generated by the compiler using `objdump -d -S`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d` and `-S` options to disassemble the binary and include source code:
//    objdump -d -S testCode
// This will display the disassembled assembly code for your program, showing the instructions, their addresses, and associated source code.
// The `-d` option disassembles the binary, while the `-S` option interleaves the source code with the assembly instructions.
// This is useful for understanding how the compiler translates your C code into assembly instructions and how they relate to the original source code.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, and `-M intel` options to disassemble the binary and include source code in Intel syntax:
//    objdump -d -S -M intel testCode
// This will display the disassembled assembly code for your program, showing the instructions, their addresses, and associated source code in Intel syntax.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, and the `-M intel` option specifies the Intel syntax for the assembly instructions.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, and `-C` options to disassemble the binary, include source code in Intel syntax, and demangle C++ names:
//    objdump -d -S -M intel -C testCode
// This will display the disassembled assembly code for your program, showing the instructions, their addresses, and associated source code in Intel syntax.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions, and the `-C` option demangles C++ names if applicable.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language, while also providing clear function names for C++ code.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, and `-w` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, and write output to a file:
//    objdump -d -S -M intel -C -w testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, and associated source code in Intel syntax.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions, the `-C` option demangles C++ names if applicable, and the `-w` option writes the output to a file.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language, while also providing clear function names for C++ code and saving the output for later analysis.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w -l:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w -l`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, `-w`, and `-l` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, write output to a file, and include line numbers:
//    objdump -d -S -M intel -C -w -l testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, associated source code in Intel syntax, and line numbers.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions,
// the `-C` option demangles C++ names if applicable, the `-w` option writes the output to a file, and the `-l` option includes line numbers in the output.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language, while also providing clear function names for C++ code, saving the output for later analysis, and including line numbers for better context.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w -l -h:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w -l -h`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, `-w`, `-l`, and `-h` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, write output to a file, include line numbers, and display section headers:
//    objdump -d -S -M intel -C -w -l -h testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, associated source code in Intel syntax, line numbers, and section headers.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions,
// the `-C` option demangles C++ names if applicable, the `-w` option writes the output to a file, the `-l` option includes line numbers in the output, and the `-h` option displays section headers.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language, while also providing clear function names for C++ code, saving the output for later analysis, including line numbers for better context, and displaying section headers for a comprehensive view of the binary structure.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w -l -h -p:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w -l -h -p`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, `-w`, `-l`, `-h`, and `-p` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, write output to a file, include line numbers, display section headers, and show program headers:
//    objdump -d -S -M intel -C -w -l -h -p testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, associated source code in Intel syntax, line numbers, section headers, and program headers.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions,
// the `-C` option demangles C++ names if applicable, the `-w` option writes the output to a file, the `-l` option includes line numbers in the output, the `-h` option displays section headers, and the `-p` option shows program headers.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language,
// while also providing clear function names for C++ code, saving the output for later analysis, including line numbers for better context, displaying section headers for a comprehensive view of the binary structure,
// and showing program headers for additional context about the executable file format.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w -l -h -p -r:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w -l -h -p -r`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, `-w`, `-l`, `-h`, `-p`, and `-r` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, write output to a file, include line numbers, display section headers, show program headers, and display relocation information:
//    objdump -d -S -M intel -C -w -l -h -p -r testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, associated source code in Intel syntax, line numbers, section headers, program headers, and relocation information.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions,
// the `-C` option demangles C++ names if applicable, the `-w` option writes the output to a file, the `-l` option includes line numbers in the output, the `-h` option displays section headers,
// the `-p` option shows program headers, and the `-r` option displays relocation information.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language,
// while also providing clear function names for C++ code, saving the output for later analysis, including line numbers for better context, displaying section headers for a comprehensive view of the binary structure,
// showing program headers for additional context about the executable file format, and providing relocation information to understand how symbols are resolved at runtime.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w -l -h -p -r -t:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w -l -h -p -r -t`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, `-w`, `-l`, `-h`, `-p`, `-r`, and `-t` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, write output to a file, include line numbers, display section headers, show program headers, display relocation information, and show symbol table:
//    objdump -d -S -M intel -C -w -l -h -p -r -t testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, associated source code in Intel syntax, line numbers, section headers, program headers, relocation information, and the symbol table.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions,
// the `-C` option demangles C++ names if applicable, the `-w` option writes the output to a file, the `-l` option includes line numbers in the output, the `-h` option displays section headers,
// the `-p` option shows program headers, the `-r` option displays relocation information, and the `-t` option shows the symbol table.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language,
// while also providing clear function names for C++ code, saving the output for later analysis, including line numbers for better context, displaying section headers for a comprehensive view of the binary structure,
// showing program headers for additional context about the executable file format, providing relocation information to understand how symbols are resolved at runtime, and displaying the symbol table for a complete overview of defined symbols in the binary.

// how to see the assembly code generated by the compiler using objdump -d -S -M intel -C -w -l -h -p -r -t -D:
// To see the assembly code generated by the compiler using `objdump -d -S -M intel -C -w -l -h -p -r -t -D`, you can follow these steps:
// 1. Compile your program with debugging information:
//    gcc -g -Wall -Wextra -pedantic -std=c17 testCode.c -o testCode
// 2. Use `objdump` with the `-d`, `-S`, `-M intel`, `-C`, `-w`, `-l`, `-h`, `-p`, `-r`, `-t`, and `-D` options to disassemble the binary, include source code in Intel syntax, demangle C++ names, write output to a file, include line numbers, display section headers, show program headers, display relocation information, show symbol table, and disassemble all sections:
//    objdump -d -S -M intel -C -w -l -h -p -r -t -D testCode > output.asm
// This will create a file named `output.asm` containing the disassembled assembly code for your program, showing the instructions, their addresses, associated source code in Intel syntax, line numbers, section headers, program headers, relocation information, the symbol table, and disassembling all sections of the binary.
// The `-d` option disassembles the binary, the `-S` option interleaves the source code with the assembly instructions, the `-M intel` option specifies the Intel syntax for the assembly instructions,
// the `-C` option demangles C++ names if applicable, the `-w` option writes the output to a file, the `-l` option includes line numbers in the output, the `-h` option displays section headers,
// the `-p` option shows program headers, the `-r` option displays relocation information, the `-t` option shows the symbol table, and the `-D` option disassembles all sections of the binary.
// This is useful for understanding how the compiler translates your C code into assembly instructions in a format that is often preferred by developers familiar with Intel assembly language,
// while also providing clear function names for C++ code, saving the output for later analysis, including line numbers for better context, displaying section headers for a comprehensive view of the binary structure,
// showing program headers for additional context about the executable file format, providing relocation information to understand how symbols are resolved at runtime, displaying the symbol table for a complete overview of defined symbols in the binary, and disassembling all sections for a thorough analysis.
