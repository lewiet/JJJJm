#include<iostream>
using namespace std;
int main()
{
	int sum=1;
	int n;
	cout<<"ÇëÊä³önµÄÖµ"<<endl;
	cin>>n;
	for(int num=1;num<=n;num++)
	{
		sum=num*sum;
	}
	cout<<sum<<endl;
	
	
	return 0;
	 
	
	
	
}
