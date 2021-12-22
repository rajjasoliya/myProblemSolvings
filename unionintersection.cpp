#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr1[5]={0,1,2,3,4};
    int arr2[3]={2,4,2};
    int k=0;
    for(int i=0; i<5;i++){
        for(int j=k;j<3;j++){
            if(arr1[i]<arr2[j]){
                break;
            }
            if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            k++;
            break;
            }
        }
    }
    
    return 0;
}