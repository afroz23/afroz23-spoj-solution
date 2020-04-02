#include<iostream>
using namespace std;
int main()
{
	int t,count;
	long long int n,i,p;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%lld",&n);
	p=n/2;
	for(i=2;i<=p;i++)
	{  count=0;
		if(n%i==0)
		{   count++;
			printf("NO\n");
			break;
		}	
	}
	if(count==0)
	{
		printf("YES\n");
	}
}
return 0;
}
