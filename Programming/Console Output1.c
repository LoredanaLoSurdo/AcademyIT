/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llo-surd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:17:21 by llo-surd          #+#    #+#             */
/*   Updated: 2022/04/15 18:30:53 by llo-surd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//* This program prompts a user to input their name, the program will take the 
//input and join it with a welcome message, the output will be displayed
//in the console.
//*

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char		name[30];
	int			i;

	printf("%s\n", "Please enter your name");
	scanf("%[^\n]s", name);
	i = 0;
	while (name[i] != '\0')
	{
		if ((name[i] < 'a' || name[i] > 'z')
			&& (name[i] < 'A' || name[i] > 'Z'))
		{
			printf("%s\n", "Error: enter text - no numbers, spaces, or symbols");
			return (0);
		}
		i++;
	}	
	printf("%s\n", ft_strjoin("Welcome to FDS - ", name));
}
