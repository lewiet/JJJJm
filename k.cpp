#include<iostream>
using namespace std;
void insertsort(int a[],int n,int k) 
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		
		if(a[i]<a[i-1])//�Ƚ��������Ĵ�С 
		{
			temp=a[i];//�ѱȽ�С����������ʱ�ռ����� 
			for(j=i-1;a[j]>temp;j--)//j��ʵ����i��ǰһ���� 
			{
				a[j+1]=a[j];//��Ԫ�غ���һλ�� 
				
			}
		a[j+1]=temp;//���a[j]С��temp�����temp��ֵ��ֵ��a[j]�ĺ�һλ�� 
		 
		}
	}
	 
	cout<<"��"<<k<<"������Ϊ"<<a[k-1];
	cout<<endl;
}
int main()
{
	int k;
	int a[]={4,36,7,9,2,8,13,5};
	cout<<"������k��ֵ"<<endl;
	cin>>k;
	
	insertsort(a,8,k);
	
	for(int i=0;i<8;i++)
	{
		cout<<a[i]<<" ";
	}
	 
	return 0;
}

