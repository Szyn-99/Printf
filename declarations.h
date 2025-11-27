/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declarations.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymel-ha <aymel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:52:09 by aymel-ha          #+#    #+#             */
/*   Updated: 2025/11/27 13:25:57 by aymel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECLARATIONS_H
# define DECLARATIONS_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	specifier_c(char c);
size_t	specifier_d(int number);
size_t	specifier_s(char *s);
size_t	specifier_x(size_t n);
size_t	specifier_x_uppercase(size_t n);
size_t	specifier_p(void *pointer);
size_t	specifier_i(long n);
size_t	specifier_u(unsigned int n);

#endif
