#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int c1 = 0,c2 = 0,c3 = 0;
string s2 = "";
string s3 = "";
//frequency of 1,2,3
for(int i = 0;i<s.size();i++){
    if(s[i]=='1'){
        c1++;
    }
    else if(s[i]=='2'){
        c2++;
    }
    else if(s[i]=='3'){
        c3++;
    }
    else{}
}
//now add to the second string
for(int i = 0;i<c1;i++){
    s2 = s2 + "+1";
}
for(int i = 0;i<c2;i++){
    s2 = s2 + "+2";
}
for(int i = 0;i<c3;i++){
    s2 = s2 + "+3";
}
for(int i = 0;i<s2.size();i++){
    //omit the 1st + sign
    if(i>0){
        s3 = s3 + s2[i];
    }
}

cout<<s3<<endl;


return 0;
}
