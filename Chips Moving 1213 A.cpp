#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
 //input
 ll n;
 cin>>n;
 ll arr[n];
 ll cntOdd = 0;
 for(int i = 0;i<n;i++){
    cin>>arr[i];
    cntOdd += arr[i] & 1;//frequency of odd numbers
 }
  ll ans = min(cntOdd,n-cntOdd);
  cout<<ans<<endl;


}

int main(){
ll t = 1;

//cin>>t;
while(t--){
    solve();
}

return 0;
}


