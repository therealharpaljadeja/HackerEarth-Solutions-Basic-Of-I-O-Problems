#include<stdio.h>

int main(){
    int N,P=0,M=0,i;
    scanf("%d",&N);
    i=1;
    if(N<10000){
        while(P>=0 && M>=0){
                P = N-i;
                N = P;
                M = N-(i*2);
                N = M;
                i++;
                if(P<0){
                printf("Patlu");
                break;}
                if(M<0)
                printf("Motu");
        }
    }
}