global _ft_write
extern ___error
_ft_write :
	mov rax, 0x2000004
	syscall
	jc error
	ret

error :
	mov rbx, rax ; stock la valeur de retour du syscall qui est dans RAX
	call ___error ; renvoie un pointeur sur errno dans RAX
	mov [rax], rbx ; Met le contenue de rbx (valeur de retour du syscall) dans errno
	mov rax, -1 ; renvoie -1 pour le retour de write
	ret
