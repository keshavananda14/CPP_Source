#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	int &ref = x;
	cout << "ref = " << ref << endl;
	ref = 30;
	cout << "x = " << x << endl;
	x = 10;
	cout << "ref = " << ref << endl;
}
