#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n){
    bool prime=false;
    if(n==2 || n==3){
        prime=true;
        return prime;
    }
    if (n%2!=0){
        for (int i=2;i<=sqrt(n);i++){
            if(n%i!=0){
                prime=true;
                return prime;
            }
        }
    }
    return prime;
}
int main(){
    int num,i,p=0,r=0;
    cin>>num;
    for (i=2;i<=sqrt(num);i++){
        if(num%i==0){
            p=num/i;
        }
        if(prime(i) && prime(p) && r<max(i,p)){
            r=max(i,p);
        }
    }
    cout<<r<<endl;
    return 0;
}