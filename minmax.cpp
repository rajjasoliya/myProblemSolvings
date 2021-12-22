#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,0,2,5,4};
    int min=0,max=0;
    for(int i=1;i<5;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
        if(arr[i]>arr[max]){
            max=i;
        }
    }
       cout<<arr[min]<<" "<<arr[max]<<endl;
    return 0;
}
