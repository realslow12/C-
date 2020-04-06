#include "CCircle.h"

void CCircle::input()
{
	cin >> m_x;
	cin >> m_y;
	cin >> m_r;
}

void CCircle::Draw() const
{
	cout << "[Circle] Position = <" << m_x << ", " << m_y << ">, Radius = < " << m_r << ">" <<endl;
}
