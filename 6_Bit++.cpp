#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int value = 0;
while(t--){
    string s;
    cin>>s;
    //as ++ means value will increase by 1 and -- means value will decrease by 1
    //so ++x or x++ . 1st or 2nd value of string will be +. we don't need to think about x.
    //same for --
    if(s[0]=='+'||s[1]=='+'){
        value++;
    }
    else if(s[0]=='-'||s[1]=='-'){
        value--;
    }
    else{}
}
cout<<value<<endl;

return 0;
}
