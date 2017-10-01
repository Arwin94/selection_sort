#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	int a[10];
	cout<<"Enter the number of elements ";
	cin>>n;
	cout<<" Enter elements ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"elements are ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i]<<"  ";
	}
	
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
    	int smallest=i;
       for(int j=i+1;j<n;j++)
         { 
		    	if(a[j]<a[smallest])
              	{
    		           smallest=j;
    		           int temp=a[smallest];
                       a[smallest]=a[i];
                       a[i]=temp;
                }
       	}
			
	}
	
	cout<<"elements are ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i]<<"  ";
	}
}
