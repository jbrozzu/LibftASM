section .text
	global _ft_isprint

_ft_isprint:
	mov rax, 1
	cmp rdi, 32
	jb  exit
	cmp rdi, 126
	ja  exit
	ret

exit:
	mov rax, 0
	ret