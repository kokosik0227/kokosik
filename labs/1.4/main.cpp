#include <iostream>


int main()
{
	unsigned short nA;
	int nB;
	float nC;
	double nD;
	// ���� ������ ����������������� ����

	unsigned short* pnA;
	int* pnB;
	float* pnC;
	double* pnD;
	//���� �������� ������ ��������� ����

	void* p_void;
	//���� ����������� ������� �����

	pnA = &nA;
	pnB = &nB;
	pnC = &nC;
	pnD = &nD;
	//���������� �������� ������ �������� ������

	*pnA = 45671;
	*pnB = 167;
	*pnC = -3.9412;
	*pnD = -6.8e-6;
	// ���������� ������ ����������, �������������� �������� ������������ �������� ������

	int sizeShort = sizeof(nA);
	int sizeShortP = sizeof(pnA);
	int sizeInt = sizeof(nB);
	int sizeIntP = sizeof(pnB);
	int sizeFloat = sizeof(nC);
	int sizeFloatP = sizeof(pnC);
	int sizeDouble = sizeof(nD);
	int sizeDoubleP = sizeof(pnD);
	int sizeVoid = sizeof(p_void);
	//���������� ������ ��� ������ ��������

	p_void = pnA;
	p_void = pnB;
	p_void = pnC;
	p_void = pnD;
	//���������� ����������� ������� ����� �������� ���������� �������� ������

	int& linkB = nB;
	//���� ���������

	return 0;
}