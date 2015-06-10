section .text
	global start
	global _ft_isdigit
	global exit
	global isdigit

start:
	call _ft_isdigit
	ret

_ft_isdigit:
	mov	rax, 0				;initialize return --> 0
	cmp	rdi, 48				;compare with 0
	jl 	exit				;if strictly less than 0 --> exit
	cmp	rdi, 57				;compare with 9
	jg 	exit				;if strictly more than 9 --> exit
	jmp isdigit
	ret

isdigit:
	mov rax, 1
	ret

exit:
	ret




