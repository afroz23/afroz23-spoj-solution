#include<iostream>
using namespace std;
int main()
{
	int i,j,a,b,m,n,t;
	cin>>t;
	while(t!=0){
	cin>>a>>b>>m>>n;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(i==m || j==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<".";
			}
		}
		cout<<"\n";
	}
	t--;
}
	return 0;
}
