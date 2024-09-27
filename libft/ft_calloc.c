 /

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char		*d;
	size_t		i;

	i = 0;
	d = (char *)malloc(size * count);
	if (!d)
		return (0);
	while (i < size * count)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}
