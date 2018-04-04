#include<iostream>

using namespace std;

int main()
{
	int num = 0,sum = 0;
	std::cout << "Enter the Number: ";
	std::cin >> num;
	std::cout << "Number is: " << num << endl;
	for(int i = 1; i <= num; i++)
	{
		if(num % i == 0)
		{
			sum += i;		
			std::cout << i << " ";
		}
	}
	std::cout << "SUM is: " << sum << endl;
	
}
