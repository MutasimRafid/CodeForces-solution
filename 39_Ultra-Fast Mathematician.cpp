#include<iostream>
#include<string>
using namespace std;

int main(){
string s1,s2;
cin>>s1>>s2;
string s = "";
for(int i = 0;i<s1.length();i++){
    if(s1[i]==s2[i]){
        s = s + "0";
    }
    else{
        s = s + "1";
    }
}
cout<<s<<endl;


return 0;
}
