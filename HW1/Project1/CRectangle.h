#pragma once
#include "CShape.h"

class CRectangle : public CShape
{

public:

	float m_w;
	float m_h;

	CRectangle()
	{
	}

	CRectangle(float x, float y, float w, float h) :CShape(x, y)
	{
		m_x = x;
		m_y = y;
		m_w = w;
		m_h = h;
	}

	~CRectangle()
	{
	}

	void Draw() const;

	void input();
};