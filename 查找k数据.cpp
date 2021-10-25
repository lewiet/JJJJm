#include<iostream>
using namespace std;
#define MaxSize 10
void merging(int *list1,int *list2,int list1_size,int list2_size)
 {
 	int i=0,j=0,y=0;
 	int temp[MaxSize];
 	 while(i<list1_size&&j<list2_size )
 	{
 		if(list1[i]<list2[j])
 		{
 			temp[y++]=list1[i++];
 			
			 
		 }
		 else
		 {
		 	temp[y++]=list2[j++];
		 	
		 }
		 
	 }
	 while(i<list1_size)
	 {
	 	
	 	temp[y++]=list1[i++];
		  
	 }
	 while(j<list2_size)
	 {
	 	temp[y++]=list2[j++];
	 }
	for(int m=0;m<(list1_size+list2_size);m++)
	{
		list1[m]=temp[m];
	 } 
	  
	  
 }
void merge(int a[],int n)
{
	if(n>1)
	{
		int *list1=a;
	int list1_size=n/2;
	int *list2=a+n/2;
	int list2_size=n-n/2;
	merge(list1,list1_size);
	merge(list2,list2_size);
	merging(list1,list2,list1_size,list2_size);
	
	}
	 
	  
	
	
 } 
  
 int main()
 {
 	int a[10]={1,2,4,7,94,3,56,71,12,6};
 	merge(a,10);
 	 
 	for(int i=0;i<10;i++)
 	{
 		cout<<a[i]<<" ";
 		
	 }
	 cout<<endl;
	 int k;
 	cout<<"请输入k的值"<<endl; 
 	cin>>k;
 	cout<<"第"<<k<<"个数据："<<a[k-1];
	 return 0;
 	
 }
 
 

