#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i,t,a1;
	scanf("%lld",&t);
	while(t--)
	{   
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			a[i]=(a[i]%(10^9+7));
		}
		sort(a,a+n,greater<int>());
			a1=0;
		for(i=0;i<n;i++)
		{
			if(a[i]!=0 && a[i]-i>=0)
			{
				a1=(a1+(a[i]-i))%(10^9+7);
			}
		}
		printf("%lld\n",a1);
	}
}
