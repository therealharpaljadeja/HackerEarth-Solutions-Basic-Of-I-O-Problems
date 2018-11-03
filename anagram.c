#include<stdio.h>

#include<string.h>
int main(){
	int T,i,j,counta=0,countb=0,count=0,final_count=0,k;
char a[3] = {'c','d','e'}, b[3] = {'a','b','c'};
	//for(i=0;i<T;i++)
	//{
		//scanf("%s",&a);
		//scanf("%s",&b);
	//}
	printf("%s",a);
	for(k=0;k<T;k++){
	for(i=0;i<=strlen(a);i++){
		for(j=0;j<=strlen(b);j++)
		{
			if(a[i] == b[j]){
				counta++;
			}
		}
	}
	for(i=0;i<strlen(b);i++){
		for(j=0;j<strlen(a);j++)
		{
			if(a[j] == b[i]){
				countb++;
			}
		}
	}
	if(counta < countb){
		count = counta;
	}
	else{
		count = countb;
	}
	final_count = strlen(a)-count + strlen(b) - count;
	printf("%d",final_count);
	}
	
}
