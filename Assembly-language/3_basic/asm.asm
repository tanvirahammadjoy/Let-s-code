section .data
    msg db 'Hello, world my name is Shubham!', 0

section .text
    global _start

_start:
    mov edx, 33         ; length of the message
    mov ecx, msg        ; pointer to message
    mov ebx, 1          ; file descriptor (stdout)
    mov eax, 4          ; syscall number (sys_write)
    int 0x80            ; interrupt → call kernel

    mov eax, 1          ; syscall number (sys_exit)
    xor ebx, ebx        ; exit code 0
    int 0x80            ; call kernel to exit
