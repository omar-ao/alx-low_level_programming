; A program that prints Hello, Holberton, followed by a new line
; Author Omar Ahmed Osman

section .text
	default rel
	extern printf
	global main
main:
	push rbp

	mov rdi, fmt
	mov rsi, msg
	mov rax, 0

	call printf wrt ..pltj ; call printf

	pop rbp

	mov rax,0
	ret
section .data
	msg: db "Hello, Holberton", 10, 0
	fmt: db "%s"
