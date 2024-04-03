/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:40:31 by abenheni          #+#    #+#             */
/*   Updated: 2024/04/03 02:03:16 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"
#include <string>
#include <iostream>

int main( void )
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    
    float e = 2.2;
    float f = 3.3;
    swap( e, f );
    std::cout << "e = " << e << ", f = " << f << std::endl;
    std::cout << "min( e, f ) = " << min( e, f ) << std::endl;
    std::cout << "max( e, f ) = " << max( e, f ) << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    
    return (0);
}