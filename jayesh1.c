#include<stdio.h>
int main()
{
int num;
printf("enter a number=");
scanf("%d",&num);
if(num==0)
{
	printf("number is not valid\n");
}
else if((num>=1 && num<=9)||(num<=-1 && num>=-9))
{
printf("one digit number\n");
}
else if((num>=10 && num<=99)||(num<=-10 && num>=-99))
{
printf("two digit number\n");
}
else if((num>=100 && num<=999)||(num<=-100 && num>=-999))
{
printf("three digit number\n");
}
else if((num>=1000 && num<=9999)||(num<=-1000 && num>=-9999))
{
printf("four digit number\n");
}
else if(num>=10000 || num<=-10000)
{
printf("more then four digit number\n");
}
main();
}
