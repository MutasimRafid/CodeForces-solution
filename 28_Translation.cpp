#include<iostream>
using namespace std;

int main(){
string s;
cin>>s;
string gs;
cin>>gs;
string s2 = "";
int flag = 1;
for(int i = s.size()-1;i>=0;i--){
    s2 = s2 + s[i];
}
//if ok or not
for(int i = 0;i<gs.size();i++){
    if(gs[i]!=s2[i]){
        flag = 0;
    }
}

if(flag == 1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
