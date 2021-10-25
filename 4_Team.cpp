#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int ans = 0;
while(n--){
    int a[3];
    int c = 0;

    //input
    for(int i = 0;i<3;i++){
        cin>>a[i];
    }
    //finding the solution
    for(int i = 0;i<3;i++){
        if(a[i]==1){
            c++; //how much person can solve a problem
        }
    }
    if(c>=2){
        ans++;
    }
}
cout<<ans<<endl;

return 0;
}
