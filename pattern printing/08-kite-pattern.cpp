#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){
            if(j<n-i+1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }

        for(int k=0; k<i; k++){
            cout<<"*";
        }

        cout<<endl;
    }
    

    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){
            if(j<=i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }

        for(int k=0; k<n; k++){
            if(k>=i){
                cout<<"*";
            }
        }

        cout<<endl;
    }
    
    
    return 0;
}

//Output

/*
    *
   ***
  *****
 *******
  *****
   ***
    *
*/

