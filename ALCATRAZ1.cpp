#include<iostream>
using namespace std;
int main()
{
	long long int n;
	int t,sum,i;
	cin>>t;
	while(t!=0)
	{  
	sum=0;
	cin>>n;
	while(n!=0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	cout<<sum<<endl;
	t--;
}
return 0;
}
