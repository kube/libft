#include <ft_math.h>
#include <ft_print.h>
#include <stdio.h>

static void		expect_infin_number_eq(t_infin_number *a, t_infin_number *b)
{
	if (infin_number_eq(a, b))
		ft_putendl("OK");
	else
	{
		ft_putstr("Expected ");
		print_infin_number(a);
		ft_putstr(" to equal ");
		print_infin_number(b);
		ft_putendl("");
	}
}

static void		assert_add_result(const char *_a, const char *_b, const char *_result)
{
	printf("%s + %s = %s\n", _a, _b, _result);

	t_infin_number* a = load_infin_number(_a);
	t_infin_number* b = load_infin_number(_b);
	t_infin_number* result = load_infin_number(_result);

	t_infin_number* c = infin_add(a, b);
	expect_infin_number_eq(c, result);

	t_infin_number* d = infin_add(b, a);
	expect_infin_number_eq(d, result);
}

static void		assert_sub_result(const char *_a, const char *_b, const char *_result)
{
	printf("%s - %s = %s\n", _a, _b, _result);

	t_infin_number* a = load_infin_number(_a);
	t_infin_number* b = load_infin_number(_b);
	t_infin_number* result = load_infin_number(_result);

	t_infin_number* c = infin_sub(a, b);
	expect_infin_number_eq(c, result);

	result->sign = -result->sign;
	t_infin_number* d = infin_sub(b, a);
	expect_infin_number_eq(d, result);
}

int	main()
{
	assert_add_result("1", "1", "2");
	assert_add_result("1", "10", "11");
	assert_add_result("1", "9999999999", "10000000000");
	assert_add_result("-1", "-9999999999", "-10000000000");
	assert_add_result("1", "-9999999999", "-9999999998");
	assert_add_result("-1", "9999999999", "9999999998");
	assert_add_result("-1", "-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999", "-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	assert_add_result("0", "0", "0");
	assert_add_result("-0", "0", "0");
	assert_add_result("-0", "-0", "0");
	assert_add_result("100", "-100", "0");

	assert_sub_result("1", "-1", "2");
	assert_sub_result("1", "-10", "11");
	assert_sub_result("1", "-9999999999", "10000000000");
	assert_sub_result("-1", "9999999999", "-10000000000");
	assert_sub_result("1", "9999999999", "-9999999998");
	assert_sub_result("-1", "-9999999999", "9999999998");
	assert_sub_result("-1", "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999", "-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	assert_sub_result("0", "-0", "0");
	assert_sub_result("-0", "-0", "0");
	assert_sub_result("-0", "0", "0");
	assert_sub_result("100", "100", "0");

	return 0;
}