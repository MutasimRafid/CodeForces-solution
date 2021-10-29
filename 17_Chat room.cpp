#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
string a = "hello";
int x = 0,y = 0;

for(int i = 0;i<s.size();i++){
    if(s[i]==a[x]){
        x++;//to move pointer in the string a
        y++;//if total 5 or not as hello has 5 letters
    }
}
if(y==5){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}
