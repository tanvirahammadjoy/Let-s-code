section .data
    msg db "Hello, world!", 0xA
    len equ $ - msg

section .text
    global _start

_start:
    mov rax, 1      ; syscall: write
    mov rdi, 1      ; stdout
    mov rsi, msg    ; address of msg
    mov rdx, len    ; length of msg
    syscall

    mov rax, 60     ; syscall: exit
    xor rdi, rdi    ; status code 0
    syscall
