#include <stdio.h> 
#include <iostream>
#include <fstream>
#include <math.h>
#include <conio.h>

using namespace std; int main()
{
	setlocale(LC_ALL, "Russian");
	double e = 0.00001, s = 2, si = 0, t = 1;
	unsigned long long n = 1, k = 1;

	while (abs(s - si) > e)
	{
		si = s;
		n += 1;
		t /= n;
		s += t;
		cout << "Разложением в ряд s = " << s << " n = " << n << " " << endl;
	}
	if (k == 1 && s == 2 && si == 0)
	{
		while (abs(s - si) > e)
		{
			si = s;
			s = 0;
			for (unsigned long long i = 0; i >= k; i++)
			{
				if (i % 2 == 0)
				{
					s = 1 / (i - s);
				}
				else
				{
					s = 1 / (2 + s);
					k++;
				}
				cout << "Цепной дробью s = " << s << "n = " << k;
				if (n < k)
				{
					cout << "Разложением в ряд быстрее";
				}
				else if (n > k)
				{
					cout << "Цепной дробью быстрее";
				}
				else
				{
					cout << "Одинаковое количесто итераций обоими способами";
				}
			}
		}
	}
}

