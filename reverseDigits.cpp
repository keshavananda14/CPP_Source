#include<iostream>

using namespace std;

int main()
{
	int num = 0,revNum = 0;
	std::cout << "Please Enter the Number to reverse: ";
	std::cin >> num;
	for(int i = num; i != 0; i /= 10)
		revNum = revNum * 10 + i%10;	
	std::cout << "Reversed Number: " << revNum << endl;
}
