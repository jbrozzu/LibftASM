section .text
	global _ft_bzero

_ft_bzero:
	push  rdi				;push rdi on the stack
	cmp   rdi, 0	        ;find out if rdi is NULL
	je    exit			    ;if NULL exit
	mov   rax, 0			;set rax to 0 to fill with stosb
	mov   rcx, rsi		    ;put len in rcx for stosb cmpt    	
	cld						;put DF to 0, set incrementation
	rep stosb			    ;while rcx > 0 fill rdi with rax

exit:
	pop		rax				;take rdi back from the stack
	ret