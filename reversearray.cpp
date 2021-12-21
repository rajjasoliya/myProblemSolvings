#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[6]={0,5,10,20,30,40};
    int size = sizeof(a)/sizeof(a[0]);
    int j=size-1;
    for(int i=0; i<size-i;i++){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
        
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}