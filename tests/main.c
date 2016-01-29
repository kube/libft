
      /*#######.
     ########",#:
   #########',##".
  ##'##'## .##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

#include <ft_test_framework.h>

int main()
{
	TEST_INIT();

	TEST_SUITE(strings);
	TEST_SUITE(math);
	TEST_SUITE(hashmap);
	TEST_SUITE(infin_number);

	TEST_END();
	return 0;
}
