#include <iostream>

int main()
{
	char chVar1;
	chVar1 = 'R';
	char chVar2 = '7';

	char chVar3;
	chVar3 = 0x32; // ������ '2' � ������� ASCII
	char chVar4 = 0x63; // ������ 'c' � ������� ASCII

	const char CONST1 = '>';
	const char CONST2 = 0x1a; // SUB � ������� ASCII

	// Part 2

// Task 1: ���� ������ int, float, unsigned short
	int a;
	float b;
	unsigned short c;

	// Task 2: ����������� ������ � �.1 
	a = 682;
	b = -8.4e2; // 1.23 * 10^4 = 12300.0
	c = 25921;

	// Task 3: ���� ������ double, int, char
	double d;
	int e;
	char f;

	// Task 4.1: ����������� � ������� ����������� ����
	d = a;    // int -> double
	e = b;    // float -> int (������ ������� �������)
	f = c;    // unsigned short -> char (������� ������ �����, ���� c > 127)


	// Task 4.2: ����������� � ����� ����������� ����
	d = (double)a;
	e = (int)b;
	f = (char)c;


	// Task 4.3: ����������� � ������� ������ �������� 
	void* pV;  // void �������� (������������)

	double* pD;
	pV = &a;       // pV ����� �� ������ ����� a
	pD = (double*)pV; // pD (����������) ����� ���� �, ���� pV
	d = *pD;     // ��������� �������� �� �������, �� ��� ����� pD, � d

	int* pE;
	pV = &b;
	pE = (int*)pV;
	e = *pE;

	char* pF;
	pV = &c;
	pF = (char*)pV;
	f = *pF;
}