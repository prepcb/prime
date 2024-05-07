#include<stdio.h>
int main(){
int P[1000];
P[1]=1;
P[2]=2;
int m=2;
int i,j,k;

for(i=3;i<50;i++){
    j=2;
    k=P[j];
    while((i % k)!=0 & j<m+1){
        j++;
    }
    if(j>m){
        printf("%d ",i);
        m++;
        P[m]=i;
    }
}
printf("\n");
}