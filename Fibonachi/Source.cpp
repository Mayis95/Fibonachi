#include<iostream>

using std::cout;
using std::cin;
using std::endl;
int * Fibonachi(int &a1, int &a2, int length);

int main()
{
	int a, b;
	cout << "Enter first 2 digits" << endl;
	cin >> a >> b;
	int * digits = Fibonachi(a, b, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << digits[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}

int * Fibonachi(int &i1, int &i2, int length)
{
	int * arr = new int[length];
	arr[0] = i1;
	arr[1] = i2;
	for (int i = 0; i < length; i++)
	{
		arr[i + 2] = arr[i] + arr[i + 1];
	}
	return arr;
}