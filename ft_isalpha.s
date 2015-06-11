section .text
	global _ft_isalpha

_ft_isalpha:
	mov	rax, 0				;initialize return --> 0
	cmp	rdi, 65				;compare with 'A'
	jb 	exit				;if strictly less than 'A' --> exit
	cmp	rdi, 90				;compare with 'Z'
	ja 	get_min				;if strictly more than 'Z' --> check_min
	jmp isalpha
	ret

get_min:
	cmp rdi, 97				;compare with 'a'
	jb	exit				;if strictly less than 'a' --> exit
	cmp rdi, 122			;compare with 'z'
	ja	exit				;if strictly more than 'z' --> exit
	jmp isalpha
	ret

isalpha:
	mov rax, 1
	ret

exit:
	ret