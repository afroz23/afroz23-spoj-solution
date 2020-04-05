#include<iostream>
using namespace std;
int main()
{
	int t,i,n,j,k,count;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	count=0;
	j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			b[j]=i;
			j++;
		}
	}
	
	for(k=0;k<j-1;k++)
	{  
		if(b[k+1]-b[k]>=6)
		{
			count++;
		}
	}
	if(count==j-1)
	{
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	}
		
	}
}
