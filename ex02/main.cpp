/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:53:57 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 11:03:30 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(int, char **) {
  { Array<int> a; }
  {
    Array<int> a(5);
    try {
      for (unsigned int i = 0;; i++)
        a[i] = i;
    } catch (const std::exception &e) {
      std::cerr << e.what() << '\n';
    }
    for (unsigned int i = 0; i < a.size(); i++)
      std::cout << a[i] << ", ";
    std::cout << std::endl;
    Array<int> b(a);
    for (unsigned int i = 0; i < a.size(); i++)
      std::cout << b[i] << ", ";
    std::cout << std::endl;
  }
  {
    Array<std::string> a(3);
    a[0] = "Hello";
    a[1] = "World";
    a[2] = "!";
    for (unsigned int i = 0; i < a.size(); i++)
      std::cout << a[i] << ", ";
    std::cout << std::endl;
  }
  return 0;
}