#include<conio.h>
#include<stdio.h>
int main()
{ 
int a[4][4],b[4][4],m[4][4],i,j,k;
printf("enter value of matrix a \n");
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
		scanf("%d",&a[i][j]);
}

//---------------------------
for(i=1;i<=3;i++){
	for(j=1;j<=3;j++)
		printf("%d\t",a[i][j]);
	printf("\n");
}
printf("\n");
//**************************


printf("enter value for matrix b\n ");
for(i=1;i<=3;i++)
{for(j=1;j<=3;j++)
scanf("%d",&b[i][j]);
}
//**********************
for(i=1;i<=3;i++){
	for(j=1;j<=3;j++)
		printf("%d\t",b[i][j]);
	printf("\n");
}
printf("\n");
//**********************



for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		m[i][j]=0;

		for(k=1;k<=3;k++)
		{
			m[i][j]=m[i][j]+a[i][k]*b[k][j];
			
		}
		printf("%d\t",m[i][j]);
	}
printf("\n");
}
return 0;
}
