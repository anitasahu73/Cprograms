#include<stdio.h>
#include<math.h>

int t,num,i,j,count;
long long int res,n[100001];

void pno(int n)
{
	int i,flag=0;;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag = 0 ;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	if(flag == 1)
	{
		count++;
	}

}

int main()
{
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&num);
		count=0;
		for(i=0;i<num;i++)
		{
			scanf("%d",&n[i]);
		}
		
		for(j=0;j<num;j++)
		{
			for(i=0;i<j;i++)
			{
				res = n[i]^n[j];
				if(res>=4)
				{
					if(res%2 == 0)
					{
						count++;
					}
					else 
					{
						pno(res-2);
					}
					
				}
			}
		}
		printf("%d",count);
		
	}
	return 0;
}
