#include<iostream>

using namespace std;

int countSpaces(char ch)
{
	int count = 0;
	string str = "Geeks for Geeks is good for learning";
	int len = str.length();
	cout << "String Length: " << len << endl;
	for( int i = 0; i < len ; i++)
	{
		if(isspace(str[i]))
			count++;
			
	}
	return count;
}

int main()
{
	char ch = ' ';
	int count = countSpaces(ch);
	cout << "No of Spaces: " << count << endl;
	return 0;
}
