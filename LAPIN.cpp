#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	int l,h;
	l=0;
	h=s.length()-1;
	while(l<=h)
	{
		if(s[l]==s[h])
		{
			l++;
			h--;
		}
		else
		{
			break;
		}
	}
	if(l>=h)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
	}
}
