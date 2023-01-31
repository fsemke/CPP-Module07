/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsemke <fsemke@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:09:36 by fsemke            #+#    #+#             */
/*   Updated: 2023/01/31 13:52:33 by fsemke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdlib.h>
#include <iostream>


template<typename T>
class Array {
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array<T>() : _array(new T[0]), _size(0) {
			std::cout << "Default constructor called" << std::endl;
		}
		Array<T>(unsigned int n) : _array(new T[n]), _size(n) {
			std::cout << "Int constructor called" << std::endl;
		}
		~Array<T>() {
			std::cout << "Destructor called" << std::endl;
			delete []this->_array;
		}
		Array<T>(const Array<T> &other) : _array(new T[other._size]), _size(other._size) {
			std::cout << "Copy constructor called" << std::endl;
			for(unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = other[i];
			}
		}
		
		Array<T> &operator=(const Array<T> &other) {
			std::cout << "Assignment operator called" << std::endl;
			if (this == &other)
				return *this;
			if (this->_size > 0)
				delete []this->_array;
			this->_size = other._size;
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = other[i];
			}
			return *this;
		}
		T &operator[](unsigned const int idx) const {
			if (idx >= this->_size) {
				throw std::exception();
			}
			return (this->_array[idx]);
		}

		unsigned int size() const {
			return(this->_size);
		}
};

#endif