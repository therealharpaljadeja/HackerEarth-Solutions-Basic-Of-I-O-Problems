#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,count=0;
	char s[100];
	fgets(s,100,stdin);
	len = strlen(s);
	for(i=0;i<strlen(s)/2;i++)
	{
		if(s[i] == s[len-i-2])
		{
			count++;
		}
	}
	if(count == strlen(s)/2)
	{
		printf("YES");
	}
	else{
		printf("NO");
	}
}		