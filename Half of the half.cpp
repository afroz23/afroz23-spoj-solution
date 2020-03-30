#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,k,i;
	string s;
	scanf("%d",&n);
	while(n!=0)
	{
	cin>>s;
	k=s.length();
	for(i=0;i<k/2;i=i+2)
	{
		printf("%c",s[i]);
	}
}}
