SECTION .data

	msg: db "Hello, Holberton",0 ;message to print out
	fmt: db "%s",10,0


SECTION .text ;my first asm code. Test section is where code starts

;calling printf form C program
extern printf
default rel

;declaring main lable (function) like in C programe
global main

main:
	push rbp

	mov rdi, fmt
	mov rsi, msg
	mov rax, 0

	;printing out the message and calling printf from c
	call printf

	;This code destroys stack or pop stack
	pop rbp

	mov rax,0
	ret
