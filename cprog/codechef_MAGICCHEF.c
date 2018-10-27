#include<stdio.h>

int s1=0,s2=0;
int count;

int x,t,n,i;
int flag=0;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&x);
		scanf("%d",&count);
		flag = x;
		for(i=0;i<count;i++)
		{
			scanf("%d",&s1);
			scanf("%d",&s2);
		
		
		
			if(flag == s1)
			{
				flag=s2;
			}
			else if(flag == s2)
			{
				flag=s1;
			}
		
		}
		
		printf("%d\n",flag);
		
		
	}
	return 0;
}
