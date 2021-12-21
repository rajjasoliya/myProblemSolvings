#include<bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int n,int key){
    for(int i = 0; i < n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int a[5]={0,1,2,3,4};
    int key=0;
    int size = sizeof(a)/sizeof(a[0]);
    if(linear_search(a,size,key)){
        cout<<"available";
    }else{
        cout<<"not available";
    }
    return 0;
}