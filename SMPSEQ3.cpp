#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j;
	
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	
	for(i=0;i<n;i++)
	{  
		for(j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				break;
			}
		}
		//ut<<j;
		if(j==m)
		{
			cout<<a[i]<<" ";
		}
} 
}
