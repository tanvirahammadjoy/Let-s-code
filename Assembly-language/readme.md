# Since you're using Kali Linux, you're already in a great environment for working with low-level languages like Assembly (x86/x86_64)

Let’s set up everything step by step:

✅ Step 1: Install Required Tools
You'll mainly need:

nasm → Netwide Assembler
ld → linker (usually pre-installed with binutils)
gdb → GNU Debugger (for debugging)

(Optional) gcc → for linking or combining with C

Run the following command in your terminal:
sudo apt update
sudo apt install nasm binutils gcc gdb -y

✅ Check if it's installed:
nasm -v     # Should show NASM version
ld -v       # Should show GNU linker version
gdb --version

✅ Step 2: Create a Simple Assembly Program
Create a file:
nano hello.asm

Paste this simple Linux 32-bit program (it just exits):
section .text
    global _start

_start:
    mov eax, 1      ; syscall number for sys_exit
    mov ebx, 0      ; exit code
    int 0x80        ; call kernel

✅ Step 3: Assemble and Link
Assemble the file:
nasm -f elf32 hello.asm -o hello.o

Link it:
ld -m elf_i386 -s -o hello hello.o

✅ You now have an executable called hello.
Run it:
./hello
It won’t show output, but if it runs without errors, it worked.
