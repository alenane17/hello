/*
 * main.cc
 *
 *  Created on: 15 ����. 2020 �.
 *      Author: nito
 */
#include <iostream>
#include <cmath>

constexpr double Pi = acos(-1.);

int main()
{
	std::cout << "������, ���" << std::endl;
	std::cout << "� ������  ����� �������� ����� ���������� � ������� �����" << std::endl;

	std::cout << "������� ������ ����������: ";
	double radius;
	std::cin >> radius;

	double
	length = 2 * Pi * radius,
	area = Pi * radius * radius;

	std:: cout<<
			"����� ���������� = " << length << std::endl <<
			"������� ����� = " << area << std::endl;

	return 0;
}



