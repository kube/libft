/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assertion_fail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 01:43:49 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/01 02:05:27 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_test_framework.h>

void			ft_test_assertion_fail(void)
{
	testing_state.current_describe_errors_count++;
	testing_state.current_it_errors_count++;
	testing_state.errors_count++;
}
