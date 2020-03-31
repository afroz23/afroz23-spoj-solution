#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1,y1,r1,x2,y2,r2,t;
	float c1c2,r;
	cin>>t;
	while(t!=0)
	{
	cin>>x1>>y1>>r1>>x2>>y2>>r2;
	c1c2=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	r=abs(r1-r2);
	if(c1c2==r)
	{
		cout<<"E"<<endl;
	}
	else if(c1c2<r)
	{
		cout<<"I"<<endl;
	}
	else{
		cout<<"O"<<endl;
	}
	t--;
	}	
}
