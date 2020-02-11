#include <stdio.h>

int		main(void)
{
	int res;
	int part1;
	int part2;
	int part3;

	part1 = (3 + 4);
	part2 = 1 - 2 / part1 - 1 % 21;
	part3 = 3 + 42 * part2 + 1;
//	res = 3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1;
	printf("first we calculate (3 + 4) : %d, then we calculate (1 - 2 / %d - 1 % 21//) and lastly we will calculate (3 + 42 * %d + 1)\n", part1, part1, part2);
	return (0);
}