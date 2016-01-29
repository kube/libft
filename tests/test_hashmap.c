
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
#include "ft_hashmap.h"

SUITE(hashmap, {

	DESCRIBE("hashmap_new", {

		DESCRIBE("_new", {

			IT("returns an initialized hashmap", {
				t_hashmap	*hashmap;

				hashmap = hashmap_new(512);
				ASSERT(hashmap->size == 512)

				ASSERT(hashmap->vars[0] != NULL)
				ASSERT(hashmap->vars[511] == NULL)
				ASSERT(hashmap->vars[42] != NULL)

				// EXPECT_SIGNAL(SIGSEGV, {
					puts((void *)((unsigned long long) - 1));
				// })
			})

			IT("returns another initialized hashmap", {
				t_hashmap	*hashmap;

				hashmap = hashmap_new(512);
				ASSERT(hashmap->size == 512)

				ASSERT(hashmap->vars[0] == NULL)
				ASSERT(hashmap->vars[511] == NULL)
				ASSERT(hashmap->vars[42] == NULL)

				EXPECT_SIGNAL(SIGSEGV, {
					// puts((void *)((unsigned long long) - 1));
				})
			})
		})

	})

})
