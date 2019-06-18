// FactoryPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ShapeFactory.h"

int main()
{
	ShapeFactory *factory = new ShapeFactory();
	factory->getShape("circle")->draw();
	factory->getShape("rectangle")->draw();
	factory->getShape("square")->draw();

	system("pause");
    return 0;
}

