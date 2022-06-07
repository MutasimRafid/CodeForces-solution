#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
  string s;
  cin>>s;
  //a,b = frequency of A,B in the string
  ll a = 0,b = 0,ans = 0;
  for(int i = 0;i<s.size();i++){
    if(s[i] == 'A'){
        a++;
    }
    if(s[i] == 'B'){
        b++;
    }
    //b cant > than a
    if(b>a){
    ans = 1;
    break;
    }
  }

  //1st value in the string cant be B
  //last value cant be A
  //ans = 0 if yes
  if(s[0] == 'B' || ans == 1 || s[s.size()-1] != 'B'){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
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


