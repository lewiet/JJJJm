#include<iostream>
using namespace std;
int f(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return f(n-1)+f(n-2);
	}
  } 
 int main()
 {
 	int m=10;
 	for(int n=1;n<=m;n++)
 	{
 	 		cout<<f(n)<<"  ";
	 }
 	return 0;
 }
 //时间复杂度当n=1,2时，复杂度为O（1），当你n>2时，时间复杂度为O（n）。

