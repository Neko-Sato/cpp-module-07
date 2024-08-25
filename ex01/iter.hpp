/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:17:51 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 10:27:15 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <cstddef>

template <typename T, typename F> void iter(T *array, size_t size, F f) {
  for (size_t i = 0; i < size; i++) {
    f(array[i]);
  }
}

#endif
