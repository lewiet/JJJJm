#include<iostream>
using namespace std;
int main()
{
	int sum=1;
	int n;
	cout<<"请输出n的值"<<endl;
	cin>>n;
	for(int num=1;num<=n;num++)
	{
		sum=num*sum;
	}
	cout<<sum<<endl;
	
	
	return 0;
//时间复杂度为O（n）	 
	
	
	
}

