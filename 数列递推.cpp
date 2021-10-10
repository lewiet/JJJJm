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
//时间复杂度当n=1,2时，复杂度为O（1），当你n>2时，时间复杂度为O（n）。

