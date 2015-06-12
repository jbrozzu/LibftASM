;char *strdup(const char *s1);

section .text
	global _ft_strdup
	extern _ft_strlen
	extern _malloc
	extern _ft_memcpy

_ft_strdup:
	push	rdx                	;rdx = rien dedans
	push	rdi					;rdi = la chaine a copier
	call 	_ft_strlen
	push	rax                 ;rax = len de la chaine
	mov		rdi, rax			;rdi = len de la chaine ---> void *malloc(size_t size)
	call	_malloc
	cmp		rax, byte 0x0                
	pop		rdx					;len de chaine dans rdx (rax)
	pop		rsi					;chaine a copier dans rsi (rdi)
	je		end					;si malloc fonctionne pas, stop
	mov		rdi, rax			;retour de malloc dans rdi
	call	_ft_memcpy			

end:
	pop		rdx
	ret