#include<stdio.h>

int main(){
	int N[100000],i,p,q;
	unsigned long int T;
	scanf("%lu",&T);
	for(i=0;i<T;i++){
	scanf("%d",&N[i]);
	}
	for(i=0;i<T;i++)
	{
	if(N[i]<=108)
	{
	p = N[i]%12;
	q = N[i]%6;
	if(p == 0 || p >6)
	{
		if(q == 1)
		{	
			printf("%d ",N[i]-1);
			printf("WS\n");
		}
		if(q == 2)
		{
			printf("%d ",N[i]-3);
			printf("MS\n");
		}
		if(q == 3)
		{
			printf("%d ",N[i]-5);
			printf("AS\n");
		}
		if(q == 4)
		{	
			printf("%d ",N[i]-7);
			printf("AS\n");
		}
		if(q == 5)
		{
			printf("%d ",N[i]-9);
			printf("MS\n");
		}
		if(q == 0)
		{
			printf("%d ",N[i]-11);
			printf("WS\n");
		}
	}
	if(p<=6 && p>0)
	{
		if(q == 1)
		{	
			printf("%d ",N[i]+11);
			printf("WS\n");
		}
		if(q == 2)
		{
			printf("%d ",N[i]+9);
			printf("MS\n");
		}
		if(q == 3)
		{
			printf("%d ",N[i]+7);
			printf("AS\n");
		}
		if(q == 4)
		{	
			printf("%d ",N[i]+5);
			printf("AS\n");
		}
		if(q == 5)
		{
			printf("%d ",N[i]+3);
			printf("MS\n");
		}
		if(q == 0)
		{
			printf("%d ",N[i]+1);
			printf("WS\n");
		}
	}
	}
	
}
}
