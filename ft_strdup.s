global _ft_strdup
extern malloc
_ft_strdup :
	mov rbx, 0
	call malloc
	jmp loop

loop :
	mov r8b, byte[rdi + rbx]
	mov byte[rax + rbx], r8b
	cmp r8b, 0
	je end
	inc rbx
	jmp loop
end :
	ret