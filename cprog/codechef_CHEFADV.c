#include<stdio.h>

int t,n,m,x,y;
int flag=1;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		scanf("%d",&x);
		scanf("%d",&y);
		n=n-1;
		m=m-1;
		
		if(n < x && m < y )
		{
			if((n==1 && m==1) || (n==0 && m==0) )
			printf("Chefirnemo\n");
			else
			printf("Pofik\n");
		}
		else 
		{
			if((n%x == 0 && m%y == 0)  ||  ((n-1)%x == 0 && (m-1)%y == 0) )
			printf("Chefirnemo\n");
			else
			printf("Pofik\n");
		}
	}
	
return 0;
}
