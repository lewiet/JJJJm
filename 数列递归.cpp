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
 //ʱ�临�Ӷȵ�n=1,2ʱ�����Ӷ�ΪO��1��������n>2ʱ��ʱ�临�Ӷ�ΪO��n����

