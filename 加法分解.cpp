#include <iostream>

using namespace std;

int sum = 0;

 

void  jiafa1(int n,int count,int*p){ 

if(n == 0){  
	cout<<sum<<"=";
	for(int i = 0;i < count;i++){
		if(i == count-1){
			cout<<p[i]<<endl;
		}else{
			cout<<p[i]<<"+";
		}
	}
return;
}
for(int i = 1;i <= n;i++){
	p[count] = i;
	jiafa1(n-i,count+1,p);
}
return;
}



void jiafa2(int n,int count,int*p){  

if(n == 0){  
	cout<<sum<<"=";
	for(int i = 0;i < count;i++){
		if(i == count-1){
			cout<<p[i]<<endl;
		}else{
		  	cout<<p[i]<<"+";
		}
	}
	return;
}
int k = count > 0 ? p[count-1] : 1;  
for(int i = k;i <= n;i++){
	p[count] = i;
	jiafa2(n-i,count+1,p);
}
}

int main(){

while(1){
    int n,m;
        cout<<"����������n�ͷ���m��";
    cin>>n>>m;
    sum = n;
    int* p = new int[n];
    if(m==1){
	    jiafa1(n,0,p);
    }else if(m==2){
 	    jiafa2(n,0,p);
    }
}
return 0;
}

