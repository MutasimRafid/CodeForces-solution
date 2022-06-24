#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    int n;
    cin>>n;

 int arr1[n+2];
 int arr2[n+2];
 //input
 for(int i = 0;i<n;i++){
    cin>>arr1[i];
 }
 for(int i = 0;i<n;i++){
    cin>>arr2[i];
 }


 int maxi1 = INT_MIN;
 int maxi2 = INT_MIN;



 for(int i = 0;i<n;i++){
    if(arr1[i]<arr2[i]){
        maxi1 = max(maxi1,arr2[i]);
        maxi2 = max(maxi2,arr1[i]);
    }
    else{
        maxi1 = max(maxi1,arr1[i]);
        maxi2 = max(maxi2,arr2[i]);
    }
 }

 //cout<<"ans: "<<endl;
 cout<<maxi1*maxi2<<endl;


}

int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

return 0;
}


