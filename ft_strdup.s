global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error
_ft_strdup :
	call _ft_strlen
	inc rax
	push rdi
	mov rdi, rax
	call _malloc
	jc error
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	ret

error :
	mov rbx, rax ; stock la valeur de retour du syscall qui est dans RAX
	call ___error ; renvoie un pointeur sur errno dans RAX
	mov [rax], rbx ; Met le contenue de rbx (valeur de retour du syscall) dans errno
	mov rax, 0 ; renvoie -1 pour le retour de write
	ret