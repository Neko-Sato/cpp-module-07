/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 09:55:28 by hshimizu          #+#    #+#             */
/*   Updated: 2024/08/25 10:15:54 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template <typename T> void swap(T &a, T &b) {
  T tmp(a);
  a = b;
  b = tmp;
}

template <typename T> T &min(T &a, T &b) {
  return (a < b) ? a : b;
}

template <typename T> T &max(T &a, T &b) {
  return (a > b) ? a : b;
}

#endif