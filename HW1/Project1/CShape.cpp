#include "CShape.h"

CShape::CShape()
{
}

CShape::CShape(int x, int y)
{
	m_x = x;
	m_y = y;
}

CShape::~CShape()
{
}


void CShape::input()
{
	cin >> m_x;
	cin >> m_y;
}


void CShape::Draw() const
{
	cout << "[Shape] Position = <" << m_x << ", " << m_y << ">" << endl;
}
