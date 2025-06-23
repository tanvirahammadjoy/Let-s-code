	.file	"testCode.c"
	.text
	.globl	globalVar
	.data
	.align 4
	.type	globalVar, @object
	.size	globalVar, 4
globalVar:
	.long	100
	.globl	globalVar2
	.bss
	.align 4
	.type	globalVar2, @object
	.size	globalVar2, 4
globalVar2:
	.zero	4
	.globl	globalVar3
	.data
	.align 4
	.type	globalVar3, @object
	.size	globalVar3, 4
globalVar3:
	.long	200
	.section	.rodata
.LC0:
	.string	"Hello"
.LC1:
	.string	"Global variable: %d\n"
.LC2:
	.string	"Global variable 2: %d\n"
.LC3:
	.string	"Global variable 3: %d\n"
	.align 8
.LC4:
	.string	"This function is called from the main function."
	.align 8
.LC5:
	.string	"This function is used to demonstrate the use of functions in C."
	.align 8
.LC6:
	.string	"It is a simple function that prints a greeting message."
	.align 8
.LC7:
	.string	"The function does not take any parameters and does not return any value."
	.align 8
.LC8:
	.string	"It is a simple example of how to define and use functions in C."
	.align 8
.LC9:
	.string	"Functions are an important part of C programming and are used to organize code into reusable blocks."
	.align 8
.LC10:
	.string	"This function is a good example of how to use functions in C."
	.align 8
.LC11:
	.string	"Functions can be used to perform specific tasks, such as printing messages, performing calculations, or manipulating data."
	.align 8
.LC12:
	.string	"This function is a simple example of how to use functions in C."
	.text
	.globl	greet
	.type	greet, @function
greet:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	globalVar(%rip), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	globalVar2(%rip), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	globalVar3(%rip), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	greet, .-greet
	.section	.rodata
.LC13:
	.string	"Local variable: %d\n"
.LC14:
	.string	"Local variable 4: %d\n"
.LC15:
	.string	"Local variable 5: %d\n"
.LC16:
	.string	"Static variable: %d\n"
.LC17:
	.string	"Static variable 2: %d\n"
.LC18:
	.string	"Static variable 3: %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$10, -12(%rbp)
	movl	$20, -8(%rbp)
	movl	globalVar(%rip), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	globalVar2(%rip), %eax
	movl	%eax, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	globalVar3(%rip), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-12(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	staticVar.2(%rip), %eax
	movl	%eax, %esi
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	staticVar2.1(%rip), %eax
	movl	%eax, %esi
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	staticVar3.0(%rip), %eax
	movl	%eax, %esi
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	call	greet
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.data
	.align 4
	.type	staticVar.2, @object
	.size	staticVar.2, 4
staticVar.2:
	.long	30
	.local	staticVar2.1
	.comm	staticVar2.1,4,4
	.align 4
	.type	staticVar3.0, @object
	.size	staticVar3.0, 4
staticVar3.0:
	.long	40
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
