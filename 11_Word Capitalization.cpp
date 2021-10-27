#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
//if 1st letter is lowercase then make it uppercase
    if(s[0]>'Z'){
        s[0] = s[0]-32;
    }

    //now make rest of the letters lowercase. i = 1 as starting from 2nd letter
/*
for(int i = 1;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z'){
        s[i] = s[i] -
    }
}
*/
cout<<s<<endl;
return 0;
}
