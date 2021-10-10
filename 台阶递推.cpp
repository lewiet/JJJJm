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
	cout<<"请输入台阶数："<<endl;
	cin>>n; 
	cout<<func(n)<<endl;
}
//时间复杂度当n=1,2时，复杂度为O（1），当你n>2时，时间复杂度为O（n）。

