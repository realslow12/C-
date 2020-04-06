#include "CRectangle.h"

void CRectangle::input()
{
	cin >> m_x;
	cin >> m_y;
	cin >> m_w;
	cin >> m_h;
}

void CRectangle::Draw() const
{
	cout << "[Rectangle] Position = <" << m_x << ", " << m_y << ">, Size = <" << m_w << ", " << m_h << ">" << endl;
}
