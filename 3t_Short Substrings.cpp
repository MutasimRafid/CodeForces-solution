#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    string ans = "";
    int n = s.size();
    ans = ans + (char)s[0] + (char)s[1];

    for(int i = 3;i<n;i+=2){
        ans = ans + (char)s[i];
    }
    cout<<ans<<endl;
}



return 0;
}
