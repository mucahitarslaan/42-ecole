#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dst_size)
{
	size_t src_size;
	size_t i;

	if (!dest || !src)
		return (0);
	src_size = ft_strlen(src);
	i = 0;
	if (dst_size != 0)
	{
		while (src[i] != '\0' && i < (dst_size -1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}	
	return (src_size);
}
