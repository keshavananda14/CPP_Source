#include<iostream>

using namespace std;

char words[][6] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void printDigitsToWords(int num)
{
	int digits[10];
	int dc = 0;
	do
	{
		digits[dc] = num%10;
		num = num/10;
		dc++;
	}while(num!=0);
	for(int i = dc -1; i >= 0; i--)
	{
		std::cout << " " << words[digits[i]];
	}
	std::cout << endl;
}

int main()
{
	int num = 0;
	std::cout << "Enter the Number: ";
	std::cin >> num;
	printDigitsToWords(num);
}
