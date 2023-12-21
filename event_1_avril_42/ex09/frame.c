#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	longest(char **argv)
{
	int	res;

	res = 0;
	while (*argv)
	{
		if (strlen(*argv) > res)
			res = strlen(*argv);
		argv++;
	}
	return (res);
}

void	print_stars(int len)
{
	char	c = '*';
	char	nl = '\n';

	while (len--)
		write(1, &c, 1);
	write(1, &nl, 1);
}

void	print_words(int len, char **argv)
{
	int		cur_len;
	char	space = ' ';

	while (*argv)
	{
		cur_len = len;
		cur_len-= printf("* %s", *argv);
		while (cur_len != 2)
			cur_len-= printf(" ");
		printf(" *\n");
		argv++;
	}
}

int	main(int argc, char **argv)
{
	int	len;

	if (argc < 2)
		return (1);
	len = longest(++argv) + 4; // 1space +1star on each side
	print_stars(len);
	print_words(len, argv);
	print_stars(len);
	return (0);
}
