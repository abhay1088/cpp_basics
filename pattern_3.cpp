#include<iostream>
using namespace std;

int main() {   
int rows,i,j;
    cin>>rows;
    for(i=rows;i>=1;i--){
        for ( j=1;j<=i; j++)
        {
         cout<<j<<" ";
        }
        cout<<endl;
    }
  return 0;
}

//  OUTPUT :
//  FOR ROWS =5
1 2 3 4 5 
1 2 3 4 
1 2 3
1 2
1
