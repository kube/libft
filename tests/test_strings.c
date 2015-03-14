/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/14 17:48:10 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/14 18:47:56 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>
#include <ft_strings.h>
#include <stdio.h>

static void		expect_equal(const int lhs, const int rhs)
{
	if (lhs != rhs)
		ft_test_assertion_fail();
}

static void		describe_ft_strtrim()
{
	ft_test_it("works with null pointer");
		expect_equal((int)ft_strtrim(NULL), 0);

	ft_test_it("works with empty string");
		expect_equal(ft_strcmp(ft_strtrim(""), ""), 0);

	ft_test_it("works with spaces-only string");
		expect_equal(ft_strcmp(ft_strtrim(" "), ""), 0);
		expect_equal(ft_strcmp(ft_strtrim("\t"), ""), 0);
		expect_equal(ft_strcmp(ft_strtrim("\n"), ""), 0);
		expect_equal(ft_strcmp(ft_strtrim("\t\n \v"), ""), 0);

	ft_test_it("works with spaces at start");
		expect_equal(ft_strcmp(ft_strtrim(" Hello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\tHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\nHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\t\nHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\n\vHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("  \n \vHello"), "Hello"), 0);

	ft_test_it("works with spaces at end");
		expect_equal(ft_strcmp(ft_strtrim(" Hello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\tHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\nHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\t\nHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\n\vHello"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim("  \n \vHello"), "Hello"), 0);

	ft_test_it("works with spaces at start and at end");
		expect_equal(ft_strcmp(ft_strtrim(" Hello "), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim(" Hello \t"), "Hello"), 0);
		expect_equal(ft_strcmp(ft_strtrim(" Hello \t\n"), "Hello"), 0);

	ft_test_it("works with spaces in the middle");
		expect_equal(ft_strcmp(ft_strtrim("Hello World"), "Hello World"), 0);
		expect_equal(ft_strcmp(ft_strtrim("Hello  World"), "Hello  World"), 0);
		expect_equal(ft_strcmp(ft_strtrim("Hello \tWorld"), "Hello \tWorld"), 0);

	ft_test_it("works with carriage return in middle of text");
		expect_equal(ft_strcmp(ft_strtrim("Hello\nWorld"), "Hello\nWorld"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\t Hello\n World \n \t"), "Hello\n World"), 0);
		expect_equal(ft_strcmp(ft_strtrim("\t\n  \tHello \t World\t\n  \t"), "Hello \t World"), 0);

}

void	test_strings()
{
	ft_test_describe("ft_strtrim", describe_ft_strtrim);
}
