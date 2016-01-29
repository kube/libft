
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

# define ASSERT_EQUAL(_a, _b)												\
{																			\
	if (!infin_number_eq(load_infin_number(#_a), load_infin_number(#_b)))	\
		ASSERTION_FAIL("Expected "#_a" to equal "#_b)						\
}																			\

# define ASSERT_NOT_EQUAL(_a, _b)											\
{																			\
	if (infin_number_eq(load_infin_number(#_a), load_infin_number(#_b)))	\
		ASSERTION_FAIL("Expected "#_a" not to equal "#_b)					\
}																			\

# define ASSERT_LOWER_THAN(_a, _b)											\
{																			\
	if (!infin_number_lt(load_infin_number(#_a), load_infin_number(#_b)))	\
		ASSERTION_FAIL("Expected "#_a" to be lower than "#_b)				\
}																			\

# define ASSERT_GREATER_THAN(_a, _b)										\
{																			\
	if (!infin_number_gt(load_infin_number(#_a), load_infin_number(#_b)))	\
		ASSERTION_FAIL("Expected "#_a" to be greater than "#_b)				\
}																			\

// # define ASSERT_ADD_RESULT(const char *_a, const char *_b, const char *_result)
// {
// 	t_infin_number* a = load_infin_number(_a);
// 	t_infin_number* b = load_infin_number(_b);
// 	t_infin_number* result = load_infin_number(_result);

// 	t_infin_number* c = infin_add(a, b);
// 	ASSERT_EQUAL(c, result, 1);

// 	t_infin_number* d = infin_add(b, a);
// 	ASSERT_EQUAL(d, result, 1);
// }

// # define ASSERT_SUB_RESULT(const char *_a, const char *_b, const char *_result)
// {
// 	t_infin_number* a = load_infin_number(_a);
// 	t_infin_number* b = load_infin_number(_b);
// 	t_infin_number* result = load_infin_number(_result);

// 	t_infin_number* c = infin_sub(a, b);
// 	ASSERT_EQUAL(c, result, 1);

// 	result->sign = -result->sign;
// 	t_infin_number* d = infin_sub(b, a);
// 	ASSERT_EQUAL(d, result, 1);
// }

// # define ASSERT_LENGTH_RESULT(const t_infin_number *a, unsigned int expected)
// {
// 	if (infin_number_length(a) != expected)
// 	{
// 		printf("%s     ERROR:%s Expected ",
// 			COLOR_RED,
// 			COLOR_NORMAL);
// 		print_infin_number(a);
// 		printf(" length to be %u\n", expected);
// 		ASSERT(0)
// 	}
// }


SUITE(infin_number, {

	DESCRIBE("infin_number_eq", {

		IT("returns true when equal values", {
			ASSERT_EQUAL(1, 1)
			ASSERT_EQUAL(-1, -1)

			ASSERT_EQUAL(
				873249823742938462349872634,
				873249823742938462349872634)

			ASSERT_EQUAL(
				8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340,
				8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340)
		})

		IT("returns false with different values", {
			ASSERT_NOT_EQUAL(1, 10)
			ASSERT_NOT_EQUAL(-1, 1)

			ASSERT_NOT_EQUAL(
				-873249823742938462349872634,
				873249823742938462349872634)

			ASSERT_NOT_EQUAL(
				093124820934810394813094823409823409283409283402938420394728732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340,
				8732498237429384623498726340702397230947234072340823490290349020909809109374761340962340972340927340293620349772340)
		})

		IT("returns true with different zeros", {
			ASSERT_EQUAL(0, 0)
			ASSERT_EQUAL(0, -0)
			ASSERT_EQUAL(-0, -0)
			ASSERT_EQUAL(-0, 0)
		})
	})

	DESCRIBE("infin_number_lt", {

		IT("returns true when a < b", {
			ASSERT_LOWER_THAN(0, 1, TRUE)

			ASSERT_LOWER_THAN(
				3029384203948230948234,
				12409734029374230947234097234097129132488998,
				TRUE)

			ASSERT_LOWER_THAN(
				-23423498709809809809348230948203948209348209348,
				2348972349,
				TRUE)
		})

		IT("returns false when a > b", {
			ASSERT_LOWER_THAN(4, 2, FALSE)

			ASSERT_LOWER_THAN(
				91283019273091273109237,
				32,
				FALSE)
		})

		IT("returns false when a == b", {
			ASSERT_LOWER_THAN(1, 1, FALSE)

			ASSERT_LOWER_THAN(
				-92347203948239048230498234098234,
				-92347203948239048230498234098234,
				FALSE)

			ASSERT_LOWER_THAN(
				998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498,
				998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498,
				FALSE)
		})

		IT("works with zeros", {
			ASSERT_LOWER_THAN(0, 0,	FALSE)
			ASSERT_LOWER_THAN(0, -0, FALSE)
			ASSERT_LOWER_THAN(0, 0, FALSE)
			ASSERT_LOWER_THAN(0, -0, FALSE)
			ASSERT_LOWER_THAN(0, 23423423, FALSE)
			ASSERT_LOWER_THAN(0, -23423423, FALSE)
		})
	})

	// DESCRIBE("infin_number_gt", {

	// 	IT("returns false when a > b", {
	// 		assert_gt_result(
	// 			load_infin_number("4"),
	// 			load_infin_number("2"), 1);

	// 		assert_gt_result(
	// 			load_infin_number("91283019273091273109237"),
	// 			load_infin_number("32"), 1);
	// 	})

	// 	IT("returns false when a < b", {
	// 		assert_gt_result(
	// 			load_infin_number("0"),
	// 			load_infin_number("1"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("3029384203948230948234"),
	// 			load_infin_number("12409734029374230947234097234097129132488998"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("-23423498709809809809348230948203948209348209348"),
	// 			load_infin_number("2348972349"), 0);
	// 	})

	// 	IT("returns false when a == b", {
	// 		assert_gt_result(
	// 			load_infin_number("1"),
	// 			load_infin_number("1"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("-92347203948239048230498234098234"),
	// 			load_infin_number("-92347203948239048230498234098234"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498"),
	// 			load_infin_number("998098098098098230498234097235807234598634593846349856345898349993498573489989834753498573498"), 0);
	// 	})

	// 	IT("works with zeros", {
	// 		assert_gt_result(
	// 			load_infin_number("0"),
	// 			load_infin_number("0"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("0"),
	// 			load_infin_number("-0"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("-0"),
	// 			load_infin_number("0"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("-0"),
	// 			load_infin_number("-0"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("-0"),
	// 			load_infin_number("23423423"), 0);

	// 		assert_gt_result(
	// 			load_infin_number("0"),
	// 			load_infin_number("-23423423"), 1);
	// 	})
	// })

	// DESCRIBE("infin_add", {

	// 	IT("works with two positive numbers", {
	// 		assert_add_result("1", "1", "2");
	// 		assert_add_result("1", "10", "11");

	// 		assert_add_result(
	// 			"1",
	// 			"9999999999",
	// 			"10000000000");
	// 	})

	// 	IT("works with one little negative number", {
	// 		assert_add_result(
	// 			"-1",
	// 			"9999999999",
	// 			"9999999998");
	// 	})

	// 	IT("works with one big negative number", {
	// 		assert_add_result(
	// 			"1",
	// 			"-9999999999",
	// 			"-9999999998");
	// 	})

	// 	IT("works with two negative numbers", {
	// 		assert_add_result(
	// 			"-1",
	// 			"-9999999999",
	// 			"-10000000000");

	// 		assert_add_result(
	// 			"-1",
	// 			"-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
	// 			"-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	// 	})

	// 	IT("can output null sum", {
	// 		assert_add_result("100", "-100", "0");
	// 		assert_add_result("350", "-350", "0");

	// 		assert_add_result(
	// 			"999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
	// 			"-999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
	// 			"-0");
	// 	})

	// 	IT("works with two zeros", {
	// 		assert_add_result("0", "0", "0");
	// 		assert_add_result("-0", "0", "0");
	// 		assert_add_result("-0", "-0", "0");
	// 	})
	// })

	// DESCRIBE("infin_sub", {

	// 	IT("works with two positive numbers", {
	// 		assert_sub_result(
	// 			"1",
	// 			"9999999999",
	// 			"-9999999998");
	// 	})

	// 	IT("works with one little negative number", {
	// 		assert_sub_result(
	// 			"1",
	// 			"-1",
	// 			"2");
	// 		assert_sub_result(
	// 			"-1",
	// 			"999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999",
	// 			"-1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
	// 	})

	// 	IT("works with one big negative number", {
	// 		assert_sub_result(
	// 			"1",
	// 			"-9999999999",
	// 			"10000000000");

	// 		assert_sub_result(
	// 			"1",
	// 			"-10",
	// 			"11");

	// 		assert_sub_result(
	// 			"-1",
	// 			"9999999999",
	// 			"-10000000000");
	// 	})

	// 	IT("works with two negative numbers", {
	// 		assert_sub_result(
	// 			"-1",
	// 			"-9999999999",
	// 			"9999999998");
	// 	})

	// 	IT("can output null sum", {
	// 		assert_sub_result(
	// 			"100",
	// 			"100",
	// 			"0");
	// 	})

	// 	IT("works with two zeros", {
	// 		assert_sub_result("0", "-0", "0");
	// 		assert_sub_result("-0", "-0", "0");
	// 		assert_sub_result("-0", "0", "0");
	// 	})
	// })

	// DESCRIBE("infin_number_length", {

	// 	IT("handles positive numbers", {
	// 		assert_length_result(load_infin_number("1"), 1);
	// 		assert_length_result(load_infin_number("9"), 1);
	// 		assert_length_result(load_infin_number("10"), 2);
	// 		assert_length_result(load_infin_number("100"), 3);
	// 		assert_length_result(load_infin_number("3242342353453453453454"), 22);
	// 		assert_length_result(load_infin_number("2092374092374092734092734091724091247"), 37);
	// 	})

	// 	IT("handles negative numbers", {
	// 		assert_length_result(load_infin_number("-1"), 1);
	// 		assert_length_result(load_infin_number("-9"), 1);
	// 		assert_length_result(load_infin_number("-10"), 2);
	// 		assert_length_result(load_infin_number("-100"), 3);
	// 		assert_length_result(load_infin_number("-3242342353453453453454"), 22);
	// 		assert_length_result(load_infin_number("-2092374092374092734092734091724091247"), 37);
	// 	})

	// 	IT("handles zeros", {
	// 		assert_length_result(load_infin_number("-0"), 0);
	// 		assert_length_result(load_infin_number("0"), 0);
	// 	})
	// })

})
