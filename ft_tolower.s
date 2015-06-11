section .text
	global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp rdi, 65
	jb	nothing
	cmp rdi, 90
	ja	nothing
	add rax, 32
	ret

nothing:
	ret