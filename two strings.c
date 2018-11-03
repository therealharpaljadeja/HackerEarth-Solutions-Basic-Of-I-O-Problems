#include<stdio.h>
#include<string.h>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char *a, int l, int r, char *b)
{
   int i;
   if(l == r)
   {
	   
   }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l),(a+i));
		  printf("%s\n",a);
          permutation(a,l+1, r,b);
          swap((a+l), (a+i));
       }
   }
}

int main(){
	int i,j,T,len1,len2;
	char s1[100000],s2[100000];
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%s",s1);
		scanf("%s",s2);
		len1 = strlen(s1);
		len2 = strlen(s2);
	if(len1 == len2)
	{
		permutation(s1,0,len1-1,s2);
	}
	else{
		printf("NO");
	}
	}
}