#include<iostream>
using namespace std;
void insertsort(int a[],int n,int k) 
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		
		if(a[i]<a[i-1])//比较两个数的大小 
		{
			temp=a[i];//把比较小的数放在临时空间里面 
			for(j=i-1;a[j]>temp;j--)//j其实就是i的前一个数 
			{
				a[j+1]=a[j];//把元素后移一位数 
				
			}
		a[j+1]=temp;//如果a[j]小于temp，则把temp的值赋值到a[j]的后一位数 
		 
		}
	}
	 
	cout<<"第"<<k<<"个数据为"<<a[k-1];
	cout<<endl;
}
int main()
{
	int k;
	int a[]={4,36,7,9,2,8,13,5};
	cout<<"请输入k的值"<<endl;
	cin>>k;
	
	insertsort(a,8,k);
	
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	 
	return 0;
}

