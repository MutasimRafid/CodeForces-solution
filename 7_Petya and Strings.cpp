#include<iostream>
#include<string>
#include<cstring> //to take tolower
using namespace std;

int main(){
string s1;
string s2;
cin>>s1>>s2;
//as upper and lower case doesn't matter(are same here). so making the whole string to lower
for(int i = 0;i<s1.size();i++){
    s1[i] = tolower(s1[i]);
    s2[i] = tolower(s2[i]);
}

//if strings are equal
if(s1 == s2){
    cout<<0<<endl;
}
else{

    for(int i = 0;i<s1.size();i++){
    //if first string is greater
    if(s1[i]>s2[i]){
        cout<<1<<endl;
        break;
    }
    //if second string is greater
    if(s1[i]<s2[i]){
        cout<<-1<<endl;
        break;
    }
}
}

return 0;
}

