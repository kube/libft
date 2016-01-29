
      /*#######.
     ########",#:
   #########',##".
  ##'##'## .##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

///CUTRUN:INCLUDE_FOLDER	../include
///CUTRUN:LIBRARY_FOLDER	../
///CUTRUN:LINK_LIBRARY		ft

#include "cut_framework.h"
#include "ft_math.h"

static void
assert_eq_result(const t_infin_number *a, const t_infin_number *b, int result)
{
	if (infin_number_eq(a, b) != result)
	{
		printf("%s     ERROR:%s Expected ",
			COLOR_RED,
			COLOR_NORMAL);
		print_infin_number(a);
		printf(" %s to equal ",
			(result ? "not " : ""));
		print_infin_number(b);
		printf("\n");
		ASSERT(0)
	}
}

static void
assert_lt_result(const t_infin_number *a, const t_infin_number *b, int result)
{
	if (infin_number_lt(a, b) != result)
	{
		printf("%s     ERROR:%s Expected ",
			COLOR_RED,
			COLOR_NORMAL);
		print_infin_number(a);
		printf(" %s to be inferior to ",
			(result ? "not " : ""));
		print_infin_number(b);
		printf("\n");
		ASSERT(0)
	}
}

static void
assert_gt_result(const t_infin_number *a, const t_infin_number *b, int result)
{
	if (infin_number_gt(a, b) != result)
	{
		printf("%s     ERROR:%s Expected ",
			COLOR_RED,
			COLOR_NORMAL);
		print_infin_number(a);
		printf(" %s to be greater than ",
			(result ? "not " : ""));
		print_infin_number(b);
		printf("\n");
		ASSERT(0)
	}
}

static void
assert_add_result(const char *_a, const char *_b, const char *_result)
{
	t_infin_number* a = load_infin_number(_a);
	t_infin_number* b = load_infin_number(_b);
	t_infin_number* result = load_infin_number(_result);

	t_infin_number* c = infin_add(a, b);
	assert_eq_result(c, result, 1);

	t_infin_number* d = infin_add(b, a);
	assert_eq_result(d, result, 1);
}

static void
assert_sub_result(const char *_a, const char *_b, const char *_result)
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

static void
assert_length_result(const t_infin_number *a, unsigned int expected)
{
	if (infin_number_length(a) != expected)
	{
		printf("%s     ERROR:%s Expected ",
			COLOR_RED,
			COLOR_NORMAL);
		print_infin_number(a);
		printf(" length to be %u\n", expected);
		ASSERT(0)
	}
}


SUITE(infin_number, {

	DESCRIBE("infin_number_eq", {

		IT("returns true when equal values", {
			assert_eq_result(
				load_infin_number("1"),
				load_infin_number("1"), 1);

			assert_eq_result(
				load_infin_number("-1"),
				load_infin_number("-1"), 1);

			assert_eq_result(
				load_infin_number("873249823742938462349872634"),
				load_infin_number("873249823742938462349872634"), 1);

			assert_eq_result(
				load_infin_number("8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"),
				load_infin_number("8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"), 1);
		})

		IT("returns false with different values", {
			assert_eq_result(
				load_infin_number("1"),
				load_infin_number("10"), 0);

			assert_eq_result(
				load_infin_number("-873249823742938462349872634"),
				load_infin_number("873249823742938462349872634"), 0);

			assert_eq_result(
				load_infin_number("-1"),
				load_infin_number("1"), 0);

			assert_eq_result(
				load_infin_number("093124820934810394813094823409823409283409283402938420394728732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"),
				load_infin_number("8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340"), 0);
		})

		IT("returns true with different zeros", {
			assert_eq_result(
				load_infin_number("0"),
				load_infin_number("0"), 1);

			assert_eq_result(
				load_infin_number("0"),
				load_infin_number("-0"), 1);

			assert_eq_result(
				load_infin_number("-0"),
				load_infin_number("-0"), 1);

			assert_eq_result(
				load_infin_number("-0"),
				load_infin_number("0"), 1);
		})
	})

	DESCRIBE("infin_number_lt", {

		IT("returns true when a < b", {
			assert_lt_result(
				load_infin_number("0"),
				load_infin_number("1"), 1);

			assert_lt_result(
				load_infin_number("3029384203948230948234"),
				load_infin_number("12409734029374230947234097234097129132488998"), 1);

			assert_lt_result(
				load_infin_number("-23423498709809809809348230948203948209348209348"),
				load_infin_number("2348972349"), 1);
		})

		IT("returns false when a > b", {
			assert_lt_result(
				load_infin_number("4"),
				load_infin_number("2"), 0);

			assert_lt_result(
				load_infin_number("91283019273091273109237"),
				load_infin_number("32"), 0);
		})

		IT("returns false when a == b", {
			assert_lt_result(
				load_infin_number("1"),
				load_infin_number("1"), 0);

			assert_lt_result(
				load_infin_number("-92347203948239048230498234098234"),
				load_infin_number("-92347203948239048230498234098234"), 0);

			assert_lt_result(
				load_infin_number("998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498"),
				load_infin_number("998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498"), 0);
		})

		IT("works with zeros", {
			assert_lt_result(
				load_infin_number("0"),
				load_infin_number("0"), 0);

			assert_lt_result(
				load_infin_number("0"),
				load_infin_number("-0"), 0);

			assert_lt_result(
				load_infin_number("-0"),
				load_infin_number("0"), 0);

			assert_lt_result(
				load_infin_number("-0"),
				load_infin_number("-0"), 0);

			assert_lt_result(
				load_infin_number("-0"),
				load_infin_number("23423423"), 1);

			assert_lt_result(
				load_infin_number("0"),
				load_infin_number("-23423423"), 0);
		})
	})

	DESCRIBE("infin_number_gt", {

		IT("returns false when a > b", {
			assert_gt_result(
				load_infin_number("4"),
				load_infin_number("2"), 1);

			assert_gt_result(
				load_infin_number("91283019273091273109237"),
				load_infin_number("32"), 1);
		})

		IT("returns false when a < b", {
			assert_gt_result(
				load_infin_number("0"),
				load_infin_number("1"), 0);

			assert_gt_result(
				load_infin_number("3029384203948230948234"),
				load_infin_number("12409734029374230947234097234097129132488998"), 0);

			assert_gt_result(
				load_infin_number("-23423498709809809809348230948203948209348209348"),
				load_infin_number("2348972349"), 0);
		})

		IT("returns false when a == b", {
			assert_gt_result(
				load_infin_number("1"),
				load_infin_number("1"), 0);

			assert_gt_result(
				load_infin_number("-92347203948239048230498234098234"),
				load_infin_number("-92347203948239048230498234098234"), 0);

			assert_gt_result(
				load_infin_number("998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498"),
				load_infin_number("998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498"), 0);
		})

		IT("works with zeros", {
			assert_gt_result(
				load_infin_number("0"),
				load_infin_number("0"), 0);

			assert_gt_result(
				load_infin_number("0"),
				load_infin_number("-0"), 0);

			assert_gt_result(
				load_infin_number("-0"),
				load_infin_number("0"), 0);

			assert_gt_result(
				load_infin_number("-0"),
				load_infin_number("-0"), 0);

			assert_gt_result(
				load_infin_number("-0"),
				load_infin_number("23423423"), 0);

			assert_gt_result(
				load_infin_number("0"),
				load_infin_number("-23423423"), 1);
		})
	})

	DESCRIBE("infin_add", {

		IT("works with two positive numbers", {
			assert_add_result("1", "1", "2");
			assert_add_result("1", "10", "11");

			assert_add_result(
				"1",
				"9999999999",
				"10000000000");
		})

		IT("works with one little negative number", {
			assert_add_result(
				"-1",
				"9999999999",
				"9999999998");
		})

		IT("works with one big negative number", {
			assert_add_result(
				"1",
				"-9999999999",
				"-9999999998");
		})

		IT("works with two negative numbers", {
			assert_add_result(
				"-1",
				"-9999999999",
				"-10000000000");

			assert_add_result(
				"-1",
				"-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
				"-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		})

		IT("can output null sum", {
			assert_add_result("100", "-100", "0");
			assert_add_result("350", "-350", "0");

			assert_add_result(
				"999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
				"-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
				"-0");
		})

		IT("works with two zeros", {
			assert_add_result("0", "0", "0");
			assert_add_result("-0", "0", "0");
			assert_add_result("-0", "-0", "0");
		})
	})

	DESCRIBE("infin_sub", {

		IT("works with two positive numbers", {
			assert_sub_result(
				"1",
				"9999999999",
				"-9999999998");
		})

		IT("works with one little negative number", {
			assert_sub_result(
				"1",
				"-1",
				"2");
			assert_sub_result(
				"-1",
				"999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
				"-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
		})

		IT("works with one big negative number", {
			assert_sub_result(
				"1",
				"-9999999999",
				"10000000000");

			assert_sub_result(
				"1",
				"-10",
				"11");

			assert_sub_result(
				"-1",
				"9999999999",
				"-10000000000");
		})

		IT("works with two negative numbers", {
			assert_sub_result(
				"-1",
				"-9999999999",
				"9999999998");
		})

		IT("can output null sum", {
			assert_sub_result(
				"100",
				"100",
				"0");
		})

		IT("works with two zeros", {
			assert_sub_result("0", "-0", "0");
			assert_sub_result("-0", "-0", "0");
			assert_sub_result("-0", "0", "0");
		})
	})

	DESCRIBE("infin_number_length", {

		IT("handles positive numbers", {
			assert_length_result(load_infin_number("1"), 1);
			assert_length_result(load_infin_number("9"), 1);
			assert_length_result(load_infin_number("10"), 2);
			assert_length_result(load_infin_number("100"), 3);
			assert_length_result(load_infin_number("3242342353453453453454"), 22);
			assert_length_result(load_infin_number("2092374092374092734092734091724091247"), 37);
		})

		IT("handles negative numbers", {
			assert_length_result(load_infin_number("-1"), 1);
			assert_length_result(load_infin_number("-9"), 1);
			assert_length_result(load_infin_number("-10"), 2);
			assert_length_result(load_infin_number("-100"), 3);
			assert_length_result(load_infin_number("-3242342353453453453454"), 22);
			assert_length_result(load_infin_number("-2092374092374092734092734091724091247"), 37);
		})

		IT("handles zeros", {
			assert_length_result(load_infin_number("-0"), 0);
			assert_length_result(load_infin_number("0"), 0);
		})
	})

})
