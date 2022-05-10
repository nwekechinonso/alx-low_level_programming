#include "main.h"
#include <stdlib.h>
/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char e)
{
	char *arr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		arr[i] = e;
	}

	return (arr);

}
