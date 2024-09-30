#include <iostream>


int main()
{
	unsigned short nA;
	int nB;
	float nC;
	double nD;
	// Опис змінних напередвизначених типів

	unsigned short* pnA;
	int* pnB;
	float* pnC;
	double* pnD;
	//Опис вказівних змінних відповідних типів

	void* p_void;
	//Опис нетипізованої вказівної змінної

	pnA = &nA;
	pnB = &nB;
	pnC = &nC;
	pnD = &nD;
	//Ініціювання вказівних змінних адресами змінних

	*pnA = 45671;
	*pnB = 167;
	*pnC = -3.9412;
	*pnD = -6.8e-6;
	// Ініціювання змінних значеннями, використовуючи операцію розіменування вказівних змінних

	int sizeShort = sizeof(nA);
	int sizeShortP = sizeof(pnA);
	int sizeInt = sizeof(nB);
	int sizeIntP = sizeof(pnB);
	int sizeFloat = sizeof(nC);
	int sizeFloatP = sizeof(pnC);
	int sizeDouble = sizeof(nD);
	int sizeDoubleP = sizeof(pnD);
	int sizeVoid = sizeof(p_void);
	//Визначення розміру всіх змінних програми

	p_void = pnA;
	p_void = pnB;
	p_void = pnC;
	p_void = pnD;
	//Ініціювання нетипізованої вказівної змінної адресами типізованих вказівних змінних

	int& linkB = nB;
	//Опис посилання

	return 0;
}