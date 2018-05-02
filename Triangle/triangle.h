#pragma once
#include <iostream>


class __declspec(dllexport) Triangle
{
private:
	// Углы:
	unsigned short angle_1 = 0;
	unsigned short angle_2 = 0;
	unsigned short angle_3 = 0;
	// Стороны
	unsigned short side_1 = 0;
	unsigned short side_2 = 0;
	unsigned short side_3 = 0;

public:

	Triangle(); // Конструктор по умолчанию

public:
	unsigned short get_angle(unsigned short num);
	unsigned short get_side(unsigned short num);
	void set_angle(unsigned short num, unsigned short value);
	void set_side(unsigned short num, unsigned short value);
	double area();
	unsigned short perimeter();
	void type();
};