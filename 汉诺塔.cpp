#include <iostream>
using namespace std;
int i = 0; 
void move(int n,char j,char k){  
cout <<"��"<<++i<<"���ƶ�:��"<<n<<"��Բ�̴�"<< j<<"�ƶ���"<<k <<endl;
}
void hanuo (int n,char a,char b,char c){  
if (n == 1){  
	move(1,a,c); 
}
else {
	hanuo(n-1,a,c,b); 
	move(n,a,c);	 
	hanuo(n-1,b,a,c);
}
}
int main ()
{
char a ='a';
char b = 'b';
char c ='c';
int n = 0;
cout<<"������Բ����:";
cin>>n; 
hanuo(n,a,b,c);
}

