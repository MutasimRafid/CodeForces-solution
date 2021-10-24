#include<bits/stdc++.h>
using namespace std;

int main(){

//@author Rafid

long long n,m,a,x,y;
cin>>n>>m>>a;
long long ans;
//for n
if(n%a!=0){
    x = n/a +1;
}
else{
    x = n/a;
}

//for m
if(m%a!=0){
    y = m/a+1;

}
else{
    y = m/a;
}

ans = x * y;
cout<<ans<<endl;
return 0;
}
