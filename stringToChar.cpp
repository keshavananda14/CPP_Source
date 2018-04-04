#include<iostream>
#include<string.h>
 
using namespace std;

int main()
{
	string str = "GeeksForgeeks";
	int len = str.length();
	char arr[len+1];
	strcpy(arr,str.c_str());
	for(int i = 0; i < len; i++)
		cout << arr[i];

	return 0;
}
