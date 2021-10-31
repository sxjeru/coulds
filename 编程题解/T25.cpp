#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n){
    bool prime=true;
    if (n==1){
        prime=false;
        return prime;
    }
        for (int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                prime=false;
                return prime;
            }
        }
    return prime;
}
int main(){
    int sum=0,num=0,m,n,i;
    cin>>m>>n;
    for (i=m;i<=n;i++){
        if (prime(i)){
            sum+=i;
            num++;
        }
    }
    cout<<num<<" "<<sum<<endl;
    return 0;
}