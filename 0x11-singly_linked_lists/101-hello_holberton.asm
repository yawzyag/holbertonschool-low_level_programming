;;;  nasm -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o -o hello
	%ifidn __OUTPUT_FORMAT__,elf64
	section .note.GNU-stack noalloc noexec nowrite progbits
	%endif

	sys_exit    equ 60
	sys_write   equ 1

	default rel
	global main		;must be declared for using gcc

	section	.text
main:				;tell linker entry point
	mov	edx, len	;message length
	mov	esi, msg	;message to write
	mov	edi, 1		;file descriptor (stdout)
	mov	eax, sys_write	;system call number (sys_write)
	syscall			;call kernel
	xor edi, edi
	mov	eax, sys_exit	;system call number (sys_exit)
	syscall			;call kernel

	section	.rodata
	msg	db	'Hello, Holberton',0xa ;our dear string
	len	equ	$ - msg		       ;length of our dear string
