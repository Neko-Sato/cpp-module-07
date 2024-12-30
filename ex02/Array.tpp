/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:51:28 by hshimizu          #+#    #+#             */
/*   Updated: 2024/12/30 10:53:44 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstddef>
#include <exception>
#include <stdexcept>

template <typename T> Array<T>::Array() : _size(0), _array(NULL) {
}

template <typename T>
Array<T>::Array(unsigned int n)
    : _size(n), _array(reinterpret_cast<T *>(::operator new[](sizeof(T[n])))) {
  for (unsigned int i = 0; i < n; i++)
    new (&_array[i]) T();
}

template <typename T>
Array<T>::Array(Array const &other)
    : _size(other._size),
      _array(reinterpret_cast<T *>(::operator new[](sizeof(T[_size])))) {
  for (unsigned int i = 0; i < _size; i++)
    new (&_array[i]) T(other._array[i]);
}

template <typename T> Array<T>::~Array() {
  for (unsigned int i = 0; i < _size; i++)
    _array[i].~T();
  ::operator delete[](_array);
}

template <typename T> Array<T> &Array<T>::operator=(Array<T> const &other) {
  if (this != &other) {
    if (_size != other._size) {
      T *tmp = reinterpret_cast<T *>(::operator new[](sizeof(T[other._size])));
      for (unsigned int i = 0; i < other._size; i++)
        new (&tmp[i]) T(other._array[i]);
      for (unsigned int i = 0; i < _size; i++)
        _array[i].~T();
      ::operator delete[](_array);
      _size = other._size;
      _array = tmp;
    } else {
      for (unsigned int i = 0; i < _size; i++)
        _array[i] = other._array[i];
    }
  }
  return *this;
}

template <typename T> T &Array<T>::operator[](unsigned int i) {
  if (i >= _size)
    throw std::out_of_range("Index out of range");
  return _array[i];
}

template <typename T> T const &Array<T>::operator[](unsigned int i) const {
  if (i >= _size)
    throw std::out_of_range("Index out of range");
  return _array[i];
}

template <typename T> unsigned int Array<T>::size(void) const {
  return _size;
}
