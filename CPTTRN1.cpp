#include<iostream>
using namespace std;
int main()
{
	int i,j,n,m,t,c;
	scanf("%d",&t);
	while(t!=0)
	{ c=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<m;j++)
		{ if(c%2==0)
		{
			if(j%2==0)
			{
				printf("*");
			}
			else{
				printf(".");
			}
		}
			else{
			if(j%2==0)
			{
				printf(".");
			}
			else{
				printf("*");
			}
		}
		}
		printf("\n");
		c++;
	}
	t--;
	}
	return 0;
}
