global _ft_strcmp

_ft_strcmp :
	mov rbx, 0
	jmp loop

loop :
	mov r8b, byte[rdi + rbx]
	mov r9b, byte[rsi + rbx]
	cmp r9b, 0
	je end
	cmp r8b, 0
	je end
	cmp r8b, r9b
	jne end
	inc rbx
	jmp loop

end :
	movsx rax, r8b
	movsx r10, r9b
	sub rax, r10
	ret