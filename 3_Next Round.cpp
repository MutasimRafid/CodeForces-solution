#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n>>k;//here k value is 1 based indexing
int arr[n];
int c = 0;
//input
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//working loop
for(int i = 0;i<n;i++){
        //arr[i] needs to be greater/equal to arr[k] and arr[i] must have to be positive
    if(arr[i]>=arr[k-1]&&arr[i]>0){
        c++;
    }
}

cout<<c<<endl; //output

return 0;
}
