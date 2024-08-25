/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:51:28 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 11:05:01 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <exception>
#include <stdexcept>

template <typename T> Array<T>::Array() : _size(0), _array(NULL) {
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]) {
}

template <typename T>
Array<T>::Array(Array const &other)
    : _size(other._size), _array(new T[other._size]) {
  for (unsigned int i = 0; i < _size; i++)
    _array[i] = other._array[i];
}

template <typename T> Array<T>::~Array() {
  delete[] _array;
}

template <typename T> Array<T> &Array<T>::operator=(Array<T> const &other) {
  if (this != &other) {
    {
      T *tmp = new T[other._size];
      delete[] _array;
      _array = tmp;
      _size = other._size;
    }
    for (unsigned int i = 0; i < other._size; i++)
      _array[i] = other._array[i];
  }
  return *this;
}

template <typename T> T &Array<T>::operator[](unsigned int i) const {
  if (i >= _size)
    throw std::out_of_range("Index out of range");
  return _array[i];
}

template <typename T> unsigned int Array<T>::size(void) const {
  return _size;
}
