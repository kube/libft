/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_framework.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 19:39:24 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/01 01:49:54 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TEST_FRAMEWORK_H
# define FT_TEST_FRAMEWORK_H

# define TST_NRM	"\x1B[0m"
# define TST_RED	"\x1B[31m"
# define TST_GRN	"\x1B[32m"
# define TST_YEL	"\x1B[33m"
# define TST_BLU	"\x1B[34m"
# define TST_MAG	"\x1B[35m"
# define TST_CYN	"\x1B[36m"
# define TST_WHT	"\x1B[37m"
# define TST_SLT	"\x1B[30;01m"

struct	s_test_state
{
	const char *describe;
	const char *it;

	unsigned int	describe_count;
	unsigned int	it_count;
	unsigned int	current_describe_it_count;

	unsigned int	errors_count;
	unsigned int	current_describe_errors_count;
	unsigned int	current_it_errors_count;
};

struct s_test_state	testing_state;

void	ft_test_init();
void	ft_test_module(const char *name, void (f)());
void	ft_test_describe(const char *name, void (f)());
void	ft_test_it(const char *name);
void	ft_test_assertion_fail();
void	ft_test_end();

#endif
