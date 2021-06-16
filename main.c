/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:30:48 by kdelport          #+#    #+#             */
/*   Updated: 2021/06/16 16:27:04 by kdelport         ###   ########.fr       */
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
	char buffer[50];
	int fd;
	int fd2;

	fd = open("text.txt", O_RDONLY);
	fd2 = open("text.txt", O_RDONLY);
	
	printf("\033[1;36m------------ ft_strlen ------------\033[0;37m\n");
	printf("\033[1;34mSTR: Hello World\033[0;37m\n");
	printf("ft_strlen = %lu\n", ft_strlen("Hello World"));
	printf("strlen    = %lu\n", strlen("Hello World"));
	printf("\033[1;34mSTR: \033[0;37m\n");
	printf("ft_strlen = %lu\n", ft_strlen(""));
	printf("strlen    = %lu\n", strlen(""));
	printf("\033[1;34mSTR: Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World\033[0;37m\n");
	printf("ft_strlen = %lu\n", ft_strlen("Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World"));
	printf("strlen    = %lu\n", strlen("Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World"));


	printf("\033[1;36m------------ ft_strcmp ------------\033[0;37m\n");
	printf("\033[1;34mSTR: Hello | Hello\033[0;37m\n");
	printf("ft_strcmp = %i\n", ft_strcmp("Hello", "Hello"));
	printf("strcmp    = %i\n", strcmp("Hello", "Hello"));
	printf("\033[1;34mSTR: Hello | hello\033[0;37m\n");
	printf("ft_strcmp = %i\n", ft_strcmp("Hello", "hello"));
	printf("strcmp    = %i\n", strcmp("Hello", "hello"));
	printf("\033[1;34mSTR: Hello | HeLlo\033[0;37m\n");
	printf("ft_strcmp = %i\n", ft_strcmp("Hello", "HeLlo"));
	printf("strcmp    = %i\n", strcmp("Hello", "HeLlo"));


	printf("\033[1;36m------------ ft_strcpy ------------\033[0;37m\n");
	printf("\033[1;34mSTR: Hello World\033[0;37m\n");
	printf("ft_strcpy = %s\n", ft_strcpy(dest, "Hello World"));
	printf("strcpy    = %s\n", strcpy(scnd_dest, "Hello World"));
	printf("\033[1;34mSTR: \033[0;37m\n");
	printf("ft_strcpy = %s\n", ft_strcpy(dest, ""));
	printf("strcpy    = %s\n", strcpy(scnd_dest, ""));


	printf("\033[1;36m------------ ft_strdup ------------\033[0;37m\n");
	printf("\033[1;34mSTR: Hello World\033[0;37m\n");
	printf("ft_strdup = %s\n", ft_strdup("Hello World"));
	printf("strdup    = %s\n", strdup("Hello World"));
	printf("\033[1;34mSTR: qwe323*/ 3*/234/)*:PP{P?><^$$$.	..\033[0;37m\n");
	printf("ft_strdup = %s\n", ft_strdup("qwe323*/ 3*/234/)*:PP{P?><^$$$.	.."));
	printf("strdup    = %s\n", strdup("qwe323*/ 3*/234/)*:PP{P?><^$$$.	.."));
	printf("\033[1;34mSTR: \033[0;37m\n");
	printf("ft_strdup = %s\n", ft_strdup(""));
	printf("strdup    = %s\n", strdup(""));


	printf("\033[1;36m------------ ft_write ------------\033[0;37m\n");
	printf("\033[1;34mSTR: Hello World\033[0;37m\n");
	printf("ft_write = %zi\n", ft_write(1, "Hello World",12));
	printf("write    = %zi\n", write(1, "Hello World", 12));
	printf("\033[1;34mSTR: \033[0;37m\n");
	printf("ft_write = %zi\n", ft_write(1, "",1));
	printf("write    = %zi\n", write(1, "", 1));
	printf("\033[1;34mWrite with an error\033[0;37m\n");
	errno = 0;
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);
	printf("ft_write = %zi\n", ft_write(6, "",1));
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);
	errno = 0;
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);
	printf("write    = %zi\n", write(6, "", 1));
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);


	printf("\033[1;36m------------ ft_read ------------\033[0;37m\n");
	printf("ft_read = %zi - buffer = %s\n", ft_read(fd, buffer, 12), buffer);
	printf("read    = %zi - buffer = %s\n", read(fd2, buffer, 12), buffer);
	printf("\033[1;34mRead with an error\033[0;37m\n");
	errno = 0;
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);
	printf("ft_read = %zi\n", ft_read(21, buffer, 4));
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);
	errno = 0;
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);
	printf("read    = %zi\n", read(21, buffer, 4));
	printf("\033[1;32mErrno = %i\033[0;37m\n", errno);


	printf("\033[1;36m------------ ft_list_size ------------\033[0;37m\n");
	list = ft_lstnew((void *)0);
	printf("ft_list_size = %i\n", ft_list_size(list));
	list->next = ft_lstnew((void *)30);
	printf("ft_list_size = %i\n", ft_list_size(list));


	printf("\033[1;36m------------ ft_list_push_front ------------\033[0;37m\n");
	printf("Value first node = %i\n", (int)list->data);
	ft_list_push_front(&list, ft_lstnew((void *)50));
	printf("Value first node after push = %i\n", (int)list->data);
	printf("New list size = %i\n\n", ft_list_size(list));

	printf("Value first node = %i\n", (int)list->data);
	ft_list_push_front(&list, ft_lstnew((void *)70));
	printf("Value first node after push = %i\n", (int)list->data);
	
	close(fd);
	close(fd2);
	return (0);
}