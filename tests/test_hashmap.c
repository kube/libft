
      /*#######.
     ########",#:
   #########',##".
  ##'##'## .##',##.
   ## ## ## # ##",#.
    ## ## ## ## ##'
     ## ## ## :##
      ## ## ##*/

#include <ft_test_framework.h>
#include <ft_hashmap.h>

MODULE(hashmap, ^{
	
	DESCRIBE("hashmap_new", ^{
		
		ft_test_it("returns an initialized hashmap", ^{
			t_hashmap	*hashmap;
			
			hashmap = hashmap_new(512);
			ft_assert(hashmap->size == 512);
			ft_assert(hashmap->vars[0] == 0);
			ft_assert(hashmap->vars[511] == 0);
			ft_assert(hashmap->vars[42] == 0);
		});
		
	});
	
});
