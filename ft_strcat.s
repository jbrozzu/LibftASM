;char *strcat(char *restrict s1, const char *restrict s2);

section .text
	global _ft_strcat
	extern _ft_strlen

_ft_strcat:
    push rdi
    call _ft_strlen
    pop rdi
	mov rcx, rdi
	add rcx, rax

loop:
    mov al, [rsi]
    mov [rcx], al
    cmp al, 0
    jz done
    inc rcx
    inc rsi
    jmp loop

done:
    mov rax, rdi
    ret