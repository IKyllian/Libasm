global _ft_list_size

_ft_list_size :
	mov rax, 0
	jmp loop

loop :
	cmp byte[rdi + rax], 0
	je end
	inc rax
	jmp loop

end :
	ret