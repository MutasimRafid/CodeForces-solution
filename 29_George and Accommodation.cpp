#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int c = 0;
while(n--){
    int p,q;
    cin>>p>>q;
     //p+1 cause at least 2 seats needed
    if(q>p+1){
        c++;
    }
}
cout<<c<<endl;

return 0;
}
