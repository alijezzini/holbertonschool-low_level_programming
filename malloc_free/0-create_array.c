#include<stdio.h>
#include<stdlib.h>
#include"main.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc((size) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	if(a==0){
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);
}

