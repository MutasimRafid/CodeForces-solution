#include<bits/stdc++.h>
using namespace std;

int main(){
int n,h;

int ans = 0;
cin>>n>>h;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//working loop
for(int i = 0;i<n;i++){
    if(arr[i]>h){
        ans += 2;
    }
    else{
        ans++;
    }
}
cout<<ans<<endl;

return 0;
}
