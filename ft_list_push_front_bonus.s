global _ft_list_push_front
; void	ft_list_push_front(t_list **alst, t_list *new);
_ft_list_push_front :
	cmp rdi, 0 ; Protection si on recoit un pointeur null (alst)
	je exit
	cmp rsi, 0 ; Protection si on recoit un pointeur null (new)
	je exit
	cmp byte[rdi], 0 ; Check si une liste existe
	je create_list
	mov rbx, [rdi]
	mov [rsi + 8], rbx ; new->next = *alst 
	mov [rdi], rsi ; *alst = new
	ret
create_list :
	mov [rdi], rsi
	ret

exit :
	ret