#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
cin>>s;
int c = 0;
for(int i = 0; i < s.size();i++){
    if(s[i] == '4' || s[i] == '7'){
        c++;
    }
}
if(c==7 || c==4){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}
