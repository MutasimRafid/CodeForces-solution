#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int sum = 0;
int result = 0;
//input
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
for(int i = 0;i<n;i++){
    sum = sum + arr[i];
}

if(sum%4==0){
    result = sum/4;
}
else{
    result = sum/4 + 1;
}
cout<<result<<endl;

return 0;
}
