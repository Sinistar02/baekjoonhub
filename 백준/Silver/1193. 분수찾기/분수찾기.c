#include <stdio.h>
int main() {
    int x;
    int i=0;
    int y=0;
    scanf("%d",&x);
    while (i<x){
        i+=y;
        y++;
    }
    y--;
    if(y%2==0)
        printf("%d/%d",y-(i-x),1+(i-x));
    else
        printf("%d/%d",1+(i-x),y-(i-x));
}