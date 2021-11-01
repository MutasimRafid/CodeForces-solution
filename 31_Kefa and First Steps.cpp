#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int c = 1;//to count current size of non decreasing subsegment
int maxCount = INT_MIN; //to find the largest non decreasing subsegment
//input
for(int i = 0;i<n;i++){
    cin>>arr[i];
}

//working start

//if arr has only 1 element
if(n==1){
    cout<<1<<endl;
    return 0;
}
for(int i = 0;i<n-1;i++){
    if(arr[i]<=arr[i+1]){
        c++;
    }
    else{
        c = 1;
    }
    if(c>maxCount){
        maxCount = c;
    }
}

cout<<maxCount<<endl;

return 0;
}
