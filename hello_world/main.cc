/*
 * main.cc
 *
 *  Created on: 15 сент. 2020 г.
 *      Author: nito
 */
#include <iostream>
#include <cmath>

constexpr double Pi = acos(-1.);

int main()
{
	std::cout << "Привет, мир" << std::endl;
	std::cout << "А сейчас  будем находить длину окружности и площадь круга" << std::endl;

	std::cout << "Введите радиус окружности: ";
	double radius;
	std::cin >> radius;

	double
	length = 2 * Pi * radius,
	area = Pi * radius * radius;

	std:: cout<<
			"Длина окружности = " << length << std::endl <<
			"Площадь круга = " << area << std::endl;

	return 0;
}



