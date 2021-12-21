#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[7]={1,2,3,4,5,6,7};
    int size = sizeof(a)/sizeof(a[0]);
    for(int i=0; i<size;i+=2){
        if(i+1<size){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1]=temp;
        }
        
    }
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    // cout<<size;
    return 0;
}