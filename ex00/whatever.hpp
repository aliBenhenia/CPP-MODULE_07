/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:36:33 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/21 00:43:26 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T &x, T &y)
{
    T tmp;

    tmp = x;
    x = y;
    y = tmp;
}

template <typename T>
T min(T x, T y)
{
    if (x < y)
        return (x);
    return (y);
}

template <typename T>
T max(T x, T y)
{
    if (x < y)
        return (y);
    return (x);
}

#endif