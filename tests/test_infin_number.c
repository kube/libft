#include <ft_math.h>
#include <ft_print.h>
#include <ft_test_framework.h>

static void		assert_eq_result(const t_infin_number *a, const t_infin_number *b, int result)
{
	if (infin_number_eq(a, b) != result)
	{
		ft_putstr(TST_RED);
		ft_putstr("     ERROR:");
		ft_putstr(TST_NRM);
		ft_putstr(" Expected ");
		print_infin_number(a);
		if (!result)
			ft_putstr(" not");
		ft_putstr(" to equal ");
		print_infin_number(b);
		ft_putendl("");
		ft_test_assertion_fail();
	}
}

static void		describe_infin_number_eq()
{
	ft_test_it("returns true when equal values");
		assert_eq_result(load_infin_number("1"), load_infin_number("1"), 1);
		assert_eq_result(load_infin_number("-1"), load_infin_number("-1"), 1);
		assert_eq_result(load_infin_number("873249823742938462349872634"), load_infin_number("873249823742938462349872634"), 1);
		assert_eq_result(load_infin_number("8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"), load_infin_number("8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"), 1);

	ft_test_it("returns false with different values");
		assert_eq_result(load_infin_number("1"), load_infin_number("10"), 0);
		assert_eq_result(load_infin_number("-873249823742938462349872634"), load_infin_number("873249823742938462349872634"), 0);
		assert_eq_result(load_infin_number("-1"), load_infin_number("1"), 0);
		assert_eq_result(load_infin_number("093124820934810394813094823409823409283409283402938420394728732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"), load_infin_number("8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"), 0);

	ft_test_it("return true with different zeros");
		assert_eq_result(load_infin_number("0"), load_infin_number("0"), 1);
		assert_eq_result(load_infin_number("0"), load_infin_number("-0"), 1);
		assert_eq_result(load_infin_number("-0"), load_infin_number("-0"), 1);
		assert_eq_result(load_infin_number("-0"), load_infin_number("0"), 1);
}


static void		assert_add_result(const char *_a, const char *_b, const char *_result)
{
	t_infin_number* a = load_infin_number(_a);
	t_infin_number* b = load_infin_number(_b);
	t_infin_number* result = load_infin_number(_result);

	t_infin_number* c = infin_add(a, b);
	assert_eq_result(c, result, 1);

	t_infin_number* d = infin_add(b, a);
	assert_eq_result(d, result, 1);
}

static void		describe_infin_add()
{
	ft_test_it("works with two positive numbers");
		assert_add_result("1", "1", "2");
		assert_add_result("1", "10", "11");
		assert_add_result("1", "9999999999", "10000000000");

	ft_test_it("works with one little negative number");
		assert_add_result("-1", "9999999999", "9999999998");

	ft_test_it("works with one big negative number");
		assert_add_result("1", "-9999999999", "-9999999998");

	ft_test_it("works with two negative numbers");
		assert_add_result("-1", "-9999999999", "-10000000000");
		assert_add_result("-1", "-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999", "-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

	ft_test_it("can output null sum");
		assert_add_result("100", "-100", "0");
		assert_add_result("350", "-350", "0");
		assert_add_result("999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999", "-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999", "-0");

	ft_test_it("works with two zeros");
		assert_add_result("0", "0", "0");
		assert_add_result("-0", "0", "0");
		assert_add_result("-0", "-0", "0");
}


static void		assert_sub_result(const char *_a, const char *_b, const char *_result)
{
	t_infin_number* a = load_infin_number(_a);
	t_infin_number* b = load_infin_number(_b);
	t_infin_number* result = load_infin_number(_result);

	t_infin_number* c = infin_sub(a, b);
	assert_eq_result(c, result, 1);

	result->sign = -result->sign;
	t_infin_number* d = infin_sub(b, a);
	assert_eq_result(d, result, 1);
}

static void		describe_infin_sub()
{
	ft_test_it("works with two positive numbers");
		assert_sub_result("1", "9999999999", "-9999999998");

	ft_test_it("works with one little negative number");
		assert_sub_result("1", "-1", "2");
		assert_sub_result("-1", "999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999", "-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

	ft_test_it("works with one big negative number");
		assert_sub_result("1", "-9999999999", "10000000000");
		assert_sub_result("1", "-10", "11");
		assert_sub_result("-1", "9999999999", "-10000000000");

	ft_test_it("works with two negative numbers");
		assert_sub_result("-1", "-9999999999", "9999999998");

	ft_test_it("can output null sum");
		assert_sub_result("100", "100", "0");

	ft_test_it("works with two zeros");
		assert_sub_result("0", "-0", "0");
		assert_sub_result("-0", "-0", "0");
		assert_sub_result("-0", "0", "0");	
}

int	main()
{
	ft_test_describe("infin_number_eq", &describe_infin_number_eq);
	ft_test_describe("infin_add", &describe_infin_add);
	ft_test_describe("infin_sub", &describe_infin_sub);

	return 0;
}