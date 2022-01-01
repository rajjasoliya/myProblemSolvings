
#include<bits/stdc++.h>
using  namespace std;
int b2d(int n){
    int ans = 0,i=0;
    while(n!=0){
        int bit = n%10;
        ans = bit*pow(2,i)+ans;
        n/=10;
        i++;
    }
    return ans;
}
int main(){
    int n=11;
    int m=1;
    int ans,ans1,ans2;
    int i=0,result=0;
    ans1=b2d(n);
    ans2=b2d(m);
    ans=b2d(ans1+ans2);
    return ans;
}