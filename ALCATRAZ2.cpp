#include<iostream>
using namespace std;
int main()
{
	int t,i;
	long long int sum;
	cin>>t;
	string s;
	while(t!=0)
	{   sum=0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
	 		sum=sum+(int)s[i]-'0';
       }
		cout<<sum<<endl;
		t--;
	}
}
