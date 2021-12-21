#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    int a=0,b=1,finalNumber;
    for(int i=0;i<n;i++){
        finalNumber=a+b;
        a=b;
        b=finalNumber;
    }
    return finalNumber;
}
int main(){
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans;
    return 0;
}