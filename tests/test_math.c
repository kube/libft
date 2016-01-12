
      /*#######.
     ########",#:
   #########',##".
  ##'##'## .##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

#include <ft_test_framework.h>
#include <ft_math.h>
#include <stdio.h>

static void
expect_almost_equal(const float lhs, const float rhs, const float max_delta)
{
	float		current_delta;

	current_delta = lhs - rhs;
	current_delta = current_delta < 0 ? -current_delta : current_delta;
	if (current_delta > max_delta)
	{
		printf("%s     ERROR:%s Expected %f to equal %f\n",
			TST_RED, TST_NRM, lhs, rhs);
		ft_test_assertion_fail();
	}
}


MODULE(math, ^{

	/*
	**	Adjust the max_delta variable for expected precision
	**	LIMITED_DEV_COS_SIN in <ft_math.h> defines the precision
	**/

	DESCRIBE("trigonometry", ^{

		const float	max_delta = 0.002;

		ft_test_it("has precise enough cos", ^{
			expect_almost_equal(ft_cos(FT_PI / 2), 0.0, max_delta);
			expect_almost_equal(ft_cos(FT_PI), -1.0, max_delta);
			expect_almost_equal(ft_cos(FT_PI * 4), 1.0, max_delta);
		});

		ft_test_it("has precise enough sin",  ^{
			expect_almost_equal(ft_sin(0.0), 0.0, max_delta);
			expect_almost_equal(ft_sin(FT_PI / 6), 0.5, max_delta);
			expect_almost_equal(ft_sin(FT_PI * 13 / 6), 0.5, max_delta);
			expect_almost_equal(ft_sin(FT_PI), 0.0, max_delta);
			expect_almost_equal(ft_sin(FT_PI * 4), 0.0, max_delta);
			expect_almost_equal(ft_sin(2 * FT_PI / 3), 0.86602540378, max_delta);
		});
	});


	DESCRIBE("square_roots", ^{

		const float	max_delta = 0.00001;

		ft_test_it("has precise enough inv_sqrt", ^{
			expect_almost_equal(ft_invsqrt(2), 0.70710678118, max_delta);
			expect_almost_equal(ft_invsqrt(4), 0.5, max_delta);
		});

		ft_test_it("has precise enough sqrt", ^{
			expect_almost_equal(ft_sqrt(2), 1.41421356237, max_delta);
			expect_almost_equal(ft_sqrt(4), 2.0, max_delta);
		});
	});


	DESCRIBE("fmod", ^{

		const float	max_delta = 0.00001;

		ft_test_it("works with positive numbers with no decimal value", ^{
			expect_almost_equal(ft_fmod(3.0, 2.0), 1.0, max_delta);
			expect_almost_equal(ft_fmod(13.0, 7.0), 6.0, max_delta);
			expect_almost_equal(ft_fmod(13.0, 1.0), 0.0, max_delta);
			expect_almost_equal(ft_fmod(256.0, 16.0), 0.0, max_delta);
			expect_almost_equal(ft_fmod(257.0, 16.0), 1.0, max_delta);
		});

		ft_test_it("works with positive decimal numbers", ^{
			expect_almost_equal(ft_fmod(2.0, 0.5), 0.0, max_delta);
			expect_almost_equal(ft_fmod(3.0, 2.5), 0.5, max_delta);
		});

		ft_test_it("works with positive numbers higher than integer", ^{
			expect_almost_equal(ft_fmod(9999999999999.0, 999999999999.0), 9.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 99999999999.0), 99.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 9999999999.0), 999.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 999999999.0), 9999.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 99999999.0), 99999.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 9999999.0), 999999.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 999999.0), 9.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 1.0), 0.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 2.0), 1.0, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 2.5), 1.5, max_delta);
			expect_almost_equal(ft_fmod(9999999999999.0, 2.5), 1.5, max_delta);
		});

		ft_test_it("works with negative numbers higher than integer", ^{
			expect_almost_equal(ft_fmod(9999999999999.0, -999999999999.0), 9.0, max_delta);
			expect_almost_equal(ft_fmod(-9999999999999.0, 999999999999.0), -9.0, max_delta);
			expect_almost_equal(ft_fmod(-9999999999999.0, -999999999999.0), -9.0, max_delta);
			expect_almost_equal(ft_fmod(-9999999999999.0, 1.0), 0.0, max_delta);
		});
	});

});
