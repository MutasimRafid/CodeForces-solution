#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int ans = 1;
//input
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//working loop
for(int i = 0;i<n-1;i++){
    if(arr[i]!=arr[i+1]){
        ans++;
    }
}
cout<<ans<<endl;
return 0;
}
