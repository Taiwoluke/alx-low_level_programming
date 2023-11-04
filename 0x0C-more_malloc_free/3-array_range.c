#include "main.h"
#include <stdlib.h>

/**
  * array_range – range of array
  * @min: minimum value
  * @max: maximum value
  *
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *w, i = 0;

	if (min > max)
		return (NULL);

	w = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (w == NULL)
		return (NULL);

	while (min <= max)
	{
		w[i] = min;
		i++;
		min++;
	}
