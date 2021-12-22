#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[8]={2,0,1,0,1,2,0,1};
    int j=8,i=0;

    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
    return 0;

}
    // while(j>=0 && i<=8){
    //     if(arr[i]==0){
    //         i++;
    //     }
    //     else if(arr[j]==2){
    //         j--;
    //     }
    //     //else if(arr[i]==1 && arr[j]==0)
    //     else{
    //         int temp =arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //         i++;
    //         j--;
    //     }
    // }