/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdelport <kdelport@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:30:48 by kdelport          #+#    #+#             */
/*   Updated: 2021/04/13 16:19:27 by kdelport         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int main(void)
{
	char dest[50];
	char scnd_dest[50];

	// printf("------------ ft_strlen ------------\n");
	// printf("ft_strlen = %lu\n", ft_strlen("Hello World"));
	// printf("strlen = %lu\n", strlen("Hello World"));
	// printf("------------ ft_strcmp ------------\n");
	// printf("ft_strcmp = %i\n", ft_strcmp("Hello", "HEllo"));
	// printf("strcmp = %i\n", strcmp("Hello", "HEllo"));
	// printf("------------ ft_strcpy ------------\n");
	// printf("ft_strcpy = %s\n", ft_strcpy(dest, "QWEsdasdDQWd d qwSDsd as "));
	// printf("strcpy    = %s\n", strcpy(scnd_dest, "QWEsdasdDQWd d qwSDsd as "));
	printf("------------ ft_strdup ------------\n");
	printf("ft_strdup = %s\n", ft_strdup("Hello World"));
	printf("strdup    = %s\n", strdup("Hello World"));
	
	return (0);
}