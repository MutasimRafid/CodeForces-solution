#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int c1 = 0,c2 = 0;
//for 1
for(int i = 0;i<s.size();i++){
    if(s[i]=='1'){
        c1++;
    }
    //if 7 one s are found or not
    if(c1>=7){
        break;
    }
    //if anything except 1 comes on the way then reset c1
    if(s[i]!='1'){
        c1 = 0;
    }

}
//for 0
for(int i = 0;i<s.size();i++){
    if(s[i]=='0'){
        c2++;
    }
    //if 7 zero found or not
    if(c2>=7){
        break;
    }

    //if anything except 0 comes on the way then reset c2
    if(s[i]!='0'){
        c2 = 0;
    }

}

//checking if dangerous or not
if(c1>=7 || c2>=7){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
