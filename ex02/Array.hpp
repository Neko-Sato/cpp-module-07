/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:34:57 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 10:51:21 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

template <typename T> class Array {
private:
  unsigned int _size;
  T *_array;

public:
  Array();
  Array(unsigned int n);
  Array(Array const &other);
  ~Array();
  Array &operator=(Array const &other);
  T &operator[](unsigned int i);
  T const &operator[](unsigned int i) const;
  unsigned int size() const;
};

#include "Array.tpp"

#endif
