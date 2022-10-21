; My comments: Print sentence in asm
; File: 101-hello_holberto.asm
; Auth: Steam Njike
; Desc: Write 64bit asm to print Hello,...

extern printf

section .text
	global main

main:
	push rbp
	mov rdi,msg ; Pass msg to printf first input
	mov al,0
	call printf
	pop rbp
	mov al,0
	ret

section .data
	msg db `Hello, Holberton\n`, 0
