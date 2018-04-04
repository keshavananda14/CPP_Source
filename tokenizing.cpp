#include<bits/stdc++.h>

using namespace std;

int main()
{
	string line = "GeeksForGeeks is a must try";
	vector <string> Tokens;
	stringstream check2(line);
	string intermdat;

	while(getline(check2, intermdat, ' '))
	{
		Tokens.push_back(intermdat);
	}

	for(int i=0; i < Tokens.size(); i++)
		cout << Tokens[i] << '\n';

}
