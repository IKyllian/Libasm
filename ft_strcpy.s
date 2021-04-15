global _ft_strcpy

_ft_strcpy :
	mov rbx, 0
	jmp loop

loop :
	mov r8b, byte[rsi + rbx]
	cmp r8b, 0
	je end
	mov byte[rdi + rbx], r8b
	inc rbx
	jmp loop

end :
	mov byte[rdi + rbx], 0
	mov rax, rdi
	ret