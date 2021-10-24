#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s.size()>10){
        //size of the string in the middle except first and last
        int len = s.size()-2;
        //converting int into string
        string s2 = to_string(len);
        //now making the output string containing 1st,last and middle strings
        string N = s[0] + s2 + s[s.size()-1];
        cout<<N<<endl;
    }
    else{
        cout<<s<<endl;
    }
}

return 0;
}
