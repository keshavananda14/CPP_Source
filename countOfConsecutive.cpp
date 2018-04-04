#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printDistinctSubStrs(string str)
{
    // Create a map to store unique substrings of
    // size 2
    map<pair<char,char>, int> dPairs;
 
    // Count occurrances of all pairs
    for (int i=0; i<str.size()-1; i++)
        dPairs[make_pair(str[i], str[i+1])]++;
 
    // Traverse map to print sub-strings and their
    // counts.
    cout << "Distinct sub-strings with counts:\n";
    //for (auto it=dPairs.begin(); it!=dPairs.end(); it++)
      //  cout << it->first.first << it->first.second << "-" << it->second << " ";
}

int main()
{
	string str1 = "abcacdcacabacaassddssklac";
	printDistinctSubStrs(str1);
	return 0;
}
