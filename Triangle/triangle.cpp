#include "triangle.h"

Triangle::Triangle()
{

	std::cout << "������ ����������� �� ���������";
}

unsigned short Triangle::get_angle(unsigned short num)
{
	if ((num <= 0) || (num > 3))
	{
		std::cout << "������� ����� ���� (1, 2 ��� 3)" << "\n";
	}
	if (num == 1)
	{
		return angle_1;
	}
	if (num == 2)
	{
		return angle_2;
	}
	if (num == 3)
	{
		return angle_3;
	}
}

unsigned short Triangle::get_side(unsigned short num)
{
	if ((num <= 0) || (num > 3))
	{
		std::cout << "������� ����� ������� (1, 2 ��� 3)" << "\n";
	}
	if (num == 1)
	{
		return side_1;
	}
	if (num == 2)
	{
		return side_2;
	}
	if (num == 3)
	{
		return side_3;
	}
}

void Triangle::set_angle(unsigned short num, unsigned short value)
{
	if (value <= 0)
	{
		std::cout << "������� ������������� ��������" << "\n";
	}
	if (num == 1)
	{
		angle_1 = value;
	}
	if (num == 2)
	{
		angle_2 = value;
	}
	if (num == 3)
	{
		angle_3 = value;
	}
}

void Triangle::set_side(unsigned short num, unsigned short value)
{
	if (value <= 0)
	{
		std::cout << "������� ������������� ��������" << "\n";
	}
	if (num == 1)
	{
		side_1 = value;
	}
	if (num == 2)
	{
		side_2 = value;
	}
	if (num == 3)
	{
		side_3 = value;
	}
}

double Triangle::area()
{
	return (0.5*side_1*side_2*angle_1);
}

unsigned short Triangle::perimeter()
{
	return (side_1 + side_2 + side_3);
}

void Triangle::type()
{
	if (side_1 == side_2 == side_3)
	{
		std::cout << "����������� ��������������";
	}
	//
	if (side_1 == side_2)
	{
		std::cout << "����������� ��������������, ����� ������� 1 � 2";
	}
	if (side_2 == side_3)
	{
		std::cout << "����������� ��������������, ����� ������� 2 � 3";
	}
	if (side_1 == side_3)
	{
		std::cout << "����������� ��������������, ����� ������� 1 � 3";
	}
	//
	if (angle_1 == 90)
	{
		std::cout << "����������� ������������� � ������ ����� 1";
	}
	if (angle_2 == 90)
	{
		std::cout << "����������� ������������� � ������ ����� 2";
	}
	if (angle_3 == 90)
	{
		std::cout << "����������� ������������� � ������ ����� 3";
	}
	//
	if ((side_1 != side_2 != side_3) && (angle_1 != 90) && (angle_2 != 90) && (angle_3 != 90))
	{
		std::cout << "����������� ������ ����";
	}
}
