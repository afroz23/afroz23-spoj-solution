#include<iostream>
using namespace std;
int main()
{
	int n,i,j,divisor,p,test;
	cin>>test;
	while(test-->0)
	{
	int c=0,i=0;
	cin>>n;
	int a[n];
	for(j=2;j<=n/2;j++)
			{ 
				if((n%j)==0)
				{
			  		c++;
				}
			}
		if(c==0)
		{
			a[i++]=j;
		}
		else
		{
			cout<<"Not Prime"<<endl;
		}
		for(p=0;p<n;p++)
		{
			cout<<a[p]<<endl;
		}
	}
	for(p=0;p<n;p++)
		{
			cout<<a[p]<<endl;
		}
	
}
