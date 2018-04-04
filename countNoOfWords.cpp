//#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int countWords(string str)
{
	int count = 0;
	stringstream str2(str);
	string word;
	while(str2 >> word)
		count++;
	return count;
}

int main()
{
	string str = "Geeks for geeks in google";
	int count = countWords(str);
	cout << "No of Words: " << count << endl;
	return 0;
}
