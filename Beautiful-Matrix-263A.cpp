#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
int a[5][5];
for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
    cin>>a[i][j];
  }
}
int x,y;
for(int i=0;i<5;i++){
  for(int j=0;j<5;j++){
    if(a[i][j]==1){
      x=i+1;
      y=j+1;
    }
  }
}
//cout<<x<<y<<endl;
int s=abs(x-3)+abs(y-3);
cout<<s;


}
