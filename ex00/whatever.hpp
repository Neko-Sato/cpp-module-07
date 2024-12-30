/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:55:28 by hshimizu          #+#    #+#             */
/*   Updated: 2024/12/30 11:31:15 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

#include <cstddef>

template <typename T> void swap(T &a, T &b) {
  T tmp(a);
  a = b;
  b = tmp;
}

template <typename T, std::size_t N> void swap(T (&a)[N], T (&b)[N]) {
  for (std::size_t i = 0; i < N; ++i) {
    swap(a[i], b[i]);
  }
}

template <typename T> T &min(T &a, T &b) {
  return (a < b) ? a : b;
}

template <typename T> T const &min(T const &a, T const &b) {
  return (a < b) ? a : b;
}

template <typename T> T &max(T &a, T &b) {
  return (a > b) ? a : b;
}

template <typename T> T const &max(T const &a, T const &b) {
  return (a > b) ? a : b;
}

#endif