#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int isugly(int num)
{
	int i=0, a[]={2,3,5};
	while (i<3)
	{ 
	  while(num % a[i]==0)
	    num/=a[i];
		i++;}

     return num;}
     
int main()
{
	int n,i=0,c=0;
	cin>>n;
	
	while(c<n)
	{	  i++;  
	 if(isugly(i)==1)
	     c++;
	}
	
	cout<<"the "<<n<<"th ugly number :"<<i;
	//cout<<i;
	return 0;
}
	

