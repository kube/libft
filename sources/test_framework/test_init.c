/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 21:46:27 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/02/28 21:47:39 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>

void		ft_test_init(void)
{
	testing_state.describe = 0;
	testing_state.it = 0;
	testing_state.describe_count = 0;
	testing_state.it_count = 0;
	testing_state.current_describe_it_count = 0;
	testing_state.errors_count = 0;
	testing_state.current_describe_errors_count = 0;
	testing_state.current_it_errors_count = 0;
}
