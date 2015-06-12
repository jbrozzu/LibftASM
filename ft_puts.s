%define MACH_SYSCALL(nb)		0x2000000 | nb
%define STDOUT					1
%define WRITE					4

section .data
	var:
		.string db "(null)", 10

section .text

	global _ft_puts
	extern _ft_strlen

_ft_puts:
	cmp rdi, 0
	je null
	push rdi
	call _ft_strlen
	pop rsi
	mov rdi, STDOUT
	mov rdx, rax
	mov rax, MACH_SYSCALL(WRITE)
	syscall

	mov rdi, STDOUT
	lea rsi, [rel new]
	mov rdx, 1
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret

null:
	lea	rsi, [rel var.string]
	mov rdi, STDOUT
	mov rax, MACH_SYSCALL(WRITE)
	mov rdx, 7
	syscall
	mov rax, 1
	ret

new:
	newline db 10