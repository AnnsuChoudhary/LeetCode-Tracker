#include<iostream>
using namespace std;

int main(){

    int n = 4;

    //Method - 1

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(j<n-i){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Method - 2

    // for(int i=0; i<n; i++){
    //     for(int j=n; j>i; j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    //Method - 3
    int i=0;

    while(i<n){
        int j = n;

        while(j>i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}


//Output
/*

****
***
**
*

*/
