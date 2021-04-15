/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:30:48 by kdelport          #+#    #+#             */
/*   Updated: 2021/04/15 13:46:54 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(*elem));
	if (!elem)
		return (NULL);
	elem->data = content;
	elem->next = NULL;
	return (elem);
}

int main(void)
{
	t_list *list;
	char dest[50];
	char scnd_dest[50];
	char *str;
	char buffer[50];
	int fd;

	errno = 0;
	fd = open("text.txt", O_RDONLY);
	str = "Hello World";
	list = ft_lstnew((void *)0);
	list->next = ft_lstnew((void *)30);
	printf("------------ ft_strlen ------------\n");
	printf("Word = %s\n", str);
	printf("ft_strlen = %lu\n", ft_strlen(str));
	printf("strlen    = %lu\n", strlen(str));
	printf("------------ ft_strcmp ------------\n");
	printf("ft_strcmp = %i\n", ft_strcmp("Hello", "Hellw"));
	printf("strcmp    = %i\n", strcmp("Hello", "Hellw"));
	printf("------------ ft_strcpy ------------\n");
	printf("ft_strcpy = %s\n", ft_strcpy(dest, "Hello World"));
	printf("strcpy    = %s\n", strcpy(scnd_dest, "Hello World"));
	printf("------------ ft_strdup ------------\n");
	printf("ft_strdup = %s\n", ft_strdup("qwe323*/ 3*/234/)*:PP{P?><^$$$.	.."));
	printf("strdup    = %s\n", strdup("qwe323*/ 3*/234/)*:PP{P?><^$$$.	.."));
	printf("------------ ft_write ------------\n");
	printf("\nft_write = %zi\n", ft_write(8, "Hello World",12));
	printf("Errno = %i\n", errno);
	// printf("\nwrite    = %zi\n", write(7, "Hello World", 12));
	// printf("Errno = %i\n", errno);
	errno = 0;
	printf("------------ ft_read ------------\n");
	printf("\nft_read = %zi - buffer = %s\n", ft_read(80, buffer, 4), buffer);
	printf("Errno = %i\n", errno);
	// printf("\nread    = %zi - buffer = %s\n", read(fd, buffer, 4), buffer);
	printf("------------ ft_list_size ------------\n");
	printf("ft_list_size = %i\n", ft_list_size(list));
	printf("------------ ft_list_push_front ------------\n");
	printf("Value before push front = %i\n", (int)list->data);
	ft_list_push_front(&list, 0);
	printf("Value first list after push front = %i\n", (int)list->data);
	printf("New list size = %i\n", ft_list_size(list));
	
	close(fd);
	return (0);
}