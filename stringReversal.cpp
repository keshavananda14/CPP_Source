#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
	//string str = "abcdefghijklmnopqrstuvwxyz";
	string str;
	cout << "Enter the string to reverse: ";
	cin >> str;
	int n = str.length();
	
#if 0
	for(int i = 0; i <n/2 ; i++)
	{
		char c = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = c;
	}	
#else
	reverse(str.begin(),str.end());
#endif
	cout << "String after Reverse: " << str << endl;
}
