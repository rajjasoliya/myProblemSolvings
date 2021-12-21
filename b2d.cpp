#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0,result=0;
    while(n!=0){
        int bit = n%10;
        ans = bit*pow(2,i)+ans;
        n/=10;
        i++;
    }
    cout<<ans;
    return 0;
}