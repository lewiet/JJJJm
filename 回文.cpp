#include<iostream>
using namespace std;
bool Huiwen(string s)
{
	int start =0;
	int end=s.length()-1;
	while(end>start)
	{
		if(s[end]!=s[start])
		{
		     cout<<s<<"  is not a palindrome"<<endl; 
		     return false;
		}
		else{
			end--;
			start++;
		}
	}
	cout<<s<<"  is a palindrome"<<endl;
	return true;
 } 
 int main()
 {
 	string s1="aba";
 	string s2="ab";
 	Huiwen(s1);
 	Huiwen(s2);
 	return 0;
 }

