
#include "libft.h"

void	error(char *str_error)
{
	write(2, str_error, ft_strlen(str_error));
	exit(1);
}
