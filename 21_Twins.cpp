#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
int sum = 0;
int sumHalf = 0;
int coin = 0;
int newSum = 0;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
//finding out the sum
for(int i = 0;i<n;i++){
    sum = sum + arr[i];
}
sumHalf = sum/2;
sort(arr,arr+n);

//finding out number of minimum coins
for(int i = n-1;i>=0;i--){
    if(newSum>sumHalf){
        break;
    }
    newSum = newSum + arr[i];
    coin++;
}
cout<<coin<<endl;
//cout<<"sumhalf"<<sumHalf<<endl;
//cout<<"newsum"<<newSum<<endl;
return 0;
}
