#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int upper = 0;
int lower = 0;

for(int i = 0;i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z'){
        upper++;
    }
    else if(s[i]>='a'&&s[i]<='z'){
        lower++;
    }
}
if(upper>lower){
        //covert to uppercase
    for(int i = 0;i<s.size();i++){
        s[i] = toupper(s[i]);
    }
}
else{
        //covert to lowercase
    for(int i = 0;i<s.size();i++){
        s[i] = tolower(s[i]);
    }
}

cout<<s<<endl;


return 0;
}
