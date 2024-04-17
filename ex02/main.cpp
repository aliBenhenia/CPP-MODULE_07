/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:34:25 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/17 18:03:28 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        // Test default constructor
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        // Test constructor with size parameter
        Array<int> arr2(5);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        // Test copy constructor and assignment operator
        Array<int> arr3 = arr2;
        std::cout << "arr3 size: " << arr3.size() << std::endl;

        // Test subscript operator
        arr3[0] = 10;
        arr3[1] = 20;
        arr3[2] = 30;
        std::cout << "arr3[0]: " << arr3[0] << std::endl;
        std::cout << "arr3[1]: " << arr3[1] << std::endl;
        std::cout << "arr3[2]: " << arr3[2] << std::endl;
        
        // Test out-of-bounds access
        arr3[5] = 100;
    }
    catch(const std::exception &e)
    {
        std::cout << "out of range :" << e.what() << std::endl;
    }
    return 0;
}
