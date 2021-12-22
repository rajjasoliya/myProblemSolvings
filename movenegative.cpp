#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={1,0,2,0,1,0,2,1};
    int j=0;
    for(int i=0;i<8;i++){
        if(arr[i]<=0){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    for(int i=0;i<8;i++){
        if(arr[i]==1){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
    //need to sort array
    //print array
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
    return 0;
}
