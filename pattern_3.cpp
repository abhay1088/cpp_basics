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

// ****************** another pattern **************************
#include<iostream>
using namespace std;
int main() {    
       int rows,i,j,k;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=i;j<=rows ;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//  OUTPUT :
//  FOR ROWS =5
     *
    **
   ***
  ****
 *****
