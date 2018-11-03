#include<stdio.h>
#include<string.h>

int main(){
    int i,x,y,len;
    char dir[200];
    scanf("%s",dir);
    len = strlen(dir);
    x = 0;
    y = 0;
     if(len <= 200)
    {
        for(i=0;i<=len-1;i++)
        {
            if(dir[i] == 'L'){
                x -= 1;
            }
            if(dir[i] == 'R'){
                x += 1;
            }
            if(dir[i] == 'U'){
                y += 1;
            }
            if(dir[i] == 'D'){
                y -= 1;
            }
        }
    }
    printf("%d %d", x,y);
} 