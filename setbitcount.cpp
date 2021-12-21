#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans1=0,count1=0,count2=0,ans2=0,a,b,i=0;
    cin>>a>>b;
    while(a||b !=0){
        int bit1 = a&1;
        int bit2 = b&1;
        ans1=ans1*pow(10,i)+bit1;
        ans2 = ans2*pow(10,i)+bit2;
        a=a>>1;
        b=b>>1;
        if(bit1 == 1){
            count1++;
        }
        if(bit2 == 1){
            count2++;
        }
    }
    cout<<count1+count2;
    return 0;
}
