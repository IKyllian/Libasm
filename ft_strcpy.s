global _ft_strcpy

_ft_strcpy :
	mov rbx, 0
	jmp loop

loop :
	mov r8b, byte[rsi + rbx]
	mov byte[rdi + rbx], r8b
	cmp r8b, 0
	je end
	inc rbx
	jmp loop

end :
	mov rax, rdi
	ret