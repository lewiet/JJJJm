 #include <iostream> 
using namespace std;
int func(int n)
{
int per=1;
int perper=1;
int add;
int i;
if(n==1){return 1;}
if(n==2){return 1;}
for(i=3;i<=n;i++)
{
add=per+perper;
per=perper;
perper=add;
}
return add;
}
int main(){
	int m=10;
	 	for(int n=1;n<=m;n++)
 	{
 		
 		cout<<func(n)<<"  ";
	 }
	 
}
//ʱ�临�Ӷȵ�n=1,2ʱ�����Ӷ�ΪO��1��������n>2ʱ��ʱ�临�Ӷ�ΪO��n����

