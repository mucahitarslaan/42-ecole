#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dst_size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	j = 0;
	while(dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (dst_size == 0 || dst_size <= dlen)
		return (slen + dst_size);
	while (src[i] != '\0' && (i < dst_size - dlen - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
	IC:TODO:IC
}

#include <stdio.h>
#include <string.h>

int main()
{
	char *c;
	char b[] = "naber";
	printf("%zu",ft_strlcat(c,b,3));
	printf("\n");
	printf("%zu",strlcat(c,b,3));
	return 1;
}
