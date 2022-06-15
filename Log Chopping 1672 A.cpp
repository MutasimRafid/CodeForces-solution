#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
 int n;
 cin>>n;
 int arr[n];
 int cnt = 0;
 for(int i = 0;i<n;i++){
    cin>>arr[i];
    cnt += arr[i] - 1;
 }

 //if odd errorgorn
 //if even maomao90
 //odd
 if(cnt % 2 == 1){
    cout<<"errorgorn"<<endl;
 }
 else{
    cout<<"maomao90"<<endl;
 }



}

int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

return 0;
}


