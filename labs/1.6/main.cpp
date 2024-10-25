#include <iostream>

int main()
{
	char chVar1;
	chVar1 = 'R';
	char chVar2 = '7';

	char chVar3;
	chVar3 = 0x32; // символ '2' в таблиці ASCII
	char chVar4 = 0x63; // символ 'c' в таблиці ASCII

	const char CONST1 = '>';
	const char CONST2 = 0x1a; // SUB в таблиці ASCII

	// Part 2

// Task 1: Опис змінних int, float, unsigned short
	int a;
	float b;
	unsigned short c;

	// Task 2: Ініціалізація змінних з п.1 
	a = 682;
	b = -8.4e2; // 1.23 * 10^4 = 12300.0
	c = 25921;

	// Task 3: Опис змінних double, int, char
	double d;
	int e;
	char f;

	// Task 4.1: Ініціалізація з неявним приведенням типів
	d = a;    // int -> double
	e = b;    // float -> int (втрата дробової частини)
	f = c;    // unsigned short -> char (можлива втрата даних, якщо c > 127)


	// Task 4.2: Ініціалізація з явним приведенням типів
	d = (double)a;
	e = (int)b;
	f = (char)c;


	// Task 4.3: Ініціалізація з обходом суворої типізації 
	void* pV;  // void покажчик (нетипізований)

	double* pD;
	pV = &a;       // pV вказує на адресу змінної a
	pD = (double*)pV; // pD (типізований) вказує туди ж, куди pV
	d = *pD;     // копіювання значення за адресою, на яку вказує pD, в d

	int* pE;
	pV = &b;
	pE = (int*)pV;
	e = *pE;

	char* pF;
	pV = &c;
	pF = (char*)pV;
	f = *pF;
}