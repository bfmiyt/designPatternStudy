#pragma once
class ShapeFactory
{
public:
	ShapeFactory();
	~ShapeFactory();

	IShape* getShape(string shapeType);
};

