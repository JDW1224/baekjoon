#include<iostream>
using namespace std;

int main()
{

	int a, b;

	cin >> a >> b;

	int c = b / 100;
	int d = b / 10 - c * 10;
	int e = b % 10;

	cout << a * e << endl;
	cout << a * d << endl;
	cout << a * c << endl;
	cout << a * b << endl;

	return 0;
}
