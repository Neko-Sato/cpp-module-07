/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:59:10 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 10:14:08 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main() {
  {
    int a(2);
    int b(3);
    std::cout << "min = " << ::min(a, b) << ", max = " << ::max(a, b)
              << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
  }
  {
    float a(2.9);
    float b(3.1);
    std::cout << "min = " << ::min(a, b) << ", max = " << ::max(a, b)
              << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
  }
  {
    float const a(2.9);
    float const b(3.1);
    std::cout << "min = " << ::min(a, b) << ", max = " << ::max(a, b)
              << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
  }
  {
    std::string a("abc");
    std::string b("cde");
    std::cout << "min = " << ::min(a, b) << ", max = " << ::max(a, b)
              << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
  }
  return 0;
}