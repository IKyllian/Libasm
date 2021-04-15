global _ft_strlen

_ft_strlen :
	mov	rax, 0
	cmp rdi, 0 ; protection si on recoit NULL
	je end
	jmp	loop

loop :
	cmp byte[rdi + rax], 0
	je end
	inc rax
	jmp loop

end : ret