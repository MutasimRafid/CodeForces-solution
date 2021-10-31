#include<bits/stdc++.h>
using namespace std;

int main(){
int n,t;
cin>>n>>t;
string s;
cin>>s;
string s2;
for(int i = 0;i<t;i++){
    //j<size-1 cause if 5 elements j will go till 4th elements. And will compare 4th and 5th
    for(int j = 0;j<s.size()-1;j++){

            //there have to be a B and after that a G
            // if found then swap them

        if(s[j]=='B'&&s[j+1]=='G'){
            swap(s[j],s[j+1]);

            //another j++ cause
            //for i = 0,  j=0>>(B),j+1=1>>(G)...BGGBG>(swap)GBGGB.
            //now for i = 1,j needs to be 2.. cause previously j=0 and j=1 was swapped
            //so j=2>>(G),j+1=3>>G, so no swap

            j++;
        }
    }
}
cout<<s<<endl;

return 0;
}
