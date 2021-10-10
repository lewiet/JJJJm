#include<iostream>
using namespace std;
int func(int n)
{
	if(n==1)
	return 1;
	return n*func(n-1);
	
 } 
 int main()
 {
 	int num;
 	cout<<"ÇëÊäÈënum£º"<<endl;
 	cin>>num;
 	cout<<func(num);
 	return 0;
 }

