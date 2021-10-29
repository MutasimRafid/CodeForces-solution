#include<bits/stdc++.h>
using namespace std;

int main(){
int limak,bob;
cin>>limak>>bob;

int i = 1;
while(i>0){
    limak = 3*limak;
    bob = 2*bob;
    if(limak>bob){
        break;
    }
    i++;
}
cout<<i<<endl;

return 0;
}
