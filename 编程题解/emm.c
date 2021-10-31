#include<stdio.h>
#include<math.h>
int M(int a,int a1){
    int c,m,n;
    m=fmax(a,a1);
    n=fmin(a,a1);
    while(n!=0){
        c=m%n;
        m=n;
        n=c;
    }
    return m;
}
int main()
{
    int n,sum=0;
    int a,b;
    scanf("%d",&n);
    for (int i=1;i<=n;++i){
        int a1,b1;
        scanf("%d/%d",&a1,&b1);
        sum+=a1/b1;
        a1=a1%b1;
      if(i==1){a=a1;b=b1;}
        else{
            int m=b*b1/M(b,b1);
            a=a*(m/b)+a1*(m/b1);
            b=m;
            sum+=a/b;
            a=a%b;
        }
  while(1){
      int l=M(a,b);
      if(l==1){break;}
      a/=l;b/=l;
   }
}
 if(sum==0){
     if(a==0){printf("0\n");}
     else {printf("%d/%d",a,b);}
 }
   else{
       printf("%d",sum);
       if(a==0){printf("\n");}
       else {printf(" %d/%d",a,b);}
   }
 
return 0;}