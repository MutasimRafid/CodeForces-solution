#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int steps = 0;
if(n<5){
    steps = 1;
}
else if(n>=5 && n%5==0){
    steps = n/5;
}
else if(n>=5 && n%5!=0){
    steps = n/5 + 1;
}
else{}

cout<<steps<<endl;

return 0;
}
