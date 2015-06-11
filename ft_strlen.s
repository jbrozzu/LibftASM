section .text
	global _ft_strlen

_ft_strlen:
	mov		rsi, rdi		;save adress of the string
	mov		rax, 0			;put return to 0
	mov		rcx, -1			;put rcx to max -1 = 11111111111111111111111111
	cld						;clear flag to make sure it goes down
	repnz	scasb			;go down until 0X0 (like a while)
	sub		rax, rcx		;sub negative valor = add
	sub		rax, 2			;take away the -1 from the beginning and 0X0 ('\0') at the end
	ret