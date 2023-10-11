#include <stdio.h>

int main() {
    int n,m,i,j,t,k;
    scanf("%d %d",&n,&m);
    int nlist[n];
    for(k=1;k<=n;k++){
        nlist[k-1]=k;
    }
    for(k=0;k<m;k++){
        scanf("%d %d",&i,&j);
        i--;
        j--;
        t=nlist[i];
        nlist[i]=nlist[j];
        nlist[j]=t;
    }
    for(int k=0;k<n;k++){
        printf("%d ",nlist[k]);
    }
    return 0;
}