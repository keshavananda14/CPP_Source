#include <iostream>
using namespace std;

template <class T>
T myfun(T a, T b)
{
	return ((a>b)?a:b);
}

int main()
{
	std::cout<< myfun<int> (3,5) << endl;
	std::cout << myfun<float> (4.2,5.6) << endl;
	std::cout << myfun<char> ('g','h') << endl;
}
