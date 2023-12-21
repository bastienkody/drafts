#include "ft_fprintf.h"
#include "fcntl.h"

int	main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
		return (-1);
	fd = open(argv[1], O_RDWR);
	if (fd < 1)
		ft_fprintf(2, "pb de fd = %i\n", fd);
	ft_fprintf(fd, "salut les %s, %p, %i", "gars", NULL, 42);
	close(fd);
	return (0);
}
