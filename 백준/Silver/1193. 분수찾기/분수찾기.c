#include <stdio.h>
int main() {
    int x,c,p;
    int i=0;
    int y=0;
    scanf("%d",&x);
    while (i<x){
        i+=y;
        y++;
    }
    y--;
    if(y%2==0){
        c=y-(i-x);
        p=1+(i-x);
    } else {
        c=1+(i-x);
        p=y-(i-x);
    }
    printf("%d/%d",c,p);
}