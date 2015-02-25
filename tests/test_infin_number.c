#include <ft_math.h>
#include <stdio.h>

/*
**	Tests on infinite numbers
*/

int	main()
{
	t_infin_number* a = load_infin_number("2");
	print_infin_number(a);
	printf("\nbase: %d\n\n", a->base);

	t_infin_number* b = load_infin_number("1");
	print_infin_number(b);
	printf("\nbase: %d\n\n", b->base);

	t_infin_number* c = infin_add(a, b);
	print_infin_number(c);
	printf("\nbase: %d\n", c->base);

	return 0;
}