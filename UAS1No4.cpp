
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define clrscr(); system("cls");

void pengurangan (int m, int n);

int main()
{
	int a, b;
	a = 5;
	b = 9;

	clrscr();
	pengurangan(a, b);

	cout << "\n Nilai setelah fungsi digunakan"; 
	cout << "\n a = " << a << " b = " << b << endl;
	cout << "Masih memiliki nilai yang sama karena tidak dilakukan perubahan dan juga tidak berupa reference" << endl;
}

void pengurangan(int m, int n) { // perubahan nama fungsi tambah menjadi pengurangan

	cout << "\n Nilai dari parameter m dan n di dalam fungsi pengurangan sebelum di re-assign ke dengan nilai baru";
	cout << "\nm = " << m << " n = " << n << endl;

	int dikurangi = (m - n);
	cout << "\n Nilai di dalam fungsi pengurangan ketika dilakukan artimatika pengurangan";
	cout << "\n dikurangi = " << dikurangi << endl;

	m = 5;
	n = 7;

	cout << "\n Nilai di dalam fungsi pengurangan setelah di re-assign dengan nilai baru";
	cout << "\nm = " << m << " n = " << n;
	cout << endl;
}
