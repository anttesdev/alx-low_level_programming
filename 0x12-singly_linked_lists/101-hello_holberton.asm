section .text
	extern printf
	global main

section .data
	hello:db "Hello, Holberton", 0
	format:db "%s", 10, 0
main:
	push rbp
    	mov rdi, format
    	mov rsi, hello
	mov rax,0
    	call printf
    	pop rbp
	mov rax, 0
    	ret

