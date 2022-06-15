#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
   ll n;
   cin>>n;
   ll a,b,c;
   //given condition: gcd(a,b) = c and a+b+c = n
   //And a,b,c needs to be distinct
   c = 1;

   ll m = n-1;

   //if m odd
   if(m%2 == 1){
    b = 2;
    a = n-3;
   }

   //if m even
   else{
         //if m/2 even
     if((m/2)%2 == 0){
      a = m/2 - 1;
      b = m/2 + 1;
     }
     else{
        //if m/2 odd
        a = m/2 - 2;
        b = m/2 + 2;
     }
   }

   cout<<a<<" "<<b<<" "<<c<<endl;



}

int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

return 0;
}


