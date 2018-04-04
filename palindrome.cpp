#include<iostream>

using namespace std;

int main()
{
	int num = 0,revNum = 0;
	std::cout << "Enter the Number: ";
	std::cin >> num;
	for(int i = num; i != 0; i/=10)	
		revNum = revNum*10 + i%10;
	if(revNum != num)
		cout << num << " is not Palindrome number" << endl;
	else
		cout << num << " is a Palindrome Number" << endl;
}
