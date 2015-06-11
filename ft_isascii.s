section .text
	global _ft_isascii

_ft_isascii:
	mov rax, 1
	cmp rdi, 0
	jb  notascii
	cmp rdi, 127
	ja notascii
	ret

notascii:
	mov rax, 0
	ret