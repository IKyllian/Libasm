global _ft_list_size

_ft_list_size :
	mov rax, 0
	jmp loop

loop :
	cmp rdi, 0
	je end
	inc rax
	mov rdi, [rdi + 8] ; system x64 (void*) = 8 bytes
	jmp loop

end :
	ret