/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 01:24:47 by abenheni          #+#    #+#             */
/*   Updated: 2024/03/21 01:56:47 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*func)(T el))
{
    size_t i;

    i = 0;
    while (i < len)
    {
        func(arr[i]);
        i++;
    }
}

template<typename T>
void print(const T element)
{
    std::cout << element << std::endl;
}

#endif