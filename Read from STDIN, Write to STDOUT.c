#include<stdio.h>

int main(){
    int N,i;
    char S[16];
    scanf("%d",&N);
    for(i=0;i<=14;i++)
    {
        scanf("%c",&S[i]);
    }
    if(N<=10)
    {
        printf("%d\n",N*2);
    }
    
    printf("%s",S);
    
}