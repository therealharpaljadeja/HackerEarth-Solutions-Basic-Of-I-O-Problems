#include<stdio.h>

int main(){ 
    int sh[10000],sm[10000],eh[100000],em[100000],hh[100000],mm[100000],T,i,change;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&sh[i]);
        scanf("%d",&sm[i]);
        scanf("%d",&eh[i]);
        scanf("%d",&em[i]);
    }
    for(i=0;i<T;i++){
    change = 0;
    if(sm[i]>em[i]){
        change = 1;
    }
    if(change == 1){
        hh[i] = eh[i]-1-sh[i];
    }
    else{
        hh[i] = eh[i] - sh[i];
    }
    if(em[i]>sm[i]){
        mm[i] = em[i] - sm[i];
    }
    else{
        mm[i] = (60 - sm[i]) + em[i];
        if(mm[i] == 60)
        {
            hh[i] += 1;
            mm[i] = 0;
        }
        if(sm[i] == em[i]){
            hh[i] = hh[i] -1;
        }
    }
    printf("%d ",hh[i]);
    printf("%d\n",mm[i]);
    }
}