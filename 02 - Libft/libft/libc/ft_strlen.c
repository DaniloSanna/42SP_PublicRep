#include<stdlib.h>

size_t	ft_strlen(const char *input)
{
	size_t	result;

	result = 0;
	while (input[result] != '\0')
		result++;
	return (result);
}
