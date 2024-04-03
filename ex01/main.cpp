/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 01:28:46 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/03 03:22:41 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"

int main()
{
    int intArr[] = {1,2,4,5,6};
    iter(intArr, (sizeof(intArr) / sizeof(int)), print);
    
    std::cout << "********************************************" << std::endl;
    float floatArr[] = {1.6 ,2.6 ,4.6 ,5.6 ,6.6 };
    iter(floatArr, (sizeof(floatArr) / sizeof(float)), print);
    
    std::cout << "********************************************" << std::endl;
    
    char charArr[] = "hello";
    iter(charArr, (sizeof(charArr) / sizeof(char)), print);
    return 0;
}
