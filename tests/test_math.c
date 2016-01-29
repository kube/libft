
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

#define ABS(a) (((a) < 0) ? -(a) : (a))
#define	APPROX(lhs, rhs) ((ABS(lhs - rhs)) < max_delta)


SUITE(math, {

	/*
	**	Adjust the max_delta variable for expected precision
	**	LIMITED_DEV_COS_SIN in <ft_math.h> defines the precision
	*/

	DESCRIBE("trigonometry", {
		const float	max_delta = 0.002;

		IT("has precise enough cos", {
			ASSERT(APPROX(ft_cos(FT_PI / 2), 0.0))
			ASSERT(APPROX(ft_cos(FT_PI), -1.0))
			ASSERT(APPROX(ft_cos(FT_PI * 4), 1.0))
		})

		IT("has precise enough sin", {
			ASSERT(APPROX(ft_sin(0.0), 0.0))
			ASSERT(APPROX(ft_sin(FT_PI / 6), 0.5))
			ASSERT(APPROX(ft_sin(FT_PI * 13 / 6), 0.5))
			ASSERT(APPROX(ft_sin(FT_PI), 0.0))
			ASSERT(APPROX(ft_sin(FT_PI * 4), 0.0))
			ASSERT(APPROX(ft_sin(2 * FT_PI / 3), 0.86602540378))
		})
	})


	DESCRIBE("square_roots", {
		const float	max_delta = 0.00001;

		IT("has precise enough inv_sqrt", {
			ASSERT(APPROX(ft_invsqrt(2), 0.70710678118))
			ASSERT(APPROX(ft_invsqrt(4), 0.5))
		})

		IT("has precise enough sqrt", {
			ASSERT(APPROX(ft_sqrt(2), 1.41421356237))
			ASSERT(APPROX(ft_sqrt(4), 2.0))
		})
	})


	DESCRIBE("fmod", {
		const float	max_delta = 0.00001;

		IT("works with positive numbers with no decimal value", {
			ASSERT(APPROX(ft_fmod(3.0, 2.0), 1.0))
			ASSERT(APPROX(ft_fmod(13.0, 7.0), 6.0))
			ASSERT(APPROX(ft_fmod(13.0, 1.0), 0.0))
			ASSERT(APPROX(ft_fmod(256.0, 16.0), 0.0))
			ASSERT(APPROX(ft_fmod(257.0, 16.0), 1.0))
		})

		IT("works with positive decimal numbers", {
			ASSERT(APPROX(ft_fmod(2.0, 0.5), 0.0))
			ASSERT(APPROX(ft_fmod(3.0, 2.5), 0.5))
		})

		IT("works with positive numbers higher than integer", {
			ASSERT(APPROX(ft_fmod(9999999999999.0, 999999999999.0), 9.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 99999999999.0), 99.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 9999999999.0), 999.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 999999999.0), 9999.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 99999999.0), 99999.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 9999999.0), 999999.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 999999.0), 9.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 1.0), 0.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 2.0), 1.0))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 2.5), 1.5))
			ASSERT(APPROX(ft_fmod(9999999999999.0, 2.5), 1.5))
		})

		IT("works with negative numbers higher than integer", {
			ASSERT(APPROX(ft_fmod(9999999999999.0, -999999999999.0), 9.0))
			ASSERT(APPROX(ft_fmod(-9999999999999.0, 999999999999.0), -9.0))
			ASSERT(APPROX(ft_fmod(-9999999999999.0, -999999999999.0), -9.0))
			ASSERT(APPROX(ft_fmod(-9999999999999.0, 1.0), 0.0))
		})
	})

})
