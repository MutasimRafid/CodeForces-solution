#include<iostream>
using namespace std;

int main(){
int m,n;
cin>>m>>n;
int dominoPiece = 2*1; //the area of domino piece
int ans = (m*n)/dominoPiece; //m*n is the area of the rectangular shape
cout<<ans<<endl;
return 0;
}
