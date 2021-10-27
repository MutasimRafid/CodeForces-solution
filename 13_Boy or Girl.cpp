#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int c = 1;
//sorting so that we can compare it's elements
sort(s.begin(),s.end());

//comparing if equal to previous or not
//if equal then counter won't increase as only distinct element needs to be counted
//i = 1 as comparing from 2nd element with it's previous element
for(int i = 1;i<s.size();i++){
    if(s[i]!=s[i-1]){
        c++;
    }
}
//now if odd/ even
if(c%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else{
    cout<<"IGNORE HIM!"<<endl;
}
return 0;
}
