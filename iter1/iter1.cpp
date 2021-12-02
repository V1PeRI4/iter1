#include <iostream>
using namespace std;

void fillMass(double* mass, int length);
void clear(double* mass);

int main()
{
	setlocale(LC_ALL, "Russian");
	double* mass;
	int n;
	double result = 0;

	cout << "Введите длинну последовательности: ";
	cin >> n;
	mass = new double[n];

	cout << "Последовательность: ";
	fillMass(mass, n);

	for (int i = 1; i <= n; i++)
	{
		result += mass[i];
	}

	cout << result;
	
	clear(mass);
}



void fillMass(double* mass, int length)
{
	for (int i = 1; i <= length; i++)
	{
		mass[i] = pow(-1, i+1) / pow(i, 2);
		cout << mass[i] << " ";
	}
	cout << endl;
}



void clear(double* mass)
{
	delete[]mass;
}