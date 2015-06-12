;void	*ft_memcpy(void *dest, const void *src, size_t n);
;                     %rdi           %rsi         %rdx

section .text
	global _ft_memcpy

_ft_memcpy:
	push rdi
	mov rcx, rdx
	cld
	repnz movsb
	jmp	end

end:
	pop rdi
	mov rax, rdi
	ret