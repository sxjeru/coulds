#include<stdio.h>
int main()
{
    long d,sum=1,max=0;
    scanf("%ld",&d);
    long t[d];
    for (int i=1;i<=d;i++){
        scanf("%ld",&t[i]);
    }
    for (int i=1;i<=d-1;i++){
        if (t[i]<t[i+1]){
            sum++;
        }
        else{
            if(max<sum){
                max=sum;
            }
            sum=1;
        }
    }
    if(max<sum){
        max=sum;
    }
    printf("%ld",max);
}