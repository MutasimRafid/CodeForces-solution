#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
  ll a,b;
  cin>>a>>b;
  ll diff = abs(a-b); //maximum possible gcd
  if(a==b){
    cout<<0<<" "<<0<<endl;
  }
  else{
    ll x = a%diff;
    ll y = b%diff;
    if(x != y){
        cout<<0<<" "<<0<<endl;
    }
    else{
        ll moves = min(x,diff-x);
        cout<<diff<<" "<<moves<<endl;
    }
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


