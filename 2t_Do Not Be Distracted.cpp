#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c = 0;
    vector<int>a(26,0);
    //using hashing
    a[s[0]-'A'] = 1;

    //loop from 2nd element
    for(int i = 1;i<n;i++){
        if(s[i] == s[i-1]){
            continue;
        }
        else{
            if(a[s[i] - 'A'] > 0){
                cout<<"NO"<<endl;
                c = 1;
                break;
            }
            else{
                    //hashing 1
                a[s[i] - 'A'] = 1;

            }
        }
    }
    if(c == 0){
        cout<<"YES"<<endl;
    }
}

return 0;
}
