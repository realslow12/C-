#include "CShape.h"
#include "CRectangle.h"
#include "CCircle.h"

int main()
{
	CShape* pShapeArray[10] = {};
	int		iCount = 0;
	bool	bLoop = true;

	while (bLoop)
	{
		cout << "번호를 입력하세요: ";
		int Input = 0;
		cin >> Input;

		switch (Input)
		{
		case 1:
			pShapeArray[iCount] = new CShape;
			pShapeArray[iCount]->input();

			++iCount;
			break;
		case 2:
			pShapeArray[iCount] = new CRectangle;
			pShapeArray[iCount]->input();

			++iCount;
			break;
		case 3:
			pShapeArray[iCount] = new CCircle;
			pShapeArray[iCount]->input();

			++iCount;
			break;
		case 4:
		{
			for (int i = 0; i < iCount; ++i)
			{
				pShapeArray[i]->Draw();
			}
		}
		break;
		case 5:
			bLoop = false;
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < iCount; ++i)
	{
		delete	pShapeArray[i];
	}
	return 0;
}