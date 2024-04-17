/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:34:44 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/17 14:48:17 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <class T>
class Array
{
    private:
        T       *data;
        size_t  len;
    public:
        Array()
        {
            data = NULL;
            len = 0;
        }
        Array(Array &obj)
        {
            int i;

            i = 0;
            len = obj.len;
            data = new T[len];
            while (i < len)
            {
                data[i] = obj.data[i];
                i++;
            }
        }
        Array(unsigned int n)
        {
            len = n;
            int i;
        
            i = 0;
            data = new T[n];
            while (i < n)
            {
               data[i] = T();
               i++; 
            }
        }
        Array& operator=(const Array& obj)
        {
            int i;

            i = 0;
            len = obj.len;
            data = new T[len];
            while (i < len)
            {
                data[i] = obj.data[i];
                i++;
            }
            return (*this);
        }
        // Subscript operator
        T& operator[](unsigned int index)
        {
            if (index >= len)
                throw std::out_of_range("invalid Index ");
            return (data[index]);
        }
        size_t size() const
        {
            return (len);
        }
        ~Array()
        {
            delete[] data;
        }
};

#endif