#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <string> color;
	
	color.push_back("Red");
	color.push_back("Grean");
	color.push_back("Blue");
	color.push_back("Black");
	color.push_back("Yellow");

	for(int i = 0; i < color.size(); i++)
	{
		cout << color[i] << endl;
	}
}
