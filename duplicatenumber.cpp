#include<bits/stdc++.h>
using namespace std;
int duplicateNumber(int arr[],int size){
    int max = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[max]){
            max=arr[i];
        }
    }
    int a[max];
    for(int i=0;i<=max;i++){
        a[i]=0;
    }
    for(int i=0;i<size;i++){
        a[arr[i]]++;
        if(a[i]>=2){
            return arr[i];
        }
    }
    for(int i=0;i<=max;i++){
        cout<<a[i]<<endl;
    }
    // cout<<max;
}
int main(){
    int arr[10]={0,1,3,2,4,5,6,7,9,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int str = duplicateNumber(arr,size);
    cout<<str<<endl;
    return 0;
}