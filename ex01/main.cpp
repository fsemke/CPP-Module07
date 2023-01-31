/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsemke <fsemke@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:26:31 by fsemke            #+#    #+#             */
/*   Updated: 2023/01/23 12:07:23 by fsemke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void print(T &num) {
	std::cout << num << std::endl;
}

void increase(int &num) {
	num++;
}

int main() {
	std::cout << "Int test" << std::endl;
	int list[] = {2, 256, 76};
	::iter(list, 3, &print);
	::iter(list, 3, &increase);
	std::cout << std::endl;
	::iter(list, 3, &print);

	std::cout << std::endl << "String test" << std::endl;
	std::string stringList[] = {"Hello", "you are great", "Thank you"};
	iter(stringList, 3, &print);
}