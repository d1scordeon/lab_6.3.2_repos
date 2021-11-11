#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

template <typename A>
A Print1(A* a, const A size) {
	for (A i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	cout << endl;
	return 0;
}

template <typename B>
B Print2(B* b, const B size)
{
	for (B i = 0; i < size; i++)
		cout << "b[" << setw(2) << i << " ] = " << setw(4) << b[i] << endl;
	cout << endl;
	return 0;
}

template <typename C>
C Mul(C* a, const C size)
{
	C c = 0;
	for (C i = 0; i < size; i++)
		c += a[i] * a[i];
	return c;
}

template <typename D>
D Mul1(D* b, const D size)
{
	D c = 0;
	for (D i = 0; i < size; i++)
		c += b[i] * b[i];
	return c;
}

int Sum(int* a, int* b, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		S += (a[i] * a[i]) + (b[i] * b[i]);
	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 1;
	int a[n], b[n];
	int Low = -20;
	int High = 50;

	Create(a, n, Low, High);
	Print1(a, n);
	Create(b, n, Low, High);
	Print2(b, n);

	cout << "a*a= " << Mul(a, n) << endl;
	cout << "b*b= " << Mul1(b, n) << endl;
	cout << "sum = " << Sum(a, b, n) << endl;

	return 0;
}