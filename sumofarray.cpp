#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    int size,sum=0;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;

}