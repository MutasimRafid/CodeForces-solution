#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int counter = 0;
    int diff = 0;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    //algo: difference needs to be 1. now after sorting if there exists any two element
    //which have a difference greater than 1(>1). then no. else yes
    sort(arr,arr+n);
    for(int i = 1;i<n;i++){
        diff = arr[i] - arr[i-1];
        if(diff>1){
            counter = 1;
        }
    }

    if(counter == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}



return 0;
}
