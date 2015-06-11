section .text
	global _ft_isalnum
	extern _ft_isalpha
	extern _ft_isdigit

_ft_isalnum:
	mov  rax, 0
	call _ft_isalpha
	cmp	 rax, 1
	je	 isalnum
	call _ft_isdigit
	cmp	 rax, 1
	je	 isalnum
	ret

isalnum:
	mov	 rax, 1
	ret
