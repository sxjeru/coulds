#include<stdio.h>
int main()
{
    char s[3];
    int n,j=0,i=1,x;
    scanf ("%d",&n);
    char r[n];
    while (i<=n*4){
        scanf ("%s",s);
        if (s[2]=='T'){
            r[j]=s[0];
            j++;
        }
        i++;
    }
    for (i=0;i<n;i++){
        x=(int)r[i]-64;
        printf("%d",x);
    }
}