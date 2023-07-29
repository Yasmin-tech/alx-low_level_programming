; hello.asm
; Assemble and link with:
; nasm -f elf64 hello.asm && gcc hello.o -o hell


	global  main
	extern  printf

	section .data

	msg     db      'Hello, Holberton', 0

	section .tex
main:
	mov	rdi, msg
	xor	rax, rax

	call printf

	xor	rax, rax

	ret
