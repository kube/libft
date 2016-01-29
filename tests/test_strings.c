
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

#include <strings.h>
#include "cut_framework.h"
#include "ft_strings.h"

SUITE(strings, {

	DESCRIBE("ft_strtrim", {

		IT("works with null pointer", {
			ASSERT((int)ft_strtrim(NULL) == 0)
		})

		IT("works with empty string", {
			ASSERT(strcmp(ft_strtrim(""), "") == 0)
		})

		IT("works with spaces-only string", {
			ASSERT(strcmp(ft_strtrim(" "), "") == 0)
			ASSERT(strcmp(ft_strtrim("\t"), "") == 0)
			ASSERT(strcmp(ft_strtrim("\n"), "") == 0)
			ASSERT(strcmp(ft_strtrim("\t\n \v"), "") == 0)
		})

		IT("works with spaces at start", {
			ASSERT(strcmp(ft_strtrim(" Hello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\tHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\nHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\t\nHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\n\vHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("  \n \vHello"), "Hello") == 0)
		})

		IT("works with spaces at end", {
			ASSERT(strcmp(ft_strtrim(" Hello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\tHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\nHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\t\nHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("\n\vHello"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim("  \n \vHello"), "Hello") == 0)
		})

		IT("works with spaces at start and at end", {
			ASSERT(strcmp(ft_strtrim(" Hello "), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim(" Hello \t"), "Hello") == 0)
			ASSERT(strcmp(ft_strtrim(" Hello \t\n"), "Hello") == 0)
		})

		IT("works with spaces in the middle", {
			ASSERT(strcmp(ft_strtrim("Hello World"), "Hello World") == 0)
			ASSERT(strcmp(ft_strtrim("Hello  World"), "Hello  World") == 0)
			ASSERT(strcmp(ft_strtrim("Hello \tWorld"), "Hello \tWorld") == 0)
		})

		IT("works with carriage return in middle of text", {
			ASSERT(strcmp(ft_strtrim("Hello\nWorld"), "Hello\nWorld") == 0)
			ASSERT(strcmp(ft_strtrim(
				"\t Hello\n World \n \t"), "Hello\n World") == 0)
			ASSERT(strcmp(ft_strtrim(
				"\t\n  \tHello \t World\t\n  \t"), "Hello \t World") == 0)
		})
	})

})
