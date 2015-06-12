;void	ft_bzero(void *s, size_t n)

section .text
	global _ft_bzero

_ft_bzero:
	mov rax, rdi      ;str
	mov rcx, rsi      ;len
	jmp while

while:
	cmp   rcx, 0
	je exit
	mov   byte[rax], 0
	inc   rax
	dec   rcx
	jmp   while

exit:
	ret