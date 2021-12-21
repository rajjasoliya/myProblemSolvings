#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total Amount : ";
    cin>>n;
    int hundred=0;
    int fifty=0;
    int twenty=0;
//second


    switch(100){
        case 100: 
            cout<<"The total amount contains notes is :"<<endl;
            hundred = n/100;
            cout<<"100 rs notes = "<<hundred<<endl;
            n = n%100;
            
        
        case 50: 
            fifty = n/50;
            cout<<"50 rs notes = "<<fifty<<endl;
            n = n%50;
            
        
        case 20: 
            twenty = n/20;
            cout<<"20 rs notes = "<<twenty<<endl;
            n = n%20;
        
        case 1:
            cout<<"1 rs notes = "<<n<<endl;
        
        
        
    }
    

    return 0;
}