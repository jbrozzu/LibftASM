section .text
	global _ft_toupper

_ft_toupper:
	mov	rax, rdi
	cmp rdi, 97
	jb  nothing
	cmp rdi, 122
	ja  nothing
	sub rax, 32
	ret

nothing:
	ret