/**
 * Done by:
 * Student Name: Nikita Kompanchenko
 * Student Group: 123
 * Lab 1.4
 */

#include <iostream>


int main()
{
	unsigned short nA;
	int nB;
	float nC;
	double nD;
	// Description of variables of predefined types

	unsigned short* pnA;
	int* pnB;
	float* pnC;
	double* pnD;
	//Description of the pointer variables of the corresponding types

	void* p_void;
	//Description of an untyped pointer variable

	pnA = &nA;
	pnB = &nB;
	pnC = &nC;
	pnD = &nD;
	//Initiating pointed variables with variable addresses

	*pnA = 45671;
	*pnB = 167;
	*pnC = -3.9412;
	*pnD = -6.8e-6;
	//Initiating variables with values using the operation of dereferencing pointing variables

	int sizeShort = sizeof(nA);
	int sizeShortP = sizeof(pnA);
	int sizeInt = sizeof(nB);
	int sizeIntP = sizeof(pnB);
	int sizeFloat = sizeof(nC);
	int sizeFloatP = sizeof(pnC);
	int sizeDouble = sizeof(nD);
	int sizeDoubleP = sizeof(pnD);
	int sizeVoid = sizeof(p_void);
	//Sizing all program variables

	p_void = pnA;
	p_void = pnB;
	p_void = pnC;
	p_void = pnD;
	//Initiating an untyped pointer variable with addresses of typed pointer variables

	int& linkB = nB;
	//Link description

	return 0;
}