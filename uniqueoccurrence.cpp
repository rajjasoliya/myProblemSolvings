#include<bits/stdc++.h>
using  namespace std;
int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum element from the array  
}  
string countSort(int a[], int n) // function to perform counting sort  
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1]; //create count array with size [max+1]  
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0; // Initialize count array with all zeros  
  }  
    
  for (int i = 0; i < n; i++) // Store the count of each element  
  {  
    count[a[i]]++;  
  }
//    for (int i = 0; i <= max; i++) // Store the count of each element  
//   {  
//       if(count[i]==0){
//           continue;
//       }
//     cout<<count[i]<<endl;  
//   }
  for (int i = 0; i < n; ++i){
      for(int j = i+1; j <= n;j++){
    if(i==j || count[i]==0 || count[j]==0){
          continue;
    }
    if(count[i]==count[j]){
            return "it's not valid, occurrence is same";
    }
      }
  }
  
return "it's valid, occurrence is different";

}
int main(){
    int arr[10]={0,0,0,1,1,2,2,2,2,10};
    int size = sizeof(arr)/sizeof(arr[0]);
   string res = countSort(arr,size);
     cout<<res<<endl;
    return 0;
}