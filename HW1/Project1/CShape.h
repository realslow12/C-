#pragma once
#include <iostream>
using namespace std;

class CShape
{
public:
	int m_x;
	int	m_y;

	CShape();

	CShape(int x, int y);

	virtual ~CShape();

	virtual void Draw() const;

	virtual void input();
};

