#include <iostream> 
using namespace std;
int func(int n)
{ int per=1;
 int perper=2;
 int add;
 int i;
 if(n==1){return 1;}
 if(n==2){return 2;}
 for(i=3;i<=n;i++){

add=per+perper;
per=perper;
perper=add;}

return add;
}
int main(){
	int n;
	cout<<"������̨������"<<endl;
	cin>>n; 
	cout<<func(n)<<endl;
}
//ʱ�临�Ӷȵ�n=1,2ʱ�����Ӷ�ΪO��1��������n>2ʱ��ʱ�临�Ӷ�ΪO��n����

