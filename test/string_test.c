#include <stdio.h>
#include <unistd.h>

int	test(char *s, int fd)
{
	int	i;
	int	str;

	i = 0;
	if (!s)
	{
      str += write(fd, "(NULL)", 6);
        return (str);
    }
    while (s[i])
    {
        str += write(fd, &s[i], 1);
        i++;
    }
    return (str);
}

int main()
{
	int i;
	char *str;

	str = "Hello World";
	i = 0;
	i = test(str, 1);
	return (i);
}
