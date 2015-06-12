;void	*ft_memset(void *str, int c, size_t n);
;                     %rdi    %rsi     %rdx

section .text
	global _ft_memset

_ft_memset:
	push rdi
	mov rcx, rdx          ;set up count
	mov rax, rsi
	cld
	rep stosb
	pop rax
	ret