#include<iostream>
using namespace std;

int main(){
bool flag = false;
int n;
cin>>n;
while(n){
    if(flag == false){
        cout<<"I hate ";
        flag = true;
    }
    else{
        cout<<"I love ";
        flag = false;
    }
    if(n>1){
        cout<<"that ";
    }
    else{
        cout<<"it";
    }
    n--;
}

return 0;
}
