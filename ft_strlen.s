global ft_strlen

ft_strlen : mov rax, 0 ; Initialise compteur a zero (rax registre qui contient la valeur de retour de la fonction)
			cmp [rax], 0 ; Compare le caractere de la chaine à \0
			inc rax ; Incremente le compteur

end : ret