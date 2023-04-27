section .data
	message db "Hello, Holberton", 0x0A, 0

section .text
	global main

	extern printf

main:
	sub rsp, 8				   ; align stack
	mov rdi, message
	xor eax, eax
	call printf
	add rsp, 8				   ; clean up the stack
	xor eax, eax
	ret
