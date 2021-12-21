#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int fact(int);
    int r,n;
    cin >> n >> r;
    int result = fact(n)/(fact(r)*fact(n-r));
    cout<<fact(n)<<endl;
    cout<<fact(r)<<endl;
    cout<<fact(n-r)<<endl;
    cout<<result<<endl;
    return 0;
}