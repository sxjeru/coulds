#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //以二维数组形式存储输入数据
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    //行元素数初始化
    int l[n],r[n];
    for(int i=1;i<=m;i++){
        l[i]=1;
        r[i]=m;
    }
    //开始处理数据
    int y,h,t=0;
    long long sum=0;
    for(h=1;h<=m;h++){                       //取数循环
        for(y=1;y<=n;y++){
            if(a[y][l[y]]<=a[y][r[y]]){      //取出行边界中较小的数 并收束边界
                t+=a[y][l[y]];
                l[y]++;
            }
            else{
                t+=a[y][r[y]];
                r[y]--;
            }
        }
        sum=sum+t*pow(2,h);
        t=0;
    }
    cout<<sum<<endl;
    return 0;
}