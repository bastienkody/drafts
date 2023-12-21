#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* In the subject, the value of T is not specified. Let's assume it's worth ten points*/

int	checker(char *hand)
{
	const char	*valid_char = "23456789TJDKA";

	while (*hand)
	{
		if (!strchr(valid_char, *hand))
			return (printf("The char <%c> does not represent a card in blackjack\n", *hand), 0); 
		hand++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	const char	*ten_faces = "TJDK";
	char	*hand;
	int	sum = 0;

	if (argc != 2 || !checker(argv[1]))
		return (1);
	hand = argv[1];
/* Normal count */
	while (*hand)
	{
		if (*hand >= '2' && *hand <= '9')
			sum+= *hand - '0';
		else if (strchr(ten_faces, *hand))
			sum+=10;
		else
			sum+=11;
		hand++;
	}
/* Adjustements (>21 with aces) */
	hand = argv[1];
	while (sum > 21 && strchr(hand, 'A'))
	{
		sum-=10;
		hand = strchr(hand, 'A') +1;
	}
	return (sum == 21? printf("Blackjack!\n") : printf("%i\n", sum), 0);
}
