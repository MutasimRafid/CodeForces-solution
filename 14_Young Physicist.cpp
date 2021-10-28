#include<bits/stdc++.h>
using namespace std;

int main(){
//here column is fixed : x,y,z
//only row is input
int row;
cin>>row;
int arr[100][100]; //row constrain is highest 100
int sumX = 0, sumY = 0,sumZ = 0;
//input in 2d array
for(int i = 0;i<row;i++){ //row
    for(int j = 0;j<3;j++){ //column
        cin>>arr[i][j];

    }
    //adding the values of columns
    sumX += arr[i][0];
    sumY += arr[i][1];
    sumZ += arr[i][2];
}
//now test if x,y,z is zero/not?
if(sumX == 0 && sumY == 0 && sumZ == 0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}
