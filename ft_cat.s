%define MACH_SYSCALL(nb)		0x2000000 | nb
%define STDOUT				1

section .data
	buffer	db 1
	buffsize equ $ - buffer

section .text
	global _ft_cat

_ft_cat:
 	cmp		rdi, 0
 	jl		exit
 	jmp		while

while:
	mov		rax, 0x2000003
	push	rdi
	lea		rsi, [rel buffer]
	mov		rdx, buffsize
	syscall
	jc		exit
	cmp		rax, 0
	je		exit
	mov		rax, 0x2000004
	mov		rdi, STDOUT
	mov		rdx, buffsize
	syscall
	pop		rdi
	jmp		while

exit:
	pop		rdi
	ret