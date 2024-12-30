/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:53:57 by hshimizu          #+#    #+#             */
/*   Updated: 2024/12/30 11:07:00 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdio>
#include <iostream>

int main(int, char **) {
  {
    Array<std::string> a(5);
    Array<std::string> b;
    Array<std::string> c(1);
    Array<std::string> d(10);
    Array<std::string> e(5);
    for (unsigned int i = 0; i < a.size(); i++) {
      char buf[100];
      sprintf(buf, "hello %u", a.size() - i);
      a[i] = std::string(buf);
    }
    e = d = c = b = a;
    for (unsigned int i = 0; i < b.size(); i++)
      std::cout << b[i] << ", ";
    std::cout << std::endl;
    for (unsigned int i = 0; i < c.size(); i++)
      std::cout << c[i] << ", ";
    std::cout << std::endl;
    for (unsigned int i = 0; i < d.size(); i++)
      std::cout << d[i] << ", ";
    std::cout << std::endl;
    for (unsigned int i = 0; i < e.size(); i++)
      std::cout << e[i] << ", ";
    std::cout << std::endl;
  }
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
    // Array<std::string> const &b = a;
    // b[2] = "Error!";
  }
  return 0;
}