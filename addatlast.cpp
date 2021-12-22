#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int ans=0;
    int j=0;
    for(int i=4;i>=0;i--){
        ans=ans+(arr[j]*pow(10,i));
        j++;
    }
    ans+=1;
    // cout<<ans<<endl;
    int ans1[5];
    for(int i=4;i>=0;i--){
        ans1[i]=ans%10;
        ans/=10;
        // cout<<ans1[i]<<endl;
}
    cout<<ans1[4]<<endl;
    return 0;
}