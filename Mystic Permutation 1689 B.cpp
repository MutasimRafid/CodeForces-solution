#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  ll arr2[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
    arr2[i] = arr[i]; //copying
  }

  if(n == 1){
    cout<<-1<<endl;
    return;
  }

  sort(arr2,arr2+n);

  for(int i = 0;i<n-1;i++){
    if(arr2[i] == arr[i]){
        swap(arr2[i],arr2[i+1]);
    }
  }
  //last element
  if(arr[n-1] == arr2[n-1]){
    swap(arr2[n-1],arr2[n-2]);
  }

  //cout<<"ans: "<<endl;
  for(int i = 0;i<n;i++){
    cout<<arr2[i]<<" ";
  }
  cout<<endl;

}

int main(){
ll t;
cin>>t;
while(t--){
    solve();
}

return 0;
}


