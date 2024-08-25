/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:20:12 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 10:32:51 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T> void print(T const &x) {
  std::cout << x << " ";
}

int main() {
  {
    int arr[] = {1, 2, 3, 4, 5};
    ::iter(arr, sizeof(arr) / sizeof(*arr), print<int>);
    std::cout << std::endl;
  }
  return 0;
}