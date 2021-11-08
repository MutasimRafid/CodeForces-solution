#include<iostream>
using namespace std;

int main(){
long long n;
cin>>n;
long long ans = 0;
//using for loop approach will give TLE
//so I will use mathematical formula
//if n even, then ans = n/2. iff odd then ans = (n+1)/2 * (-1)
if(n%2==0){
    ans = n/2;
}
else{
    ans = ((n+1)/2) * (-1);
}

cout<<ans<<endl;
return 0;
}
