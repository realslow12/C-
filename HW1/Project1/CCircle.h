#pragma once
#include "CShape.h"

class CCircle : public CShape
{
public:

	float m_r;

	CCircle()
	{
	}

	CCircle(float x, float y, float radius) : CShape(x, y)
	{
		m_x = x;
		m_y = y;
		m_r = radius;
	}

	~CCircle()
	{
	}

	void input();


	void Draw() const;
};
